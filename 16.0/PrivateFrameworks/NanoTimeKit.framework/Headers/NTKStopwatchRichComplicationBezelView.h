// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKSTOPWATCHRICHCOMPLICATIONBEZELVIEW_H
#define NTKSTOPWATCHRICHCOMPLICATIONBEZELVIEW_H

@class CLKUIColoringLabel;


#import "NTKRichComplicationBezelBaseTextView.h"

@interface NTKStopwatchRichComplicationBezelView : NTKRichComplicationBezelBaseTextView {
    CLKUIColoringLabel *_textLabel;
}




-(id)_createLabelViewWithFont:(id)arg0 ;
-(id)init;
-(void)_applyPausedUpdate;
-(void)_editingDidEnd;
-(void)_handleTemplate:(id)arg0 reason:(NSInteger)arg1 ;
-(void)_updateTextProvider;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;


@end


#endif