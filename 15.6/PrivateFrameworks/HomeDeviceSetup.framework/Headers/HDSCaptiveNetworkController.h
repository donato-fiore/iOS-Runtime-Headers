// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDSCAPTIVENETWORKCONTROLLER_H
#define HDSCAPTIVENETWORKCONTROLLER_H


#import <Foundation/Foundation.h>


@interface HDSCaptiveNetworkController : NSObject {
    int _stateToken;
    NSUInteger _state;
}




+(id)sharedInstance;
-(id)init;
-(void)_activate;
-(void)_updateAndNotify:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)handleCaptiveCancel;
-(void)handleCaptiveDetected:(id)arg0 ;


@end


#endif