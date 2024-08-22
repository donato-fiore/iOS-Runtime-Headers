// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKRICHCOMPLICATIONCIRCULARSTACKCONTENTTEXTVIEW_H
#define NTKRICHCOMPLICATIONCIRCULARSTACKCONTENTTEXTVIEW_H

@class UIView, CLKUIColoringLabel;


#import "NTKRichComplicationCircularBaseView.h"

@interface NTKRichComplicationCircularStackContentTextView : NTKRichComplicationCircularBaseView {
    UIView *_line1View;
    CLKUIColoringLabel *_line2Label;
}


@property (readonly, nonatomic) CLKUIColoringLabel *line2Label;


-(BOOL)templateWantsPlatter;
-(NSInteger)_line2FilterStyle;
-(id)initWithFamily:(NSInteger)arg0 ;
-(id)line1View;
-(id)line2TextProviderFromTemplate:(id)arg0 ;
-(void)_editingDidEnd;
-(void)_handleTemplate:(id)arg0 reason:(NSInteger)arg1 ;
-(void)layoutSubviews;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;


@end


#endif