// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKWORLDCLOCKRICHCOMPLICATIONBASECIRCULARVIEW_H
#define NTKWORLDCLOCKRICHCOMPLICATIONBASECIRCULARVIEW_H

@class UIColor;


#import "NTKRichComplicationCircularBaseView.h"
#import "NTKWorldClockGraphicCircularView.h"

@interface NTKWorldClockRichComplicationBaseCircularView : NTKRichComplicationCircularBaseView {
    NTKWorldClockGraphicCircularView *_worldClockCircularView;
}


@property (retain, nonatomic) UIColor *daytimeBackgroundColor;
@property (retain, nonatomic) UIColor *daytimeHandsColor;
@property (retain, nonatomic) UIColor *daytimeHandsDotColor;
@property (retain, nonatomic) UIColor *nighttimeBackgroundColor;
@property (retain, nonatomic) UIColor *nighttimeHandsColor;
@property (retain, nonatomic) UIColor *nighttimeHandsDotColor;


-(BOOL)_shouldAnimateWithTemplateUpdateReason:(NSInteger)arg0 ;
-(NSInteger)tritiumUpdateMode;
-(id)initWithFamily:(NSInteger)arg0 ;
-(void)_applyPaused;
-(void)_handleTemplate:(id)arg0 reason:(NSInteger)arg1 ;
-(void)_startClockUpdates;
-(void)_stopClockUpdates;
-(void)dealloc;
-(void)layoutSubviews;
-(void)makeBackgroundTransparent;
-(void)setFilterProvider:(id)arg0 ;
-(void)setPaused:(BOOL)arg0 ;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;


@end


#endif