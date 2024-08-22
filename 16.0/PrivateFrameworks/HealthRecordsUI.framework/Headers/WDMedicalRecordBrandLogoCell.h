// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WDMEDICALRECORDBRANDLOGOCELL_H
#define WDMEDICALRECORDBRANDLOGOCELL_H

@class UIImageView;
@protocol HKClinicalBrandable;


#import "WDMedicalRecordGroupableCell.h"
#import "WDMedicalRecordBrandView.h"
#import "WDClinicalSourcesDataProvider.h"
#import "WDBrandLogoView.h"

@interface WDMedicalRecordBrandLogoCell : WDMedicalRecordGroupableCell

@property (readonly, nonatomic) WDMedicalRecordBrandView *brandView; // ivar: _brandView
@property (readonly, nonatomic) NSObject<HKClinicalBrandable> *brandable;
@property (readonly, nonatomic) WDClinicalSourcesDataProvider *dataProvider;
@property (readonly, nonatomic) UIImageView *disclosureChevronView; // ivar: _disclosureChevronView
@property (nonatomic) CGFloat logoSize;
@property (readonly, nonatomic) WDBrandLogoView *logoView; // ivar: _logoView
@property (nonatomic, getter=showsDisclosureChevron) BOOL showDisclosureChevron; // ivar: _showDisclosureChevron


-(id)_contentViewMarginsGuide;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_updateBasedOnAccessibilityCategory:(BOOL)arg0 ;
-(void)_updateContentWithBrandable:(id)arg0 dataProvider:(id)arg1 ;
-(void)prepareForReuse;
-(void)setUpConstraints;
-(void)setupSubviews;
-(void)updateConstraints;


@end


#endif