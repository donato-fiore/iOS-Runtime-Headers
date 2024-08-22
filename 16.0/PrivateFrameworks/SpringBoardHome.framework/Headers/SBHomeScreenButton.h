// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBHOMESCREENBUTTON_H
#define SBHOMESCREENBUTTON_H

@class UIButton, UIView, UIImage;


#import "SBHomeScreenMaterialView.h"

@interface SBHomeScreenButton : UIButton

@property (readonly, nonatomic) UIEdgeInsets backgroundInsets;
@property (retain, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (readonly, nonatomic) UIImage *defaultContentImage;
@property (readonly, nonatomic) SBHomeScreenMaterialView *materialView; // ivar: _materialView


-(BOOL)_shouldAnimatePropertyWithKey:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 backgroundView:(id)arg1 ;
-(void)layoutSubviews;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif