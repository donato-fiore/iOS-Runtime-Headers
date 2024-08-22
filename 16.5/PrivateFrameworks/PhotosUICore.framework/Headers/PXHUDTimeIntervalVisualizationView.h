// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXHUDTIMEINTERVALVISUALIZATIONVIEW_H
#define PXHUDTIMEINTERVALVISUALIZATIONVIEW_H

@class UILabel, NSTimer;


#import "PXHUDAbstractVisualizationView.h"
#import "PXHUDTimeIntervalVisualization.h"

@interface PXHUDTimeIntervalVisualizationView : PXHUDAbstractVisualizationView {
    UILabel *_titleAndTimeLabel;
    NSTimer *_timer;
}


@property (retain, nonatomic) PXHUDTimeIntervalVisualization *visualization;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_cleanupTimer;
-(void)_setupTimer;
-(void)_timerTick;
-(void)_updateTimer;
-(void)_updateTitleAndTimeLabel;
-(void)dealloc;


@end


#endif