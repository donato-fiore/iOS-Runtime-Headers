// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKDIGITALTIMERICHCOMPLICATIONBEZELVIEW_H
#define NTKDIGITALTIMERICHCOMPLICATIONBEZELVIEW_H



#import "NTKRichComplicationBezelBaseTextView.h"
#import "NTKDigitalTimeLabel.h"

@interface NTKDigitalTimeRichComplicationBezelView : NTKRichComplicationBezelBaseTextView {
    NTKDigitalTimeLabel *_timeLabel;
}




-(id)_createLabelViewWithFont:(id)arg0 ;
-(id)init;
-(void)_handleTemplate:(id)arg0 reason:(NSInteger)arg1 ;
-(void)dealloc;
-(void)setTimeTravelDate:(id)arg0 animated:(BOOL)arg1 ;
-(void)timeOffsetChanged;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateDate;
-(void)updateMonochromeColor;


@end


#endif