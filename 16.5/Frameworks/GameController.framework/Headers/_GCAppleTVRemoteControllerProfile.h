// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GCAPPLETVREMOTECONTROLLERPROFILE_H
#define _GCAPPLETVREMOTECONTROLLERPROFILE_H

@class NSDate, NSString;
@protocol DigitizerValueChangedDelegate, CoalescableMicroGamepad;


#import "GCMicroGamepad.h"
#import "GCControllerDirectionPad.h"

@interface _GCAppleTVRemoteControllerProfile : GCMicroGamepad <DigitizerValueChangedDelegate, CoalescableMicroGamepad>

 {
    CGFloat _windowX;
    CGFloat _windowY;
    CGFloat _windowSize;
    CGFloat _deadzoneSize;
    CGFloat _windowBufferSize;
    unsigned int _digitizerTouchState;
    unsigned int _sampleCount;
    unsigned int _accumInputSampleCount;
    CGFloat _prevLogTime;
    int _orientation;
    int _candidateOrientation;
    NSDate *_candidateOrientationTimestamp;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger deviceType; // ivar: _deviceType
@property (readonly) GCControllerDirectionPad *dpad;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger owner; // ivar: _owner
@property (readonly) Class superclass;


-(id)initWithController:(id)arg0 ;
-(id)name;
-(unsigned int)sampleRate;
-(void)digitizerTouchEvent:(id)arg0 x:(CGFloat)arg1 y:(CGFloat)arg2 timestamp:(NSUInteger)arg3 forceSkipDpadRotation:(BOOL)arg4 ;
-(void)digitizerTouchUp:(id)arg0 timestamp:(NSUInteger)arg1 forceSkipDpadRotation:(BOOL)arg2 ;
-(void)getPositionInSlidingWindowForRealX:(CGFloat)arg0 realY:(CGFloat)arg1 outXInWindow:(*CGFloat)arg2 outYInWindow:(*CGFloat)arg3 ;
-(void)handleReport:(unsigned int)arg0 data:(id)arg1 ;
-(void)initCommon:(id)arg0 ;
-(void)processOrientationData:(id)arg0 ;
-(void)setAllowsRotation:(BOOL)arg0 ;


@end


#endif