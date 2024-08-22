// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKELECTROCARDIOGRAMCARDVIEW_H
#define HKELECTROCARDIOGRAMCARDVIEW_H

@class UIView, UILabel, NSLayoutConstraint, NSString, UIImageView, NSArray, HKElectrocardiogram;
@protocol HKDateCacheObserver;


#import "HKDateCache.h"
#import "HKElectrocardiogramChartView.h"
#import "HKRoundedHeaderView.h"

@interface HKElectrocardiogramCardView : UIView <HKDateCacheObserver>



@property (nonatomic) NSInteger activeAlgorithmVersion; // ivar: _activeAlgorithmVersion
@property (retain, nonatomic) UILabel *averageHeartRateLabel; // ivar: _averageHeartRateLabel
@property (retain, nonatomic) NSLayoutConstraint *averageHeartRateLabelFirstBaselineConstraint; // ivar: _averageHeartRateLabelFirstBaselineConstraint
@property (retain, nonatomic) NSLayoutConstraint *averageHeartRateLabelWidthConstraint; // ivar: _averageHeartRateLabelWidthConstraint
@property (retain, nonatomic) UIView *cellBackgroundView; // ivar: _cellBackgroundView
@property (weak, nonatomic) HKDateCache *dateCache; // ivar: _dateCache
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSLayoutConstraint *graphTopConstraint; // ivar: _graphTopConstraint
@property (retain, nonatomic) HKElectrocardiogramChartView *graphView; // ivar: _graphView
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HKRoundedHeaderView *headerView; // ivar: _headerView
@property (retain, nonatomic) UIImageView *heartImageView; // ivar: _heartImageView
@property (retain, nonatomic) NSLayoutConstraint *heartImageViewHeightConstraint; // ivar: _heartImageViewHeightConstraint
@property (readonly, nonatomic) BOOL isSampleInteractive; // ivar: _isSampleInteractive
@property (retain, nonatomic) NSArray *largeTextConstraints; // ivar: _largeTextConstraints
@property (nonatomic, getter=isOnboarding) BOOL onboarding; // ivar: _onboarding
@property (retain, nonatomic) NSArray *regularConstraints; // ivar: _regularConstraints
@property (retain, nonatomic) HKElectrocardiogram *sample; // ivar: _sample
@property (readonly) Class superclass;
@property (retain, nonatomic) UILabel *symptomsLabel; // ivar: _symptomsLabel
@property (retain, nonatomic) NSLayoutConstraint *symptomsLabelFirstBaselineConstraint; // ivar: _symptomsLabelFirstBaselineConstraint


+(CGFloat)_averageHeartRateBaselineToGraphTop;
+(CGFloat)_averageHeartRateBaselineToSymptomBaseline;
+(CGFloat)_graphBottomToCardBottom;
+(CGFloat)_graphHeight;
+(CGFloat)_headerBottomToAverageHeartRateBaseline;
+(CGFloat)estimatedHeight;
+(id)_accessibilityContentSizeCategory;
+(id)_averageHeartRateSymptomsBoldFont;
+(id)_averageHeartRateSymptomsFont;
+(id)_averageHeartRateSymptomsFontForElectrocardiogram:(id)arg0 ;
+(id)_averageHeartRateSymptomsTextStyle;
-(BOOL)_isLayingOutForAccessibility;
-(id)_cardBackgroundColor;
-(id)_cardHeaderColor;
-(id)_chevronColor;
-(id)_graphBackgroundColor;
-(id)initWithSample:(id)arg0 dateCache:(id)arg1 onboarding:(BOOL)arg2 activeAlgorithmVersion:(NSInteger)arg3 isSampleInteractive:(BOOL)arg4 ;
-(void)_setUpGraph;
-(void)_setupConstraints;
-(void)_setupUI;
-(void)_updateForCurrentSizeCategory;
-(void)_updateGraphTopConstraint;
-(void)_updateTextConstraints;
-(void)dateCacheDidUpdate:(id)arg0 onNotification:(id)arg1 ;
-(void)dealloc;
-(void)tintColorDidChange;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateUI;


@end


#endif