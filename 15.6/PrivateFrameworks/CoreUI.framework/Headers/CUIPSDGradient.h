// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CUIPSDGRADIENT_H
#define CUIPSDGRADIENT_H


#import <Foundation/Foundation.h>

#import "CUIPSDGradientEvaluator.h"

@interface CUIPSDGradient : NSObject

@property CGFloat drawingAngle; // ivar: drawingAngle
@property (retain) CUIPSDGradientEvaluator *evaluator; // ivar: evaluator
@property unsigned int gradientStyle; // ivar: gradientStyle


+(id)cuiPSDGradientWithColors:(id)arg0 locations:(id)arg1 midpointLocations:(id)arg2 angle:(CGFloat)arg3 isRadial:(BOOL)arg4 ;
+(id)cuiPSDGradientWithColors:(id)arg0 locations:(id)arg1 midpointLocations:(id)arg2 angle:(CGFloat)arg3 style:(unsigned int)arg4 ;
+(id)getMidpointLocationFromArray:(id)arg0 atIndex:(NSInteger)arg1 withPolicy:(int)arg2 ;
-(id)initWithEvaluator:(id)arg0 drawingAngle:(CGFloat)arg1 gradientStyle:(unsigned int)arg2 ;
-(void)dealloc;


@end


#endif