// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPAVPOLICYENFORCER_H
#define MPAVPOLICYENFORCER_H


#import <Foundation/Foundation.h>

#import "MPAVController.h"

@interface MPAVPolicyEnforcer : NSObject {
    int _screenRecordingNotifyToken;
    BOOL _lastKnownScreenRecordingState;
}


@property (readonly, weak, nonatomic) MPAVController *controller; // ivar: _controller


-(id)initWithAVController:(id)arg0 ;
-(void)_applicationWillEnterForeground:(id)arg0 ;
-(void)_isScreenRecordingDidChange:(BOOL)arg0 ;
-(void)_registerForScreenRecordingNotifications;
-(void)_unregisterForScreenRecordingNotifications;
-(void)_updateScreenRecordingState;
-(void)dealloc;


@end


#endif