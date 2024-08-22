// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIANIMATABLEPROPERTYWRAPPER_H
#define UIANIMATABLEPROPERTYWRAPPER_H



#import "UIAnimatablePropertyBase.h"
#import "UIAnimatableProperty.h"

@interface UIAnimatablePropertyWrapper : UIAnimatablePropertyBase

@property (readonly, nonatomic) UIAnimatableProperty *animatableProperty; // ivar: _animatableProperty
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;


-(id)init;
-(id)transformer;
-(void)dealloc;
-(void)invalidate;
-(void)setTransformer:(id)arg0 ;


@end


#endif