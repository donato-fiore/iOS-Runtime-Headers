// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKDISPLAYTYPECONTEXTVERTICALCOLLECTIONVIEWCELL_H
#define HKDISPLAYTYPECONTEXTVERTICALCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, UIStackView, UIButton, NSLayoutConstraint, UILabel;
@protocol HKDisplayTypeContextVerticalCollectionViewCellDelegate;


#import "HKDisplayTypeContextItem.h"
#import "HKUIMetricColors.h"

@interface HKDisplayTypeContextVerticalCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIStackView *contentStackView; // ivar: _contentStackView
@property (retain, nonatomic) HKDisplayTypeContextItem *contextItem; // ivar: _contextItem
@property (retain, nonatomic) HKUIMetricColors *currentMetricColors; // ivar: _currentMetricColors
@property (weak, nonatomic) NSObject<HKDisplayTypeContextVerticalCollectionViewCellDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UIButton *infoButton; // ivar: _infoButton
@property (retain, nonatomic) NSLayoutConstraint *maxTitleWidthConstraint; // ivar: _maxTitleWidthConstraint
@property (nonatomic) NSInteger mode; // ivar: _mode
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) UILabel *unitLabel; // ivar: _unitLabel
@property (retain, nonatomic) UILabel *valueLabel; // ivar: _valueLabel
@property (nonatomic) BOOL valueStringIsVeryLong; // ivar: _valueStringIsVeryLong
@property (retain, nonatomic) NSLayoutConstraint *widthConstraint; // ivar: _widthConstraint


+(id)reuseIdentifier;
-(id)_backgroundViewWithColor:(id)arg0 userInteractive:(BOOL)arg1 ;
-(id)_generateInfoButton;
-(id)_labelWithFont:(id)arg0 allowsMultiline:(BOOL)arg1 supportsDyanmicType:(BOOL)arg2 ;
-(id)_stackViewWithArrangedSubviews:(id)arg0 ;
-(id)_titleFont;
-(id)_valueAndUnitFont;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;
-(void)_configureForContextItem:(id)arg0 ;
-(void)_configureForTraitCollection:(id)arg0 ;
-(void)_setLabel:(id)arg0 allowsMultiline:(BOOL)arg1 textAlignment:(NSInteger)arg2 ;
-(void)_updateUI:(BOOL)arg0 ;
-(void)infoButtonTapped:(id)arg0 ;
-(void)prepareForReuse;
-(void)setSelected:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateWithContextItem:(id)arg0 mode:(NSInteger)arg1 ;


@end


#endif