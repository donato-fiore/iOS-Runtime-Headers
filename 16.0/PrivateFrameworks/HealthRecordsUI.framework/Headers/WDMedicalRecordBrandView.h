// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WDMEDICALRECORDBRANDVIEW_H
#define WDMEDICALRECORDBRANDVIEW_H

@class UIView, UILabel, UIStackView;
@protocol HKClinicalBrandable;


#import "WDClinicalSourcesDataProvider.h"
#import "WDBrandLogoView.h"

@interface WDMedicalRecordBrandView : UIView

@property (readonly, nonatomic) UILabel *brandDetailLabel; // ivar: _brandDetailLabel
@property (readonly, nonatomic) UILabel *brandSubtitleLabel; // ivar: _brandSubtitleLabel
@property (readonly, nonatomic) UILabel *brandTitleLabel; // ivar: _brandTitleLabel
@property (readonly, nonatomic) NSObject<HKClinicalBrandable> *brandable; // ivar: _brandable
@property (readonly, nonatomic) WDClinicalSourcesDataProvider *dataProvider; // ivar: _dataProvider
@property (readonly, nonatomic) UIView *logoAlignedContentView; // ivar: _logoAlignedContentView
@property (nonatomic) CGFloat logoSize;
@property (readonly, nonatomic) WDBrandLogoView *logoView; // ivar: _logoView
@property (readonly, nonatomic) UIStackView *stackView; // ivar: _stackView
@property (readonly, nonatomic) UIStackView *verticalSpecContainerView; // ivar: _verticalSpecContainerView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setupConstraints;
-(void)_setupSubviews;
-(void)_updateBasedOnAccessibilityCategory:(BOOL)arg0 ;
-(void)_updateContentWithBrandable:(id)arg0 dataProvider:(id)arg1 ;
-(void)_updateForContentSizeCategory:(id)arg0 ;
-(void)_updateForCurrentSizeCategory;
-(void)_updateLabelVisibility;


@end


#endif