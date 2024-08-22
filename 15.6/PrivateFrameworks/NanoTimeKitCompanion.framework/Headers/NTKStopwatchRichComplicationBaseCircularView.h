// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKSTOPWATCHRICHCOMPLICATIONBASECIRCULARVIEW_H
#define NTKSTOPWATCHRICHCOMPLICATIONBASECIRCULARVIEW_H

@class UIImageView, NSNumber, NSString;
@protocol CLKMonochromeComplicationView, CLKMonochromeFilterProvider;


#import "NTKRichComplicationCircularBaseView.h"
#import "NTKColoringLabel.h"
#import "NTKRichComplicationDialView.h"

@interface NTKStopwatchRichComplicationBaseCircularView : NTKRichComplicationCircularBaseView <CLKMonochromeComplicationView>

 {
    UIImageView *_stopwatchImageView;
    NTKColoringLabel *_timeLabel;
    NTKRichComplicationDialView *_frontDial;
    NTKRichComplicationDialView *_backDial;
    NSNumber *_updateToken;
    ? _layoutConstants;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<CLKMonochromeFilterProvider> *filterProvider;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)_stopwatchCurrentTime;
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