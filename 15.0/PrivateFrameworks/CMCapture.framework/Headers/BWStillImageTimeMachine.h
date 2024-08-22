// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWSTILLIMAGETIMEMACHINE_H
#define BWSTILLIMAGETIMEMACHINE_H


#import <Foundation/Foundation.h>


@interface BWStillImageTimeMachine : NSObject {
    *OpaqueFigSimpleMutex _timeMachineMutex;
    ? _frames;
    BOOL _suspended;
}


@property (readonly, nonatomic) int capacity; // ivar: _capacity


+(BOOL)afComplete:(struct opaqueCMSampleBuffer *)arg0 ;
+(void)initialize;
-(id)initWithCapacity:(int)arg0 ;
-(int)insertFrame:(struct opaqueCMSampleBuffer *)arg0 ;
-(struct opaqueCMSampleBuffer *)copyBestFrame;
-(void)dealloc;
-(void)drain;
-(void)resume;
-(void)suspendAndDrain;


@end


#endif