// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FIGSCREENCAPTURECONTROLLER_H
#define FIGSCREENCAPTURECONTROLLER_H

@protocol FigScreenCaptureFrameHandlerDelegate;

#import <Foundation/Foundation.h>


@interface FigScreenCaptureController : NSObject

@property (weak, nonatomic) NSObject<FigScreenCaptureFrameHandlerDelegate> *delegate; // ivar: _delegateWeak
@property (nonatomic) *OpaqueFigSimpleMutex lock; // ivar: _lock
@property (nonatomic) ? minIntervalBetweenFrames; // ivar: _minIntervalBetweenFrames
@property (nonatomic) *OpaqueFigVirtualDisplaySession session; // ivar: _session
@property (nonatomic) CGSize size; // ivar: _size


+(id)screenCaptureControllerWithSize:(struct CGSize )arg0 minIntervalBetweenFrames:(struct ? )arg1 ;
-(id)initWithSize:(struct CGSize )arg0 minIntervalBetweenFrames:(struct ? )arg1 ;
-(void)dealloc;
-(void)didReceiveSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 sourceRect:(struct CGRect )arg1 destRect:(struct CGRect )arg2 transform:(unsigned int)arg3 ;
-(void)startCapture;
-(void)stopCapture;


@end


#endif