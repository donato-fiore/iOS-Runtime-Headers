// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WKSTYLUSDEVICEOBSERVER_H
#define WKSTYLUSDEVICEOBSERVER_H


#import <Foundation/Foundation.h>


@interface WKStylusDeviceObserver : NSObject {
    NSUInteger _startCount;
    RetainPtr<NSTimer> _changeTimer;
}


@property (readonly, nonatomic) BOOL hasStylusDevice; // ivar: _hasStylusDevice


+(id)sharedInstance;
-(id)init;
-(void)changeTimerFired:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)start;
-(void)startChangeTimer:(CGFloat)arg0 ;
-(void)stop;


@end


#endif