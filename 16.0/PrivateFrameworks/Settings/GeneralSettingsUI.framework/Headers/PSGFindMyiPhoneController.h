// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSGFINDMYIPHONECONTROLLER_H
#define PSGFINDMYIPHONECONTROLLER_H

@protocol OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface PSGFindMyiPhoneController : NSObject {
    NSObject<OS_dispatch_semaphore> *_stateChangeSem;
}




+(id)shared;
-(BOOL)isFindMyiPhoneEnabled;
-(BOOL)isFindMyiPhoneProvisioned;
-(id)init;
-(id)preferredFindMyiPhoneAccount;
-(void)dealloc;
-(void)disablePhoneLocatorWithMessageString:(id)arg0 buttonTitle:(id)arg1 presentingViewController:(id)arg2 completion:(id)arg3 ;
-(void)enablePhoneLocatorWithCompletion:(id)arg0 ;
-(void)locatorStateDidChange:(id)arg0 ;


@end


#endif