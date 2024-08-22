// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSFINANCEDIALOGRESPONSE_H
#define AMSFINANCEDIALOGRESPONSE_H

@class NSString, NSDictionary;
@protocol AMSFinancePerformable;

#import <Foundation/Foundation.h>

#import "AMSDialogRequest.h"
#import "AMSURLTaskInfo.h"

@interface AMSFinanceDialogResponse : NSObject <AMSFinancePerformable>



@property (readonly, nonatomic) BOOL containsCommerceUIURL; // ivar: _containsCommerceUIURL
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSDictionary *dialogDictionary; // ivar: _dialogDictionary
@property (readonly, nonatomic) AMSDialogRequest *dialogRequest; // ivar: _dialogRequest
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger kind; // ivar: _kind
@property (readonly, copy, nonatomic) NSDictionary *responseDictionary; // ivar: _responseDictionary
@property (readonly) Class superclass;
@property (copy, nonatomic) AMSURLTaskInfo *taskInfo; // ivar: _taskInfo


+(BOOL)_credentialSource:(NSUInteger)arg0 satisfiesAuthenticationType:(NSUInteger)arg1 ;
+(BOOL)_shouldSendOverIDS:(id)arg0 taskInfo:(id)arg1 ;
+(NSInteger)dialogKindForTaskInfo:(id)arg0 withResponseDictionary:(id)arg1 ;
+(id)_handleAskPermissionRequestWithURL:(id)arg0 account:(id)arg1 ;
+(id)_presentDialog:(id)arg0 taskInfo:(id)arg1 ;
+(id)_presentIDSDialog:(id)arg0 taskInfo:(id)arg1 ;
+(id)_serviceActionFromButton:(id)arg0 taskInfo:(id)arg1 ;
+(id)handleDialogResult:(id)arg0 taskInfo:(id)arg1 ;
+(id)performFinanceDialog:(id)arg0 taskInfo:(id)arg1 ;
-(BOOL)_isCommerceUIURL:(id)arg0 actionType:(NSInteger)arg1 URLType:(NSInteger)arg2 ;
-(NSInteger)_actionTypeFromButtonDictionary:(id)arg0 ;
-(id)_createActionFromButtonDictionary:(id)arg0 title:(id)arg1 ;
-(id)_createDialogRequest;
-(id)_createRequestButtonsFromDialogDictionary:(id)arg0 ;
-(id)_enrichedMetricsDictionaryWithFinanceDictionary:(id)arg0 ;
-(id)initWithResponseDictionary:(id)arg0 kind:(NSInteger)arg1 taskInfo:(id)arg2 ;
-(id)performWithTaskInfo:(id)arg0 ;


@end


#endif