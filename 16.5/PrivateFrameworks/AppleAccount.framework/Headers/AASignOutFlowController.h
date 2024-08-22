// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AASIGNOUTFLOWCONTROLLER_H
#define AASIGNOUTFLOWCONTROLLER_H

@class ACAccountStore;
@protocol AASignOutFlowControllerDelegate;

#import <Foundation/Foundation.h>


@interface AASignOutFlowController : NSObject {
    ACAccountStore *_accountStore;
}


@property (weak, nonatomic) NSObject<AASignOutFlowControllerDelegate> *delegate; // ivar: _delegate


-(id)init;
-(void)_delegate_disableFindMyDeviceForAccount:(id)arg0 completion:(id)arg1 ;
-(void)_delegate_performWalrusValidationForAccount:(id)arg0 completion:(id)arg1 ;
-(void)_delegate_presentError:(id)arg0 withTitle:(id)arg1 ;
-(void)_delegate_signOutAccount:(id)arg0 completion:(id)arg1 ;
-(void)_disableDeviceLocatorForAccount:(id)arg0 completion:(id)arg1 ;
-(void)_performWalrusValidationForAccount:(id)arg0 completion:(id)arg1 ;
-(void)_preflightSignOutOfAccount:(id)arg0 completion:(id)arg1 ;
-(void)_signOutAppleAccount:(id)arg0 completion:(id)arg1 ;
-(void)signOutAppleAccount:(id)arg0 completion:(id)arg1 ;


@end


#endif