// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NCREVEALWALLETPASSACTIONRUNNER_H
#define NCREVEALWALLETPASSACTIONRUNNER_H

@class SBSCardItem, NSString;
@protocol NCNotificationActionRunner, SBLockScreenPluginLifecycleObserver;

#import <Foundation/Foundation.h>


@interface NCRevealWalletPassActionRunner : NSObject <NCNotificationActionRunner, SBLockScreenPluginLifecycleObserver>

 {
    SBSCardItem *_cardItem;
    id *_pluginCompletionBlock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL shouldForwardAction; // ivar: _shouldForwardAction
@property (readonly) Class superclass;


-(void)didDismissLockScreenPlugin:(id)arg0 ;
-(void)didPresentLockScreenPlugin:(id)arg0 ;
-(void)executeAction:(id)arg0 fromOrigin:(id)arg1 endpoint:(id)arg2 withParameters:(id)arg3 completion:(id)arg4 ;
-(void)willDismissLockScreenPlugin:(id)arg0 ;
-(void)willPresentLockScreenPlugin:(id)arg0 ;


@end


#endif