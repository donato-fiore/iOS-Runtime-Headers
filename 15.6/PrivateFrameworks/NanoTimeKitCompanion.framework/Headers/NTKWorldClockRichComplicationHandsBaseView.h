// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKWORLDCLOCKRICHCOMPLICATIONHANDSBASEVIEW_H
#define NTKWORLDCLOCKRICHCOMPLICATIONHANDSBASEVIEW_H

@class NSString, UIColor;
@protocol CLKMonochromeComplicationView, CLKMonochromeFilterProvider;


#import "NTKAnalogHandsView.h"

@interface NTKWorldClockRichComplicationHandsBaseView : NTKAnalogHandsView <CLKMonochromeComplicationView>

 {
    ? _layoutConstants;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<CLKMonochromeFilterProvider> *filterProvider; // ivar: _filterProvider
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIColor *pegDotColor; // ivar: _pegDotColor
@property (readonly) Class superclass;


+(BOOL)showsSecondHand;
-(CGFloat)_timeAnimationFramesPerSecondForDevice:(id)arg0 ;
-(NSInteger)complicationFamily;
-(NSInteger)displayedHour;
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