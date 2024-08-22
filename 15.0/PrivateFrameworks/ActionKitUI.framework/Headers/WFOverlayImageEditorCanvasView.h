// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFOVERLAYIMAGEEDITORCANVASVIEW_H
#define WFOVERLAYIMAGEEDITORCANVASVIEW_H

@class UIView, UIImageView, NSString, WFOverlayImageTransform, UIRotationGestureRecognizer;
@protocol UIGestureRecognizerDelegate;



@interface WFOverlayImageEditorCanvasView : UIView <UIGestureRecognizerDelegate>



@property (readonly, weak, nonatomic) UIImageView *backgroundImageView; // ivar: _backgroundImageView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) WFOverlayImageTransform *imageTransform; // ivar: _imageTransform
@property (readonly, weak, nonatomic) UIImageView *overlayImageView; // ivar: _overlayImageView
@property (readonly, weak, nonatomic) UIRotationGestureRecognizer *rotateRecognizer; // ivar: _rotateRecognizer
@property (nonatomic, getter=isRotationEnabled) BOOL rotationEnabled;
@property (readonly) Class superclass;


-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(id)initWithBackgroundImage:(id)arg0 overlayImage:(id)arg1 transform:(id)arg2 ;
-(void)handlePanGesture:(id)arg0 ;
-(void)handlePinchGesture:(id)arg0 ;
-(void)handleRotateGesture:(id)arg0 ;
-(void)layoutSubviews;
-(void)reset;
-(void)setOverlayImageOpacity:(CGFloat)arg0 ;


@end


#endif