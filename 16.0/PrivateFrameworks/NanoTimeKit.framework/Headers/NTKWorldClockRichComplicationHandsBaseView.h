// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKWORLDCLOCKRICHCOMPLICATIONHANDSBASEVIEW_H
#define NTKWORLDCLOCKRICHCOMPLICATIONHANDSBASEVIEW_H

@class NSString, UIColor;
@protocol CLKMonochromeComplicationView, CLKMonochromeFilterProvider;


#import "NTKAnalogHandsView.h"

@interface NTKWorldClockRichComplicationHandsBaseView : NTKAnalogHandsView <CLKMonochromeComplicationView>

 {
    ? _layoutConstants;
    BOOL _showGossamerUI;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger displayedHour;
@property (weak, nonatomic) NSObject<CLKMonochromeFilterProvider> *filterProvider; // ivar: _filterProvider
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIColor *pegDotColor;
@property (readonly) Class superclass;


+(BOOL)showsSecondHand;
-(CGFloat)_timeAnimationFramesPerSecondForDevice:(id)arg0 ;
-(NSInteger)complicationFamily;
-(id)createSecondHandView;
-(id)hourHandConfiguration;
-(id)initForDevice:(id)arg0 ;
-(id)minuteHandConfiguration;
-(id)secondHandConfiguration;
-(void)layoutHandViews;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;


@end


#endif