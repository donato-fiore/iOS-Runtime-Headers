// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDFPSCACOUNTER_H
#define TSDFPSCACOUNTER_H

@class NSTimer;


#import "TSDFPSCounter.h"

@interface TSDFPSCACounter : TSDFPSCounter {
    unsigned int mCAFrameCount;
    NSTimer *mTimer;
}




-(void)p_updateFrameCount;
-(void)reset;
-(void)startLoggingFPS;
-(void)stopLoggingFPS;


@end


#endif