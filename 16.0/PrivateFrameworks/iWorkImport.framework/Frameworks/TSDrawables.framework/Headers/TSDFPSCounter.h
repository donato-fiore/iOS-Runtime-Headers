// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDFPSCOUNTER_H
#define TSDFPSCOUNTER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface TSDFPSCounter : NSObject {
    NSMutableArray *_sampleArray;
    CGFloat _startTimeInterval;
    CGFloat _endTimeInterval;
    NSUInteger _frameCount;
}




-(CGFloat)p_standardDeviationFromArray:(id)arg0 mean:(CGFloat)arg1 ;
-(id)formatInfoForLog:(id)arg0 identifier:(id)arg1 type:(id)arg2 testName:(id)arg3 direction:(id)arg4 duration:(CGFloat)arg5 slide:(NSInteger)arg6 ;
-(id)fpsGraphString;
-(id)fpsSummaryString;
-(id)init;
-(id)p_fpsInfo;
-(id)p_fpsSummaryStringIncludingGraph:(BOOL)arg0 ;
-(id)p_modeFromArray:(id)arg0 ;
-(void)addFrame;
-(void)addFrameAtDrawTime:(CGFloat)arg0 ;
-(void)addFrameAtDrawTime:(CGFloat)arg0 duration:(CGFloat)arg1 ;
-(void)addSample:(id)arg0 ;
-(void)reset;


@end


#endif