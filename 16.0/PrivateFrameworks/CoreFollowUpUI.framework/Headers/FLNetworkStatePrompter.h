// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FLNETWORKSTATEPROMPTER_H
#define FLNETWORKSTATEPROMPTER_H

@class UIViewController;

#import <Foundation/Foundation.h>


@interface FLNetworkStatePrompter : NSObject {
    UIViewController *_presenter;
}




-(id)_cancelActionWithCompletionHandler:(id)arg0 ;
-(id)_disableAirplaneActionWithCompletionHandler:(id)arg0 ;
-(id)initWithPresenter:(id)arg0 ;
-(void)_mainQueue_promptToDisableAirplaneModeWithCompletionHandler:(id)arg0 ;
-(void)_mainQueue_verificationFailedAlert;
-(void)dealloc;
-(void)preflightNetworkStateWithCompletionHandler:(id)arg0 ;


@end


#endif