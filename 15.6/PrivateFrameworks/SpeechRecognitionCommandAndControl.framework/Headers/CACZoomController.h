// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CACZOOMCONTROLLER_H
#define CACZOOMCONTROLLER_H

@class UIViewController, UIView, CAReplicatorLayer, CABackdropLayer;


#import "CACZWLensChromeView.h"

@interface CACZoomController : UIViewController

@property (weak, nonatomic) UIView *containingView; // ivar: _containingView
@property (nonatomic) CGRect dockedLensFrame; // ivar: _dockedLensFrame
@property (retain, nonatomic) CAReplicatorLayer *dockedReplicatorLayer; // ivar: _dockedReplicatorLayer
@property (retain, nonatomic) CACZWLensChromeView *lensChromeView; // ivar: _lensChromeView
@property (retain, nonatomic) CABackdropLayer *screenBackdropLayer; // ivar: _screenBackdropLayer
@property (nonatomic) CGFloat zoomFactor; // ivar: _zoomFactor
@property (retain, nonatomic) CABackdropLayer *zoomedRegionBackdropLayer; // ivar: _zoomedRegionBackdropLayer
@property (nonatomic) CGRect zoomedRegionFrame; // ivar: _zoomedRegionFrame


+(id)sharedController;
-(BOOL)_canShowWhileLocked;
-(id)initWithContainingView:(id)arg0 ;
-(id)initWithZoomFactor:(CGFloat)arg0 ;
-(struct CGRect )_effectiveRectForBounds:(struct CGRect )arg0 position:(struct CGPoint )arg1 scaleFactor:(CGFloat)arg2 ;
-(struct CGRect )bestDockFromZoomRegion:(struct CGRect )arg0 ;
-(struct CGSize )_prescaledSizeForFinalSize:(struct CGSize )arg0 withScaleFactor:(CGFloat)arg1 ;
-(void)hide;
-(void)layerize:(id)arg0 color:(id)arg1 ;
-(void)loadView;
-(void)moveZoomRegion:(struct CGRect )arg0 ;
-(void)printLayers;
-(void)show;


@end


#endif