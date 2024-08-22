// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKDISCOVERYDISMISSBUTTON_H
#define PKDISCOVERYDISMISSBUTTON_H

@class UIButton;



@interface PKDiscoveryDismissButton : UIButton

@property (readonly, nonatomic) NSInteger style; // ivar: _style


+(NSInteger)_blurEffectStyleForUserInterfaceStyle:(NSInteger)arg0 ;
+(id)_tintColorForUserInterfaceStyle:(NSInteger)arg0 ;
+(id)buttonWithStyle:(NSInteger)arg0 primaryAction:(id)arg1 ;
-(id)_backingEffect;
-(id)_tintColor;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)_updateStyleWithStyle:(NSInteger)arg0 ;
-(void)updateStyleWithStyle:(NSInteger)arg0 animated:(BOOL)arg1 ;


@end


#endif