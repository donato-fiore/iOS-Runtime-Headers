// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMSEMANTICSTYLESTATUSINDICATOR_H
#define CAMSEMANTICSTYLESTATUSINDICATOR_H

@class CALayer, CAShapeLayer, CAReplicatorLayer, UIView, UIImageView;


#import "CAMControlStatusIndicator.h"
#import "CAMSemanticStyle.h"

@interface CAMSemanticStyleStatusIndicator : CAMControlStatusIndicator

@property (readonly, nonatomic) CALayer *_coolPlatterLayer; // ivar: __coolPlatterLayer
@property (readonly, nonatomic) CALayer *_maskBackgroundLayer; // ivar: __maskBackgroundLayer
@property (readonly, nonatomic) CALayer *_maskLargeTickLayer; // ivar: __maskLargeTickLayer
@property (readonly, nonatomic) CALayer *_maskSmallTickLayer; // ivar: __maskSmallTickLayer
@property (readonly, nonatomic) CAShapeLayer *_maskStrokeLayer; // ivar: __maskStrokeLayer
@property (readonly, nonatomic) CAReplicatorLayer *_maskTickReplicatorLayer; // ivar: __maskTickReplicatorLayer
@property (readonly, nonatomic) CALayer *_neutralPlatterLayer; // ivar: __neutralPlatterLayer
@property (readonly, nonatomic) CALayer *_platterMaskLayer; // ivar: __platterMaskLayer
@property (readonly, nonatomic) UIView *_platterView; // ivar: __platterView
@property (readonly, nonatomic) UIImageView *_stackSymbolView; // ivar: __stackSymbolView
@property (readonly, nonatomic) CALayer *_warmPlatterLayer; // ivar: __warmPlatterLayer
@property (retain, nonatomic) CAMSemanticStyle *semanticStyle; // ivar: _semanticStyle


-(BOOL)shouldUseOutline;
-(BOOL)supportsOrientations;
-(NSInteger)_visibleTickCount;
-(id)_generatePlatterImageWithRenderer:(id)arg0 colors:(id)arg1 size:(struct CGSize )arg2 ;
-(id)imageNameForCurrentState;
-(id)init;
-(struct CGRect )_platterFrame;
-(struct CGSize )intrinsicContentSize;
-(void)_updateGradientAlphasAnimated:(BOOL)arg0 ;
-(void)_updateGradientImages;
-(void)_updateImageOrientationAnimated:(BOOL)arg0 ;
-(void)_updatePlatterStrokeProgressAnimated:(BOOL)arg0 ;
-(void)_updateStrokePath;
-(void)_updateTicksAnimated:(BOOL)arg0 ;
-(void)layoutSubviews;


@end


#endif