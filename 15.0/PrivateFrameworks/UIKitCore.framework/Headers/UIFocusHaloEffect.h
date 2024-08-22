// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIFOCUSHALOEFFECT_H
#define UIFOCUSHALOEFFECT_H



#import "UIFocusEffect.h"
#import "_UIShape.h"
#import "UIView.h"

@interface UIFocusHaloEffect : UIFocusEffect

@property (readonly, nonatomic) _UIShape *_shape; // ivar: __shape
@property (weak, nonatomic) UIView *containerView; // ivar: _containerView
@property (nonatomic) NSInteger position; // ivar: _position
@property (weak, nonatomic) UIView *referenceView; // ivar: _referenceView


+(id)_effectWithUIShape:(id)arg0 ;
+(id)effectWithPath:(id)arg0 ;
+(id)effectWithRect:(struct CGRect )arg0 ;
+(id)effectWithRoundedRect:(struct CGRect )arg0 cornerRadius:(CGFloat)arg1 curve:(id)arg2 ;
-(BOOL)__isHaloEffect;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif