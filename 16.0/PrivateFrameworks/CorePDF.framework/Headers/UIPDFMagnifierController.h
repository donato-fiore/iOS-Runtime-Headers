// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIPDFMAGNIFIERCONTROLLER_H
#define UIPDFMAGNIFIERCONTROLLER_H

@class UIWindow, UIView, CALayer, CAShapeLayer;

#import <Foundation/Foundation.h>

#import "UIPDFPageView.h"

@interface UIPDFMagnifierController : NSObject {
    UIWindow *_textEffectsWindow;
    UIView *_textEffectsSubView;
    CALayer *_loLayer;
    CALayer *_hiLayer;
    CALayer *_imageContainer;
    CALayer *_imageLayer;
    CAShapeLayer *_selectionLayer;
    CALayer *_maskLayer;
    CGFloat _power;
    CGSize _magnifierSize;
    BOOL _loupe;
    CGPoint _touchPoint;
    CGPoint _pointToMagnify;
    CGFloat _enlargementScale;
    CALayer *_leftBar;
    CALayer *_leftGrabber;
    CALayer *_rightBar;
    CALayer *_rightGrabber;
    CGSize _controlPointSize;
    *CGColor _grabberColor;
    NSUInteger _pageRotation;
    BOOL _visible;
}


@property (nonatomic) UIPDFPageView *pageView; // ivar: pageView


-(BOOL)isSelectionUniformlyRotated:(*CGFloat)arg0 ;
-(BOOL)visible;
-(id)imageReceived:(id)arg0 data:(id)arg1 ;
-(id)init;
-(struct CGPoint )convertPointToEnlargedSpace:(struct CGPoint )arg0 ;
-(struct CGPoint )convertPointToRotatedPage:(struct CGPoint )arg0 ;
-(struct CGPoint )convertViewPointToEnlargedSpace:(struct CGPoint )arg0 ;
-(struct CGPoint )pointToMagnifyInPDFSpace;
-(struct CGPoint )viewPointInTextEffectsSpace;
-(struct CGRect )convertRectToEnlargedSpace:(struct CGRect )arg0 ;
-(struct CGRect )convertRectToRotatedPage:(struct CGRect )arg0 ;
-(void)_show;
-(void)addBling;
-(void)addTextRangeHandles;
-(void)dealloc;
-(void)drawLayer:(id)arg0 inContext:(struct CGContext *)arg1 ;
-(void)hide;
-(void)move;
-(void)placeImage;
-(void)setImageContainerMask;
-(void)setImageContainerPositionLoupe;
-(void)setImageContainerPositionMagnifier;
-(void)setLayerPositions;
-(void)setPosition:(struct CGPoint )arg0 viewPoint:(struct CGPoint )arg1 ;
-(void)setPower;
-(void)setSelectionPath;
-(void)setSelectionPath:(struct CGPath *)arg0 bounds:(struct CGRect )arg1 transform:(struct CGAffineTransform )arg2 ;
-(void)setTextRangeHandlePositions;
-(void)showLoupe;
-(void)showMagnifier;
-(void)tearDownLayers;


@end


#endif