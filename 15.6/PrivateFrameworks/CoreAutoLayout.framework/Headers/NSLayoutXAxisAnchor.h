// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSLAYOUTXAXISANCHOR_H
#define NSLAYOUTXAXISANCHOR_H



#import "NSLayoutAnchor.h"

@interface NSLayoutXAxisAnchor : NSLayoutAnchor



-(BOOL)_validateOtherXAxisAnchorDirectionAbstraction:(NSInteger)arg0 ;
-(BOOL)isCompatibleWithAnchor:(id)arg0 ;
-(BOOL)validateOtherAttribute:(NSInteger)arg0 ;
-(NSInteger)_directionAbstraction;
-(id)anchorByOffsettingWithConstant:(CGFloat)arg0 ;
-(id)anchorByOffsettingWithDimension:(id)arg0 ;
-(id)anchorByOffsettingWithDimension:(id)arg0 multiplier:(CGFloat)arg1 constant:(CGFloat)arg2 ;
-(id)anchorWithOffsetToAnchor:(id)arg0 ;
-(id)constraintEqualToSystemSpacingAfterAnchor:(id)arg0 multiplier:(CGFloat)arg1 ;
-(id)constraintGreaterThanOrEqualToSystemSpacingAfterAnchor:(id)arg0 multiplier:(CGFloat)arg1 ;
-(id)constraintLessThanOrEqualToSystemSpacingAfterAnchor:(id)arg0 multiplier:(CGFloat)arg1 ;
-(id)distanceTo:(id)arg0 ;
-(id)offsetBy:(CGFloat)arg0 ;
-(id)offsetByDimension:(id)arg0 ;
-(id)offsetByDimension:(id)arg0 times:(CGFloat)arg1 plus:(CGFloat)arg2 ;
-(id)offsetTo:(id)arg0 ;


@end


#endif