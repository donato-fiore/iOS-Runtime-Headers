// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WGEXPLANATORYVIEW_H
#define WGEXPLANATORYVIEW_H

@class UIView, UIImageView, UILabel, MTVisualStylingProvider, UITapGestureRecognizer;



@interface WGExplanatoryView : UIView {
    UIImageView *_glyphView;
    UILabel *_label;
    MTVisualStylingProvider *_visualStylingProvider;
    UITapGestureRecognizer *_tapGesture;
}




-(id)initWithGlyph:(id)arg0 andExplanation:(id)arg1 ;
-(void)_configureExplanationLabelWithExplanation:(id)arg0 ;
-(void)_configureGlyphViewWithGlyph:(id)arg0 ;
-(void)_invalidateVisualStyling;
-(void)_updateVisualStylingIfNecessary;
-(void)addTarget:(id)arg0 action:(SEL)arg1 ;
-(void)layoutSubviews;
-(void)willMoveToSuperview:(id)arg0 ;


@end


#endif