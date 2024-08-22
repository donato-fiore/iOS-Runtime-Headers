// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WDCLINICALLOCATIONCELL_H
#define WDCLINICALLOCATIONCELL_H

@class UITableViewCell, UILabel, UIStackView;
@protocol HKClinicalBrandable;


#import "WDClinicalSourcesDataProvider.h"
#import "WDBrandLogoView.h"

@interface WDClinicalLocationCell : UITableViewCell

@property (readonly, nonatomic) NSObject<HKClinicalBrandable> *brandable; // ivar: _brandable
@property (readonly, nonatomic) WDClinicalSourcesDataProvider *dataProvider; // ivar: _dataProvider
@property (readonly, nonatomic) UILabel *detailLabel; // ivar: _detailLabel
@property (readonly, nonatomic) WDBrandLogoView *logoView; // ivar: _logoView
@property (readonly, nonatomic) UIStackView *stackView; // ivar: _stackView
@property (readonly, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property (readonly, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


+(id)defaultReuseIdentifier;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_configureDistinctIntrinsicLayoutPrioritiesForLabels;
-(void)_setUpConstraints;
-(void)_setupSubviews;
-(void)_updateContentWithBrandable:(id)arg0 dataProvider:(id)arg1 ;
-(void)_updateForContentSizeCategory:(id)arg0 ;
-(void)_updateForCurrentSizeCategory;
-(void)prepareForReuse;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)willDisplay;


@end


#endif