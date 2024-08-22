// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC11POSTERBOARD30HOMESCREENCONFIGURATIONCONTROL_H
#define _TTC11POSTERBOARD30HOMESCREENCONFIGURATIONCONTROL_H

@class UIControl, UIView;



@interface _TtC11PosterBoard30HomeScreenConfigurationControl : UIControl {
    ? title;
    ? showsSymbolWhenSelected;
    ? titleLabel;
    ? symbolImageView;
    ? isEnabled;
}


@property (nonatomic) BOOL highlighted;
@property (nonatomic, retain) UIView *previewContentView; // ivar: previewContentView
@property (nonatomic) BOOL selected;


-(BOOL)isHighlighted;
-(BOOL)isSelected;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif