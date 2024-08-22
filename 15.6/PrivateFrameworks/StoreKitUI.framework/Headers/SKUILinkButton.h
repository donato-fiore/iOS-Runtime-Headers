// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUILINKBUTTON_H
#define SKUILINKBUTTON_H

@class UIButton;



@interface SKUILinkButton : UIButton

@property (readonly, nonatomic) NSInteger arrowStyle; // ivar: _arrowStyle


+(id)buttonWithArrowStyle:(NSInteger)arg0 ;
-(CGFloat)_linkImagePaddingLeft;
-(id)initWithArrowStyle:(NSInteger)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_reloadIcons;
-(void)layoutSubviews;
-(void)setTitleColor:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)sizeToFit;
-(void)tintColorDidChange;


@end


#endif