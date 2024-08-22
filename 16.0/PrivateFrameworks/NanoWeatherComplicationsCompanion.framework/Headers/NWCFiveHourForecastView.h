// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWCFIVEHOURFORECASTVIEW_H
#define NWCFIVEHOURFORECASTVIEW_H

@class UIView, NSString, CLKDevice, UIFontDescriptor, UIStackView, NSArray;
@protocol CLKFullColorImageView, NWMDataFormatter, CLKMonochromeFilterProvider, NWCHourlyForecastViewBuildable;



@interface NWCFiveHourForecastView : UIView <CLKFullColorImageView>



@property (readonly, nonatomic) NSObject<NWMDataFormatter> *dataFormatter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CLKDevice *device; // ivar: _device
@property (weak, nonatomic) NSObject<CLKMonochromeFilterProvider> *filterProvider; // ivar: _filterProvider
@property (copy, nonatomic) UIFontDescriptor *fontDescriptor;
@property (nonatomic) CGFloat fontSizeFactor;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIStackView *horizontalStackView; // ivar: _horizontalStackView
@property (retain, nonatomic) NSArray *hourlyForecastViews; // ivar: _hourlyForecastViews
@property (retain, nonatomic) NSArray *separatorViews; // ivar: _separatorViews
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<NWCHourlyForecastViewBuildable> *viewBuilder; // ivar: _viewBuilder


+(NSUInteger)maximumHourlyConditionCount;
+(void)initialize;
-(id)_setupViewBuilderForDevice:(id)arg0 ;
-(id)initFullColorImageViewWithDevice:(id)arg0 ;
-(void)_addHourlyForecastViewsToStackView:(id)arg0 ;
-(void)_applyConstraints;
-(void)configureWithImageProvider:(id)arg0 reason:(NSInteger)arg1 ;
-(void)pauseLiveFullColorImageView;
-(void)processHourlyForecastEntryModels:(id)arg0 forTimeZone:(id)arg1 ;
-(void)processSimpleEntryModel:(id)arg0 ;
-(void)resumeLiveFullColorImageView;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;


@end


#endif