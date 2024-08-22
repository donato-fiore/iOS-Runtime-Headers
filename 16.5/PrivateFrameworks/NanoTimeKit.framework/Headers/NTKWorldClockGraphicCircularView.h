// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKWORLDCLOCKGRAPHICCIRCULARVIEW_H
#define NTKWORLDCLOCKGRAPHICCIRCULARVIEW_H

@class UIView, UILabel, CLKClockTimerToken, UIColor, NSString, CLKDevice, UIFontDescriptor, NSArray, CLKUIAlmanacTransitInfo;
@protocol CLKFullColorImageView, CLKMonochromeFilterProvider;


#import "NTKRichComplicationDialView.h"
#import "NTKWorldClockRichComplicationHandsBaseView.h"

@interface NTKWorldClockGraphicCircularView : UIView <CLKFullColorImageView>

 {
    BOOL _showGossamerUI;
}


@property (readonly, nonatomic) UILabel *cityNameLabel; // ivar: _cityNameLabel
@property (retain, nonatomic) CLKClockTimerToken *clockTimerToken; // ivar: _clockTimerToken
@property (nonatomic, getter=hasPerformedColoringFirstPass) BOOL coloringFirstPassPerformed; // ivar: _coloringFirstPassPerformed
@property (retain, nonatomic) UIColor *daytimeBackgroundColor; // ivar: _daytimeBackgroundColor
@property (retain, nonatomic) UIColor *daytimeHandsColor; // ivar: _daytimeHandsColor
@property (retain, nonatomic) UIColor *daytimeHandsLargeTickColor; // ivar: _daytimeHandsLargeTickColor
@property (retain, nonatomic) UIColor *daytimeHandsSmallTickColor; // ivar: _daytimeHandsSmallTickColor
@property (retain, nonatomic) UIColor *daytimeSecondHandColor; // ivar: _daytimeSecondHandColor
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CLKDevice *device; // ivar: _device
@property (readonly, nonatomic) NTKRichComplicationDialView *dialView; // ivar: _dialView
@property (readonly, nonatomic) UILabel *eastHourLabel; // ivar: _eastHourLabel
@property (weak, nonatomic) NSObject<CLKMonochromeFilterProvider> *filterProvider; // ivar: _filterProvider
@property (copy, nonatomic) UIFontDescriptor *fontDescriptor;
@property (nonatomic) CGFloat fontSizeFactor;
@property (readonly, nonatomic) NTKWorldClockRichComplicationHandsBaseView *handsView; // ivar: _handsView
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *hourLabels; // ivar: _hourLabels
@property (readonly, nonatomic) ? layoutConstants; // ivar: _layoutConstants
@property (nonatomic) CGFloat monochromeFraction; // ivar: _monochromeFraction
@property (retain, nonatomic) UIColor *nighttimeBackgroundColor; // ivar: _nighttimeBackgroundColor
@property (retain, nonatomic) UIColor *nighttimeHandsColor; // ivar: _nighttimeHandsColor
@property (retain, nonatomic) UIColor *nighttimeHandsLargeTickColor; // ivar: _nighttimeHandsLargeTickColor
@property (retain, nonatomic) UIColor *nighttimeHandsSmallTickColor; // ivar: _nighttimeHandsSmallTickColor
@property (retain, nonatomic) UIColor *nighttimeSecondHandColor; // ivar: _nighttimeSecondHandColor
@property (readonly, nonatomic) UILabel *northHourLabel; // ivar: _northHourLabel
@property (readonly, nonatomic) UIView *platter; // ivar: _platter
@property (nonatomic) BOOL positionLabelNorthSide; // ivar: _positionLabelNorthSide
@property (readonly, nonatomic) UILabel *southHourLabel; // ivar: _southHourLabel
@property (readonly) Class superclass;
@property (nonatomic) CGFloat tintedFraction; // ivar: _tintedFraction
@property (retain, nonatomic) UIColor *tintedPlatterColor; // ivar: _tintedPlatterColor
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
+(void)initialize;
-(BOOL)_updateLabelAndDial;
-(id)initFullColorImageViewWithDevice:(id)arg0 ;
-(id)initWithDevice:(id)arg0 smallTickCount:(NSUInteger)arg1 ;
-(void)_startClockUpdates;
-(void)_stopClockUpdates;
-(void)_updateCityAbbreviationColor;
-(void)_updateDayTimeColoring;
-(void)_updateHandsColor;
-(void)_updateHourLabelColors;
-(void)_updatePlatterColor;
-(void)_updateTickColor;
-(void)_updateUI;
-(void)applyConfiguration:(id)arg0 animated:(BOOL)arg1 ;
-(void)configureWithImageProvider:(id)arg0 reason:(NSInteger)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)pauseLiveFullColorImageView;
-(void)resumeLiveFullColorImageView;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;


@end


#endif