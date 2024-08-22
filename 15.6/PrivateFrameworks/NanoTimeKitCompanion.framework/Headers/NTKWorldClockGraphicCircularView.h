// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKWORLDCLOCKGRAPHICCIRCULARVIEW_H
#define NTKWORLDCLOCKGRAPHICCIRCULARVIEW_H

@class UIView, UILabel, CLKClockTimerToken, UIColor, NSString, CLKDevice, CLKUIAlmanacTransitInfo;
@protocol CLKFullColorImageView, CLKMonochromeFilterProvider;


#import "NTKRichComplicationDialView.h"
#import "NTKWorldClockRichComplicationHandsBaseView.h"

@interface NTKWorldClockGraphicCircularView : UIView <CLKFullColorImageView>



@property (readonly, nonatomic) UILabel *cityNameLabel; // ivar: _cityNameLabel
@property (retain, nonatomic) CLKClockTimerToken *clockTimerToken; // ivar: _clockTimerToken
@property (retain, nonatomic) UIColor *daytimeBackgroundColor; // ivar: _daytimeBackgroundColor
@property (retain, nonatomic) UIColor *daytimeHandsColor; // ivar: _daytimeHandsColor
@property (retain, nonatomic) UIColor *daytimeHandsDotColor; // ivar: _daytimeHandsDotColor
@property (retain, nonatomic) UIColor *daytimeHandsLargeTickColor; // ivar: _daytimeHandsLargeTickColor
@property (retain, nonatomic) UIColor *daytimeHandsSmallTickColor; // ivar: _daytimeHandsSmallTickColor
@property (retain, nonatomic) UIColor *daytimeSecondHandColor; // ivar: _daytimeSecondHandColor
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CLKDevice *device; // ivar: _device
@property (readonly, nonatomic) NTKRichComplicationDialView *dialView; // ivar: _dialView
@property (readonly, nonatomic) UILabel *eastHourLabel; // ivar: _eastHourLabel
@property (weak, nonatomic) NSObject<CLKMonochromeFilterProvider> *filterProvider; // ivar: _filterProvider
@property (readonly, nonatomic) NTKWorldClockRichComplicationHandsBaseView *handsView; // ivar: _handsView
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) ? layoutConstants; // ivar: _layoutConstants
@property (retain, nonatomic) UIColor *nighttimeBackgroundColor; // ivar: _nighttimeBackgroundColor
@property (retain, nonatomic) UIColor *nighttimeHandsColor; // ivar: _nighttimeHandsColor
@property (retain, nonatomic) UIColor *nighttimeHandsDotColor; // ivar: _nighttimeHandsDotColor
@property (retain, nonatomic) UIColor *nighttimeHandsLargeTickColor; // ivar: _nighttimeHandsLargeTickColor
@property (retain, nonatomic) UIColor *nighttimeHandsSmallTickColor; // ivar: _nighttimeHandsSmallTickColor
@property (retain, nonatomic) UIColor *nighttimeSecondHandColor; // ivar: _nighttimeSecondHandColor
@property (readonly, nonatomic) UILabel *northHourLabel; // ivar: _northHourLabel
@property (nonatomic) BOOL positionLabelNorthSide; // ivar: _positionLabelNorthSide
@property (readonly, nonatomic) UILabel *southHourLabel; // ivar: _southHourLabel
@property (readonly) Class superclass;
@property (retain, nonatomic) CLKUIAlmanacTransitInfo *transitInfo; // ivar: _transitInfo
@property (nonatomic) BOOL useDayTimeColoring; // ivar: _useDayTimeColoring
@property (readonly, nonatomic) UILabel *westHourLabel; // ivar: _westHourLabel


+(BOOL)_shouldUseDaytimeColoringForTransitInfo:(id)arg0 atDate:(id)arg1 ;
+(id)_createHandsViewForDevice:(id)arg0 ;
+(id)eastLabelNumber;
+(id)northLabelNumber;
+(id)southLabelNumber;
+(id)westLabelNumber;
+(struct ? )_layoutConstantsForDevice:(id)arg0 ;
-(BOOL)_updateLabelAndDial;
-(id)_hourLabels;
-(id)initFullColorImageViewWithDevice:(id)arg0 ;
-(id)initWithDevice:(id)arg0 smallTickCount:(NSUInteger)arg1 ;
-(void)_startClockUpdates;
-(void)_stopClockUpdates;
-(void)_updateColors;
-(void)_updateDayTimeColoring;
-(void)_updateUI;
-(void)applyConfiguration:(id)arg0 animated:(BOOL)arg1 ;
-(void)configureWithImageProvider:(id)arg0 reason:(NSInteger)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)pauseLiveFullColorImageView;
-(void)resumeLiveFullColorImageView;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;


@end


#endif