// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWOVERCAPTUREATTACHEDMEDIASPLITNODE_H
#define BWOVERCAPTUREATTACHEDMEDIASPLITNODE_H



#import "BWAttachedMediaSplitNode.h"
#import "BWNodeOutput.h"

@interface BWOverCaptureAttachedMediaSplitNode : BWAttachedMediaSplitNode

@property (readonly, nonatomic) BWNodeOutput *primaryFrameOutput; // ivar: _primaryFrameOutput
@property (readonly, nonatomic) BWNodeOutput *synchronizedSlaveFrameOutput; // ivar: _synchronizedSlaveFrameOutput


+(void)initialize;
-(id)initWithBackPressureExtraRetainBufferCount:(int)arg0 ;
-(void)_handleIrisMovieRequestForInput:(id)arg0 sbuf:(struct opaqueCMSampleBuffer *)arg1 ;
-(void)_updateSynchronizedSlaveFrameEnabledWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)dealloc;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;


@end


#endif