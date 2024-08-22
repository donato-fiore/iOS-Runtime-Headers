// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTATTRIBUTELABELEDCOLLECTIONVIEWCELL_H
#define AVTATTRIBUTELABELEDCOLLECTIONVIEWCELL_H

@class UILabel, UIVisualEffectView, NSString;


#import "AVTAttributeCollectionViewCell.h"

@interface AVTAttributeLabeledCollectionViewCell : AVTAttributeCollectionViewCell

@property (retain, nonatomic) UILabel *label; // ivar: _label
@property (retain, nonatomic) UIVisualEffectView *labelBackgroundView; // ivar: _labelBackgroundView
@property (copy, nonatomic) NSString *labelString; // ivar: _labelString
@property (nonatomic) CGFloat labelVerticalSpace; // ivar: _labelVerticalSpace


+(id)cellIdentifier;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )frameForAttributeView;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateLabelBackgroundAppearance;


@end


#endif