// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMTORCHPATTERNCONTROLLER_H
#define CAMTORCHPATTERNCONTROLLER_H

@class CADisplayLink;

#import <Foundation/Foundation.h>

#import "CUCaptureController.h"
#import "CAMTorchPattern.h"

@interface CAMTorchPatternController : NSObject

@property (readonly, nonatomic) CUCaptureController *_captureController; // ivar: __captureController
@property (readonly, nonatomic) CAMTorchPattern *_currentPattern; // ivar: __currentPattern
@property (readonly, nonatomic) CADisplayLink *_displayLink; // ivar: __displayLink
@property (nonatomic, getter=_isPerforming, setter=_setPerforming:) BOOL _performing; // ivar: __performing
@property (readonly, nonatomic) CGFloat _startTime; // ivar: __startTime
@property (nonatomic) CGFloat stepInterval; // ivar: _stepInterval


-(id)initWithCaptureController:(id)arg0 ;
-(void)_applyTorchLevel:(float)arg0 ;
-(void)_resetTorchLevel;
-(void)blink;
-(void)displayLinkFired:(id)arg0 ;
-(void)doubleBlink;
-(void)startPerformingPattern:(id)arg0 ;
-(void)stopPerformingPattern;


@end


#endif