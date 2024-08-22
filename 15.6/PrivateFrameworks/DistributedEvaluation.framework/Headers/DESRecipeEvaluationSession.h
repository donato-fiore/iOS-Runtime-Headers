// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DESRECIPEEVALUATIONSESSION_H
#define DESRECIPEEVALUATIONSESSION_H

@class NSDate, NSURL, NSString, NSArray, NSDictionary, NSData, NSError;
@protocol OS_xpc_object;

#import <Foundation/Foundation.h>

#import "DESRecordSet.h"
#import "DESRecipe.h"

@interface DESRecipeEvaluationSession : NSObject {
    NSDate *_startDate;
    NSURL *_baseURL;
    NSString *_localeIdentifier;
    NSDate *_deadline;
    NSDate *_deferralDate;
    NSArray *_attachmentsToDelete;
    CGFloat _resumeTimestamp;
    Class _protocolClass;
    BOOL _wasResumedFromURL;
}


@property (readonly, copy, nonatomic) NSDictionary *JSONResult; // ivar: _JSONResult
@property (retain, nonatomic) NSObject<OS_xpc_object> *activity; // ivar: _activity
@property (readonly, copy, nonatomic) NSData *binaryResult; // ivar: _binaryResult
@property (readonly, copy, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSInteger evaluationResult; // ivar: _evaluationResult
@property (readonly, nonatomic) DESRecordSet *matchingRecordSet; // ivar: _matchingRecordSet
@property (readonly, nonatomic) DESRecipe *recipe; // ivar: _recipe
@property (nonatomic) BOOL requestedToStop; // ivar: _requestedToStop
@property (copy, nonatomic) id *testingCompletionHandler; // ivar: _testingCompletionHandler
@property (copy, nonatomic) NSArray *testingRecipeAttachments; // ivar: _testingRecipeAttachments
@property (copy, nonatomic) NSString *testingRecipePath; // ivar: _testingRecipePath


+(void)initialize;
-(BOOL)taskIsDeferred;
-(id)_initWithDodMLTask:(id)arg0 ;
-(id)_initWithResumptionURL:(id)arg0 recordSet:(id)arg1 protocolClass:(Class)arg2 error:(*id)arg3 ;
-(id)deferWithDeadline:(id)arg0 error:(*id)arg1 ;
-(id)deferralURL;
-(id)initWithResumptionURL:(id)arg0 error:(*id)arg1 ;
-(void)_deleteDownloadedAttachments;
-(void)_postResultsToServerIfNeededWithCompletionHandler:(id)arg0 ;
-(void)completeWithError:(id)arg0 completionHandler:(id)arg1 ;
-(void)completeWithJSONResult:(id)arg0 binaryResult:(id)arg1 completionHandler:(id)arg2 ;
-(void)dealloc;
-(void)downloadAttachmentsWithConfiguration:(id)arg0 completion:(id)arg1 ;
-(void)sendRecipeResponseWithDuration:(CGFloat)arg0 evaluationError:(id)arg1 completion:(id)arg2 ;


@end


#endif