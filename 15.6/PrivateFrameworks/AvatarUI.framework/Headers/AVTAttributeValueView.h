// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVTATTRIBUTEVALUEVIEW_H
#define AVTATTRIBUTEVALUEVIEW_H

@class UIView, CAShapeLayer, NSString, NSUUID, UIImage, CALayer;
@protocol AVTSectionItemTransitionModel, AVTDiscardableContent;



@interface AVTAttributeValueView : UIView <AVTSectionItemTransitionModel, AVTDiscardableContent>



@property (retain, nonatomic) CAShapeLayer *clippingLayer; // ivar: _clippingLayer
@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *discardableContentHandler; // ivar: discardableContentHandler
@property (retain, nonatomic) NSUUID *displaySessionUUID; // ivar: _displaySessionUUID
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (retain, nonatomic) CALayer *imageLayer; // ivar: _imageLayer
@property (nonatomic) CGSize imageSizeRatio; // ivar: _imageSizeRatio
@property (nonatomic, getter=isSelected) BOOL selected; // ivar: _selected
@property (retain, nonatomic) CAShapeLayer *selectionLayer; // ivar: _selectionLayer
@property (nonatomic) NSUInteger selectionStyle; // ivar: _selectionStyle
@property (nonatomic) BOOL showPlaceholder; // ivar: _showPlaceholder
@property (readonly) Class superclass;
@property (retain, nonatomic) CALayer *transitionImageLayer; // ivar: _transitionImageLayer


+(struct CGRect )imageViewRectForBounds:(struct CGRect )arg0 imageSizeRatio:(struct CGSize )arg1 scale:(CGFloat)arg2 ;
-(id)clippingBezierPath;
-(id)fromLayer;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)selectionBezierPath;
-(id)toLayer;
-(struct CGRect )selectorRect;
-(struct CGRect )shapeLayerRect;
-(void)bringSelectionLayersToFront;
-(void)cleanupAfterTransition;
-(void)configureImageLayer:(id)arg0 ;
-(void)discardContent;
-(void)layoutSubviews;
-(void)prepareForTransitionToImage:(id)arg0 ;
-(void)relayoutSublayers;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateCornerRadii;
-(void)updateHighlightedState:(BOOL)arg0 animated:(BOOL)arg1 completionBlock:(id)arg2 ;
-(void)updateSelectedState:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)updateSelectionAndMaskLayer;
-(void)updateWithImage:(id)arg0 ;


@end


#endif