// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRNOSCILLATIONSCROLLTESTPARAMETERS_H
#define CRNOSCILLATIONSCROLLTESTPARAMETERS_H

@class NSString, RCPSyntheticEventStream;
@protocol CRNBlockBasedScrollTestParameters, CRNScrollTestParameters;

#import <Foundation/Foundation.h>


@interface CRNOscillationScrollTestParameters : NSObject <CRNBlockBasedScrollTestParameters, CRNScrollTestParameters>



@property (nonatomic) CGFloat amplitudeVariationPerIteration; // ivar: _amplitudeVariationPerIteration
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) RCPSyntheticEventStream *eventStream;
@property (nonatomic) BOOL finishWithHalfIteration; // ivar: _finishWithHalfIteration
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat initialAmplitude; // ivar: _initialAmplitude
@property (nonatomic) NSInteger initialDirection; // ivar: _initialDirection
@property (nonatomic) CGFloat iterationDuration; // ivar: _iterationDuration
@property (nonatomic) NSUInteger iterations; // ivar: _iterations
@property (nonatomic) BOOL preventDismissalGestures; // ivar: _preventDismissalGestures
@property (readonly, nonatomic) NSInteger realInitialDirection; // ivar: _realInitialDirection
@property (nonatomic) CGRect scrollingBounds; // ivar: _scrollingBounds
@property (nonatomic) BOOL shouldFlick; // ivar: _shouldFlick
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *testName; // ivar: _testName


-(id)composerBlock:(SEL)arg0 ;
-(id)initWithTestName:(id)arg0 iterations:(NSUInteger)arg1 scrollingBounds:(struct CGRect )arg2 useFlicks:(BOOL)arg3 preventDismissalGestures:(BOOL)arg4 initialAmplitude:(CGFloat)arg5 amplitudeVariationPerIteration:(CGFloat)arg6 initialDirection:(NSInteger)arg7 iterationDuration:(CGFloat)arg8 finishWithHalfIteration:(BOOL)arg9 ;
-(id)initWithTestName:(id)arg0 iterations:(NSUInteger)arg1 scrollingBounds:(struct CGRect )arg2 useFlicks:(BOOL)arg3 preventDismissalGestures:(BOOL)arg4 initialAmplitude:(CGFloat)arg5 amplitudeVariationPerIteration:(CGFloat)arg6 initialDirection:(NSInteger)arg7 iterationDuration:(CGFloat)arg8 finishWithHalfIteration:(BOOL)arg9 completionHandler:(id)arg10 ;
-(struct CGPoint )finalFingerPosition;
-(struct CGPoint )initialFingerPosition;
-(void)scrollWithComposer:(id)arg0 fromPoint:(struct CGPoint )arg1 toPoint:(struct CGPoint )arg2 duration:(CGFloat)arg3 ;


@end


#endif