// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MCUIUSERENROLLMENTACCOUNTSPECIFIERPROVIDER_H
#define MCUIUSERENROLLMENTACCOUNTSPECIFIERPROVIDER_H

@class NSString;
@protocol DevicePINControllerDelegate;

#import <Foundation/Foundation.h>


@interface MCUIUserEnrollmentAccountSpecifierProvider : NSObject <DevicePINControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *devicePasscodeVerificationCompletionHandler; // ivar: _devicePasscodeVerificationCompletionHandler
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)deleteAccountGroupFooterText;
+(id)labelTextForAccountSummaryCell;
+(id)titleForAccountSummaryGroup;
+(id)warningTextForAccountDeletion;
-(void)_verifyDevicePasscodeWithPresentingViewController:(id)arg0 completionHandler:(id)arg1 ;
-(void)didAcceptEnteredPIN:(id)arg0 ;
-(void)didCancelEnteringPIN;
-(void)preflightsAccountDeletion:(id)arg0 presentingViewController:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif