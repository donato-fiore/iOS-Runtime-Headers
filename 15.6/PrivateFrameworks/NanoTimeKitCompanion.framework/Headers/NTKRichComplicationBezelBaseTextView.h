// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKRICHCOMPLICATIONBEZELBASETEXTVIEW_H
#define NTKRICHCOMPLICATIONBEZELBASETEXTVIEW_H

@class UIView<NTKColoringView>;


#import "NTKRichComplicationBezelView.h"

@interface NTKRichComplicationBezelBaseTextView : NTKRichComplicationBezelView {
    UIView<NTKColoringView> *_label;
    CGFloat _labelRotationInDegree;
    CGFloat _labelScale;
}




-(id)_createLabelViewWithFont:(id)arg0 ;
-(id)_labelFont;
-(id)init;
-(id)label;
-(void)_editingDidEnd;
-(void)_layoutLabel;
-(void)_setEditingTransitionFraction:(CGFloat)arg0 direction:(NSInteger)arg1 position:(NSInteger)arg2 type:(NSInteger)arg3 ;
-(void)_setWhistlerAnalogEditingTransitonFraction:(CGFloat)arg0 direction:(NSInteger)arg1 position:(NSInteger)arg2 ;
-(void)_transitToHighlightState:(BOOL)arg0 fraction:(CGFloat)arg1 ;
-(void)layoutSubviews;
-(void)setForegroundColor:(id)arg0 ;


@end


#endif