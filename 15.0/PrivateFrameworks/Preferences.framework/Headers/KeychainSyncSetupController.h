// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef KEYCHAINSYNCSETUPCONTROLLER_H
#define KEYCHAINSYNCSETUPCONTROLLER_H



#import "PSSetupController.h"
#import "PSKeychainSyncManager.h"

@interface KeychainSyncSetupController : PSSetupController {
    PSKeychainSyncManager *_manager;
}




-(id)initWithManager:(id)arg0 ;
-(void)cancelPressed;
-(void)showController:(id)arg0 ;


@end


#endif