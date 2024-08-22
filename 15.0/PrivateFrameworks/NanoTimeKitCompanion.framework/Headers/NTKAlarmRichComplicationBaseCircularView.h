// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKALARMRICHCOMPLICATIONBASECIRCULARVIEW_H
#define NTKALARMRICHCOMPLICATIONBASECIRCULARVIEW_H

@class UIImageView;


#import "NTKRichComplicationCircularBaseView.h"
#import "NTKColoringLabel.h"
#import "NTKRichComplicationRingProgressView.h"

@interface NTKAlarmRichComplicationBaseCircularView : NTKRichComplicationCircularBaseView {
    UIImageView *_idleImageView;
    NTKColoringLabel *_timeLabel;
    NTKColoringLabel *_designatorLabel;
    UIImageView *_snoozeImageView;
    NTKRichComplicationRingProgressView *_snoozeProgressView;
    ? _layoutConstants;
    NSUInteger _layout;
}




+(BOOL)supportsComplicationFamily:(NSInteger)arg0 ;
-(BOOL)_pairedDeviceSupportsComplicationSymbols;
-(id)initWithFamily:(NSInteger)arg0 ;
-(void)_handleTemplate:(id)arg0 reason:(NSInteger)arg1 ;
-(void)layoutSubviews;
-(void)makeBackgroundTransparent;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;


@end


#endif