// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKRICHCOMPLICATIONCIRCULARBASETEXTVIEW_H
#define NTKRICHCOMPLICATIONCIRCULARBASETEXTVIEW_H

@class UIView<NTKColoringView>;


#import "NTKRichComplicationCircularBaseView.h"

@interface NTKRichComplicationCircularBaseTextView : NTKRichComplicationCircularBaseView {
    UIView<NTKColoringView> *_label;
    CGFloat _labelScale;
}




-(id)_createLabelViewWithFont:(id)arg0 ;
-(id)_labelFont;
-(id)init;
-(id)label;
-(void)_layoutLabel;
-(void)_setLayoutTransformToView:(id)arg0 origin:(struct CGPoint )arg1 centerScale:(CGFloat)arg2 ;
-(void)_transitToHighlightState:(BOOL)arg0 fraction:(CGFloat)arg1 ;
-(void)layoutSubviews;
-(void)setForegroundColor:(id)arg0 ;


@end


#endif