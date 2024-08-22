// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NWCSEVENDAYFORECASTVIEW_H
#define NWCSEVENDAYFORECASTVIEW_H

@class UIView, NSArray, NSString, UIStackView;
@protocol CLKFullColorImageView, CLKMonochromeFilterProvider;


#import "NWCDailyForecastRangeView.h"

@interface NWCSevenDayForecastView : UIView <CLKFullColorImageView>



@property (retain, nonatomic) NWCDailyForecastRangeView *dailyForecastRangeView; // ivar: _dailyForecastRangeView
@property (readonly, nonatomic) Class dailyForecastViewClass;
@property (retain, nonatomic) NSArray *dailyForecastViews; // ivar: _dailyForecastViews
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<CLKMonochromeFilterProvider> *filterProvider; // ivar: _filterProvider
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIStackView *horizontalStackView; // ivar: _horizontalStackView
@property (readonly) Class superclass;


+(NSUInteger)maximumDailyConditionCount;
-(id)initFullColorImageViewWithDevice:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_addDailyForecastViewsToStackView:(id)arg0 ;
-(void)_applyConstraints;
-(void)configureWithImageProvider:(id)arg0 reason:(NSInteger)arg1 ;
-(void)pauseLiveFullColorImageView;
-(void)processConditions:(id)arg0 dailyForecastedConditions:(id)arg1 timeZone:(id)arg2 ;
-(void)resumeLiveFullColorImageView;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;


@end


#endif