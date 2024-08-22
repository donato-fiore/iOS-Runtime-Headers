// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIFLEXIBLECONSTANTCONSTRAINTSET_H
#define _UIFLEXIBLECONSTANTCONSTRAINTSET_H

@class UIConstantConstraintSet, NSLayoutConstraint;



@interface _UIFlexibleConstantConstraintSet : UIConstantConstraintSet {
    NSLayoutConstraint *_minConstraint;
    NSLayoutConstraint *_maxConstraint;
    NSLayoutConstraint *_equalityConstraint;
    BOOL _equalityConstraintPrefersMin;
}


@property (nonatomic) CGFloat equalityConstant; // ivar: _equalityConstant
@property (nonatomic) CGFloat maxConstant; // ivar: _maxConstant
@property (nonatomic) CGFloat minConstant; // ivar: _minConstant


+(id)constraintSetWithCollapsableConstantPreferredEqualityConstraint:(id)arg0 equalityPriority:(NSUInteger)arg1 ;
+(id)constraintSetWithRequiredEqualityConstraint:(id)arg0 ;
-(BOOL)_equalityConstraintIsRequired;
-(id)_initWithEqualityConstraint:(id)arg0 equalityPriority:(NSUInteger)arg1 prefersMin:(BOOL)arg2 ;
-(id)_otherInequalityConstraint;
-(id)_preferredInequalityConstraint;


@end


#endif