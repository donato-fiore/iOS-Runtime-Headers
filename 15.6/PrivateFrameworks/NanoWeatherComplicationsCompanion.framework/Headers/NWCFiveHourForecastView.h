// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NWCFIVEHOURFORECASTVIEW_H
#define NWCFIVEHOURFORECASTVIEW_H

@class UIView, NSString, UIStackView, NSArray;
@protocol CLKFullColorImageView, NWMDataFormatter, CLKMonochromeFilterProvider;



@interface NWCFiveHourForecastView : UIView <CLKFullColorImageView>



@property (readonly, nonatomic) NSObject<NWMDataFormatter> *dataFormatter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<CLKMonochromeFilterProvider> *filterProvider; // ivar: _filterProvider
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIStackView *horizontalStackView; // ivar: _horizontalStackView
@property (readonly, nonatomic) Class hourlyForecastViewClass;
@property (retain, nonatomic) NSArray *hourlyForecastViews; // ivar: _hourlyForecastViews
@property (readonly) Class superclass;


+(NSUInteger)maximumHourlyConditionCount;
-(id)initFullColorImageViewWithDevice:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_addHourlyForecastViewsToStackView:(id)arg0 ;
-(void)_applyConstraints;
-(void)configureWithImageProvider:(id)arg0 reason:(NSInteger)arg1 ;
-(void)pauseLiveFullColorImageView;
-(void)processHourlyForecastEntryModels:(id)arg0 forTimeZone:(id)arg1 ;
-(void)resumeLiveFullColorImageView;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;


@end


#endif