// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPALETTEPENCILINTERACTIONFEEDBACKVIEW_H
#define PKPALETTEPENCILINTERACTIONFEEDBACKVIEW_H

@class UIView, MTMaterialView;


#import "PKPaletteToolPreview.h"

@interface PKPalettePencilInteractionFeedbackView : UIView

@property (retain, nonatomic) MTMaterialView *backgroundView; // ivar: _backgroundView
@property (retain, nonatomic) UIView *clippingView; // ivar: _clippingView
@property (retain, nonatomic) PKPaletteToolPreview *toolPreview; // ivar: _toolPreview


-(id)init;
-(void)_setCornerRadius:(CGFloat)arg0 ;
-(void)layoutSubviews;
-(void)showPreviewForTool:(id)arg0 scalingFactor:(CGFloat)arg1 animated:(BOOL)arg2 ;


@end


#endif