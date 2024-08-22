// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSFINANCEVERIFYPURCHASERESPONSE_H
#define AMSFINANCEVERIFYPURCHASERESPONSE_H

@class NSString, NSDictionary;
@protocol AMSFinancePerformable;

#import <Foundation/Foundation.h>

#import "AMSDialogRequest.h"
#import "AMSURLTaskInfo.h"

@interface AMSFinanceVerifyPurchaseResponse : NSObject <AMSFinancePerformable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) AMSDialogRequest *dialogRequest; // ivar: _dialogRequest
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDictionary *responseDictionary; // ivar: _responseDictionary
@property (readonly) Class superclass;
@property (retain, nonatomic) AMSURLTaskInfo *taskInfo; // ivar: _taskInfo
@property (nonatomic) NSInteger verifyType; // ivar: _verifyType


+(BOOL)isVerifyPurchasePayload:(id)arg0 ;
+(NSInteger)_verifyTypeFromPayload:(id)arg0 ;
+(id)_dialogRequestForCVVFromPayload:(id)arg0 verifyType:(NSInteger)arg1 ;
+(id)_dialogRequestForCarrierFromPayload:(id)arg0 verifyType:(NSInteger)arg1 ;
-(id)_handleCVVDialogResult:(id)arg0 shouldReattempt:(*BOOL)arg1 ;
-(id)_handleCarrierDialogResult:(id)arg0 shouldReattempt:(*BOOL)arg1 ;
-(id)_runCVVRequestForCode:(id)arg0 error:(*id)arg1 ;
-(id)_runCarrierNewCodeWithError:(*id)arg0 ;
-(id)_runCarrierVerifyCode:(id)arg0 error:(*id)arg1 ;
-(id)initWithPayload:(id)arg0 taskInfo:(id)arg1 ;
-(id)performWithTaskInfo:(id)arg0 ;


@end


#endif