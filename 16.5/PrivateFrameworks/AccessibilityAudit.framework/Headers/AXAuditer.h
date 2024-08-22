// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXAUDITER_H
#define AXAUDITER_H

@class NSArray, NSMutableArray, NSString;
@protocol AXAuditCategoryResultDelegate, AXAuditCategoryDelegate, OS_dispatch_queue, AXAuditerDelegate;

#import <Foundation/Foundation.h>


@interface AXAuditer : NSObject <AXAuditCategoryResultDelegate, AXAuditCategoryDelegate>



@property (retain, nonatomic) NSArray *_auditCategories; // ivar: __auditCategories
@property (retain, nonatomic) NSArray *_currentTypesToAuditFor; // ivar: __currentTypesToAuditFor
@property (retain, nonatomic) NSMutableArray *_results; // ivar: __results
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *auditQueue; // ivar: _auditQueue
@property (nonatomic) NSUInteger categoryType; // ivar: _categoryType
@property (retain, nonatomic) NSMutableArray *currentRunningCategories; // ivar: _currentRunningCategories
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AXAuditerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) int targetPid; // ivar: _targetPid


+(void)initialize;
-(id)_allCategoriesDescription;
-(id)_auditCategoryForClass:(Class)arg0 ;
-(id)_currentTime;
-(id)allSupportedAuditTypes;
-(id)detectionResultsFromImageData:(id)arg0 ;
-(id)init;
-(void)_clearCurrentRunningCategories;
-(void)_initializeAuditCategories;
-(void)_runCategories:(id)arg0 ;
-(void)auditCategory:(id)arg0 didEncounterIssue:(id)arg1 ;
-(void)auditCategoryResult:(id)arg0 didAppendLogWithMessage:(id)arg1 ;
-(void)didCompleteCategory:(id)arg0 ;
-(void)runCategories:(id)arg0 ;
-(void)startWithAuditTypes:(id)arg0 ;


@end


#endif