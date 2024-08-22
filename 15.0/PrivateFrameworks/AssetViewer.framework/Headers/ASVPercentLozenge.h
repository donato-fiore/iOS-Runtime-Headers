// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASVPERCENTLOZENGE_H
#define ASVPERCENTLOZENGE_H

@class UILabel, UIViewPropertyAnimator, NSNumberFormatter;



@interface ASVPercentLozenge : UILabel

@property (retain, nonatomic) UIViewPropertyAnimator *percentLozengeAnimator; // ivar: _percentLozengeAnimator
@property (retain, nonatomic) NSNumberFormatter *percentageFormatter; // ivar: _percentageFormatter


-(id)init;
-(id)lozengeFont;
-(struct CGSize )intrinsicContentSize;
-(void)layoutSubviews;
-(void)setHidden:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setPercentage:(float)arg0 ;
-(void)setText:(id)arg0 ;
-(void)sizeToFit;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif