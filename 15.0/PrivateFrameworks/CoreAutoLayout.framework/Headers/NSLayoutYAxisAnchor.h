// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSLAYOUTYAXISANCHOR_H
#define NSLAYOUTYAXISANCHOR_H



#import "NSLayoutAnchor.h"

@interface NSLayoutYAxisAnchor : NSLayoutAnchor



-(BOOL)isCompatibleWithAnchor:(id)arg0 ;
-(BOOL)validateOtherAttribute:(NSInteger)arg0 ;
-(id)anchorByOffsettingWithConstant:(CGFloat)arg0 ;
-(id)anchorByOffsettingWithDimension:(id)arg0 ;
-(id)anchorByOffsettingWithDimension:(id)arg0 multiplier:(CGFloat)arg1 constant:(CGFloat)arg2 ;
-(id)anchorWithOffsetToAnchor:(id)arg0 ;
-(id)constraintEqualToSystemSpacingBelowAnchor:(id)arg0 multiplier:(CGFloat)arg1 ;
-(id)constraintGreaterThanOrEqualToSystemSpacingBelowAnchor:(id)arg0 multiplier:(CGFloat)arg1 ;
-(id)constraintLessThanOrEqualToSystemSpacingBelowAnchor:(id)arg0 multiplier:(CGFloat)arg1 ;
-(id)distanceTo:(id)arg0 ;
-(id)offsetBy:(CGFloat)arg0 ;
-(id)offsetByDimension:(id)arg0 ;
-(id)offsetByDimension:(id)arg0 times:(CGFloat)arg1 plus:(CGFloat)arg2 ;
-(id)offsetTo:(id)arg0 ;


@end


#endif