// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTSHADOWVIEW_H
#define AVTSHADOWVIEW_H

@class UIView, CALayer;



@interface AVTShadowView : UIView

@property (retain, nonatomic) CALayer *separator; // ivar: _separator


+(CGFloat)defaultHeightForSuperview:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif