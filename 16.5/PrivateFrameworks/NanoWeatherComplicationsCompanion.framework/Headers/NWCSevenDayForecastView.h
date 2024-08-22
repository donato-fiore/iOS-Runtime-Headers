// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWCSEVENDAYFORECASTVIEW_H
#define NWCSEVENDAYFORECASTVIEW_H

@class UIView, NSArray, NSString, CLKDevice, UIFontDescriptor, UIStackView;
@protocol CLKFullColorImageView, CLKMonochromeFilterProvider, NWCDailyForecastViewBuildable;


#import "NWCDailyForecastRangeView.h"

@interface NWCSevenDayForecastView : UIView <CLKFullColorImageView>



@property (retain, nonatomic) NWCDailyForecastRangeView *dailyForecastRangeView; // ivar: _dailyForecastRangeView
@property (retain, nonatomic) NSArray *dailyForecastViews; // ivar: _dailyForecastViews
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CLKDevice *device; // ivar: _device
@property (weak, nonatomic) NSObject<CLKMonochromeFilterProvider> *filterProvider; // ivar: _filterProvider
@property (copy, nonatomic) UIFontDescriptor *fontDescriptor;
@property (nonatomic) CGFloat fontSizeFactor;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIStackView *horizontalStackView; // ivar: _horizontalStackView
@property (retain, nonatomic) NSArray *separatorViews; // ivar: _separatorViews
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<NWCDailyForecastViewBuildable> *viewBuilder; // ivar: _viewBuilder


+(NSUInteger)maximumDailyConditionCount;
+(void)initialize;
-(id)_setupViewBuilderForDevice:(id)arg0 ;
-(id)initFullColorImageViewWithDevice:(id)arg0 ;
-(void)_addDailyForecastViewsToStackView:(id)arg0 ;
-(void)_applyConstraints;
-(void)configureWithImageProvider:(id)arg0 reason:(NSInteger)arg1 ;
-(void)pauseLiveFullColorImageView;
-(void)processConditions:(id)arg0 dailyForecastedConditions:(id)arg1 timeZone:(id)arg2 ;
-(void)processSimpleEntryModel:(id)arg0 ;
-(void)resumeLiveFullColorImageView;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;


@end


#endif