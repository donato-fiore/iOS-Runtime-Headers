// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKSTOPWATCHRICHCOMPLICATIONBASECIRCULARVIEW_H
#define NTKSTOPWATCHRICHCOMPLICATIONBASECIRCULARVIEW_H

@class UIImageView, CLKUIColoringLabel, NSNumber, NSString;
@protocol CLKMonochromeComplicationView, CLKMonochromeFilterProvider;


#import "NTKRichComplicationCircularBaseView.h"
#import "NTKRichComplicationDialView.h"

@interface NTKStopwatchRichComplicationBaseCircularView : NTKRichComplicationCircularBaseView <CLKMonochromeComplicationView>

 {
    UIImageView *_stopwatchImageView;
    CLKUIColoringLabel *_timeLabel;
    NTKRichComplicationDialView *_frontDial;
    NTKRichComplicationDialView *_backDial;
    NSNumber *_updateToken;
    ? _layoutConstants;
    BOOL _showPlatter;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<CLKMonochromeFilterProvider> *filterProvider;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)templateWantsPlatter;
-(CGFloat)_stopwatchCurrentTime;
-(NSInteger)_backgroundFilterStyle;
-(NSInteger)_foregroundFilterStyle;
-(id)initWithFamily:(NSInteger)arg0 ;
-(void)_applyPausedUpdate;
-(void)_editingDidEnd;
-(void)_handleTemplate:(id)arg0 reason:(NSInteger)arg1 ;
-(void)_updateDialProgress;
-(void)dealloc;
-(void)layoutSubviews;
-(void)makeBackgroundTransparent;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;


@end


#endif