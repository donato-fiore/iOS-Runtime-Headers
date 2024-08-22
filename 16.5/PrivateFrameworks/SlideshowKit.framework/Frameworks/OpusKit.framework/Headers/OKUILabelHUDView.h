// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OKUILABELHUDVIEW_H
#define OKUILABELHUDVIEW_H

@class UIView, UILabel;



@interface OKUILabelHUDView : UIView

@property (readonly, retain) UILabel *label; // ivar: _label


-(id)init;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)dealloc;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)sizeToFit;
-(void)updateShadowPath;


@end


#endif