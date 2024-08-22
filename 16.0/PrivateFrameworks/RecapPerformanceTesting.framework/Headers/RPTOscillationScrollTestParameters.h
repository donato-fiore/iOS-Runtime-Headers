// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RPTOSCILLATIONSCROLLTESTPARAMETERS_H
#define RPTOSCILLATIONSCROLLTESTPARAMETERS_H

@class NSString;
@protocol _RPTCoordinateSpaces, RPTTestParameters;

#import <Foundation/Foundation.h>

#import "RPTCoordinateSpaceConverter.h"

@interface RPTOscillationScrollTestParameters : NSObject <_RPTCoordinateSpaces, RPTTestParameters>



@property (nonatomic) CGFloat amplitudeVariationPerIteration; // ivar: _amplitudeVariationPerIteration
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (retain, nonatomic) RPTCoordinateSpaceConverter *conversion; // ivar: _conversion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL finishWithHalfIteration; // ivar: _finishWithHalfIteration
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat initialAmplitude; // ivar: _initialAmplitude
@property (nonatomic) NSInteger initialDirection; // ivar: _initialDirection
@property (nonatomic) CGFloat iterationDuration; // ivar: _iterationDuration
@property (nonatomic) NSUInteger iterations; // ivar: _iterations
@property (readonly, nonatomic) BOOL managesTestStartAndEnd;
@property (nonatomic) BOOL preventDismissalGestures; // ivar: _preventDismissalGestures
@property (nonatomic) CGRect scrollingBounds; // ivar: _scrollingBounds
@property (nonatomic) BOOL shouldFlick; // ivar: _shouldFlick
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *testName; // ivar: _testName


-(id)composerBlock:(SEL)arg0 ;
-(id)initWithTestName:(id)arg0 iterations:(NSUInteger)arg1 scrollingBounds:(struct CGRect )arg2 useFlicks:(BOOL)arg3 preventDismissalGestures:(BOOL)arg4 initialAmplitude:(CGFloat)arg5 amplitudeVariationPerIteration:(CGFloat)arg6 initialDirection:(NSInteger)arg7 iterationDuration:(CGFloat)arg8 finishWithHalfIteration:(BOOL)arg9 ;
-(id)initWithTestName:(id)arg0 iterations:(NSUInteger)arg1 scrollingBounds:(struct CGRect )arg2 useFlicks:(BOOL)arg3 preventDismissalGestures:(BOOL)arg4 initialAmplitude:(CGFloat)arg5 amplitudeVariationPerIteration:(CGFloat)arg6 initialDirection:(NSInteger)arg7 iterationDuration:(CGFloat)arg8 finishWithHalfIteration:(BOOL)arg9 completionHandler:(id)arg10 ;
-(struct CGPoint )_incrementPoint:(struct CGPoint )arg0 final:(BOOL)arg1 ;
-(struct CGPoint )finalFingerPosition;
-(struct CGPoint )initialFingerPosition;
-(void)prepareWithComposer:(id)arg0 ;
-(void)scrollWithComposer:(id)arg0 fromPoint:(struct CGPoint )arg1 toPoint:(struct CGPoint )arg2 duration:(CGFloat)arg3 ;


@end


#endif