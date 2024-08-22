// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSLAYOUTDIMENSION_H
#define NSLAYOUTDIMENSION_H



#import "NSLayoutAnchor.h"

@interface NSLayoutDimension : NSLayoutAnchor



-(BOOL)isCompatibleWithAnchor:(id)arg0 ;
-(BOOL)validateOtherAttribute:(NSInteger)arg0 ;
-(id)anchorByAddingConstant:(CGFloat)arg0 ;
-(id)anchorByAddingDimension:(id)arg0 ;
-(id)anchorByMultiplyingByConstant:(CGFloat)arg0 ;
-(id)anchorBySubtractingDimension:(id)arg0 ;
-(id)constraintEqualToAnchor:(id)arg0 multiplier:(CGFloat)arg1 ;
-(id)constraintEqualToAnchor:(id)arg0 multiplier:(CGFloat)arg1 constant:(CGFloat)arg2 ;
-(id)constraintEqualToConstant:(CGFloat)arg0 ;
-(id)constraintGreaterThanOrEqualToAnchor:(id)arg0 multiplier:(CGFloat)arg1 ;
-(id)constraintGreaterThanOrEqualToAnchor:(id)arg0 multiplier:(CGFloat)arg1 constant:(CGFloat)arg2 ;
-(id)constraintGreaterThanOrEqualToConstant:(CGFloat)arg0 ;
-(id)constraintLessThanOrEqualToAnchor:(id)arg0 multiplier:(CGFloat)arg1 ;
-(id)constraintLessThanOrEqualToAnchor:(id)arg0 multiplier:(CGFloat)arg1 constant:(CGFloat)arg2 ;
-(id)constraintLessThanOrEqualToConstant:(CGFloat)arg0 ;
-(id)minusDimension:(id)arg0 ;
-(id)plus:(CGFloat)arg0 ;
-(id)plusDimension:(id)arg0 ;
-(id)ruleEqualToConstant:(CGFloat)arg0 ;
-(id)ruleEqualToConstant:(CGFloat)arg0 priority:(float)arg1 identifier:(id)arg2 ;
-(id)ruleGreaterThanOrEqualToConstant:(CGFloat)arg0 ;
-(id)ruleGreaterThanOrEqualToConstant:(CGFloat)arg0 priority:(float)arg1 identifier:(id)arg2 ;
-(id)ruleLessThanOrEqualToConstant:(CGFloat)arg0 ;
-(id)ruleLessThanOrEqualToConstant:(CGFloat)arg0 priority:(float)arg1 identifier:(id)arg2 ;
-(id)times:(CGFloat)arg0 ;


@end


#endif