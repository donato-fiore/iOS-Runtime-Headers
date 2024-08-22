// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSCAPTIVENETWORKCONTROLLER_H
#define HDSCAPTIVENETWORKCONTROLLER_H


#import <Foundation/Foundation.h>


@interface HDSCaptiveNetworkController : NSObject



+(id)sharedInstance;
-(void)_activate;
-(void)handleCaptiveCancel;
-(void)handleCaptiveDetected:(id)arg0 ;


@end


#endif