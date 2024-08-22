// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PREDITINGBUTTON_H
#define PREDITINGBUTTON_H

@class UIButton, MTMaterialView, UIImage;


#import "PREditingButtonMaterialView.h"

@interface PREditingButton : UIButton

@property (readonly, nonatomic) UIEdgeInsets backgroundInsets;
@property (retain, nonatomic) MTMaterialView *backgroundView; // ivar: _backgroundView
@property (readonly, nonatomic) UIImage *defaultContentImage;
@property (readonly, nonatomic) PREditingButtonMaterialView *materialView; // ivar: _materialView


-(BOOL)_shouldAnimatePropertyWithKey:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif