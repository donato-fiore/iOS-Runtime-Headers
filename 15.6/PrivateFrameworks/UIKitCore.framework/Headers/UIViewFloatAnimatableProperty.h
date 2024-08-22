// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIVIEWFLOATANIMATABLEPROPERTY_H
#define UIVIEWFLOATANIMATABLEPROPERTY_H



#import "UIAnimatablePropertyBase.h"
#import "UIAnimatableProperty.h"
#import "_UIViewAnimatablePropertyTransformer.h"

@interface UIViewFloatAnimatableProperty : UIAnimatablePropertyBase

@property (retain, nonatomic) UIAnimatableProperty *animatableProperty; // ivar: _animatableProperty
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (nonatomic) BOOL performingInterpolationBetweenTwoStates; // ivar: _performingInterpolationBetweenTwoStates
@property (readonly, nonatomic) CGFloat presentationValue;
@property (retain, nonatomic) _UIViewAnimatablePropertyTransformer *transformer;
@property (nonatomic) CGFloat value;
@property (nonatomic) CGFloat velocity;


-(id)init;
-(void)dealloc;
-(void)invalidate;


@end


#endif