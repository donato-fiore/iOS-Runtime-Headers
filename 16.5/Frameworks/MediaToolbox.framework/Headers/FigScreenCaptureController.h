// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIGSCREENCAPTURECONTROLLER_H
#define FIGSCREENCAPTURECONTROLLER_H

@protocol FigScreenCaptureFrameHandlerDelegate;

#import <Foundation/Foundation.h>


@interface FigScreenCaptureController : NSObject

@property (weak, nonatomic) NSObject<FigScreenCaptureFrameHandlerDelegate> *delegate; // ivar: _delegateWeak
@property (nonatomic) *OpaqueFigSimpleMutex lock; // ivar: _lock
@property (readonly, nonatomic) ? minIntervalBetweenFrames;
@property (nonatomic) *__CFDictionary options; // ivar: _options
@property (nonatomic) *OpaqueFigVirtualDisplaySession session; // ivar: _session
@property (readonly, nonatomic) CGSize size;


+(id)screenCaptureControllerWithFigVirtualDisplayOptions:(id)arg0 ;
+(id)screenCaptureControllerWithSize:(struct CGSize )arg0 minIntervalBetweenFrames:(struct ? )arg1 ;
-(id)initWithFigVirtualDisplayOptions:(id)arg0 ;
-(id)initWithSize:(struct CGSize )arg0 minIntervalBetweenFrames:(struct ? )arg1 ;
-(void)dealloc;
-(void)resumeCapture;
-(void)setFigVirtualDisplayOption:(id)arg0 forKey:(id)arg1 ;
-(void)startCapture;
-(void)stopCapture;
-(void)suspendCapture;


@end


#endif