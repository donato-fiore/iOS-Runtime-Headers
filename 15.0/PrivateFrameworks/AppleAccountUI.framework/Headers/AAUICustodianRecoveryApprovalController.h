// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AAUICUSTODIANRECOVERYAPPROVALCONTROLLER_H
#define AAUICUSTODIANRECOVERYAPPROVALCONTROLLER_H

@class NSString, UIViewController;

#import <Foundation/Foundation.h>


@interface AAUICustodianRecoveryApprovalController : NSObject {
    NSString *_recoverySessionID;
    UIViewController *_presenter;
}


@property (nonatomic) BOOL isResetEligible; // ivar: _isResetEligible


+(id)approvalControllerWithPresenter:(id)arg0 recoverySessionID:(id)arg1 ;
-(id)_actionsForRecoveryCodeAlert:(id)arg0 completion:(id)arg1 ;
-(void)_promptForRecoveryCodeWithCompletion:(id)arg0 ;
-(void)_validateRecoveryCode:(id)arg0 withCompletion:(id)arg1 ;
-(void)dealloc;
-(void)validateRecoveryCodeWithCompletion:(id)arg0 ;


@end


#endif