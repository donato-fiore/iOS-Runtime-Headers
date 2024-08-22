// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NCAPPPICKERVIEWCELL_H
#define NCAPPPICKERVIEWCELL_H

@class UICollectionViewCell, UIView, UIImageView, UILabel, NSLayoutConstraint;


#import "NCCheckmarkButton.h"

@interface NCAppPickerViewCell : UICollectionViewCell {
    UIView *_backgroundView;
    NCCheckmarkButton *_checkmarkButton;
    UIImageView *_iconImageView;
    UIView *_titleAndFrequencyContainer;
    UILabel *_titleLabel;
    UIView *_frequencyLineView;
    UIView *_frequencyDotView;
    UILabel *_frequencyLabel;
    NSLayoutConstraint *_frequencyLineWidthConstraint;
    NSLayoutConstraint *_frequencyDotLeadingConstraint;
    NSUInteger _avgNumberOfNotificationsCount;
    NSUInteger _maxAvgNumberOfNotificationsCount;
}




+(CGFloat)preferredHeightForText:(id)arg0 cellWidth:(CGFloat)arg1 ;
+(CGFloat)preferredImageDimension;
+(id)_frequencyFont;
+(id)_titleFont;
+(id)reuseIdentifier;
-(id)_frequencyTextForCount:(NSUInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_layoutLine;
-(void)configureWithName:(id)arg0 image:(id)arg1 avgNumberOfNotificationsCount:(NSUInteger)arg2 maxAvgNumberOfNotificationsCount:(NSUInteger)arg3 selected:(BOOL)arg4 ;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif