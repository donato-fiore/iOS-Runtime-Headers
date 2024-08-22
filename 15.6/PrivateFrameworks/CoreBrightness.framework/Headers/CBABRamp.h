// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CBABRAMP_H
#define CBABRAMP_H

@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_log;

#import <Foundation/Foundation.h>

#import "CBDisplayModule.h"

@interface CBABRamp : NSObject {
    CBDisplayModule *_displayModule;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_fadeTimer;
    NSObject<OS_os_log> *_logHandle;
    float _maxLinearBrightness;
    float _minLinearBrightness;
}




-(float)getVersion;
-(id)initWithDisplayModule:(id)arg0 andQueue:(id)arg1 ;
-(void)dealloc;
-(void)setPerceptualBrightnessWithFade:(float)arg0 length:(float)arg1 current:(float)arg2 ;
-(void)stopTransition;
-(void)transitionToBrightness:(float)arg0 force:(BOOL)arg1 periodOverride:(BOOL)arg2 period:(float)arg3 ;


@end


#endif