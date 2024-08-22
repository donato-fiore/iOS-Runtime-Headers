// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMMODESELECTTITLEVIEW_H
#define CAMMODESELECTTITLEVIEW_H

@class UIView, UILabel, NSString, UIColor;



@interface CAMModeSelectTitleView : UIView

@property (readonly, nonatomic) UILabel *_titleLabel; // ivar: __titleLabel
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) UIColor *textColor; // ivar: _textColor


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif