// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FMDISTANCEBADGE_H
#define FMDISTANCEBADGE_H

@class UILabel, UIColor;



@interface FMDistanceBadge : UILabel

@property (retain, nonatomic) UIColor *badgeColor; // ivar: _badgeColor
@property (nonatomic) UIEdgeInsets insets; // ivar: _insets


-(struct CGSize )intrinsicContentSize;
-(void)_commonSetup;
-(void)awakeFromNib;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)drawTextInRect:(struct CGRect )arg0 ;
-(void)prepareForInterfaceBuilder;
-(void)setBackgroundColor:(id)arg0 ;


@end


#endif