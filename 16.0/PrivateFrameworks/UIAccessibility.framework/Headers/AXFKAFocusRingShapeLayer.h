// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXFKAFOCUSRINGSHAPELAYER_H
#define AXFKAFOCUSRINGSHAPELAYER_H

@class CAShapeLayer;


#import "AXFKAFocusRingBorderShapeLayer.h"

@interface AXFKAFocusRingShapeLayer : CAShapeLayer

@property (retain, nonatomic) AXFKAFocusRingBorderShapeLayer *bottomBorderLayer; // ivar: _bottomBorderLayer
@property (readonly, nonatomic) BOOL increaseContrast;
@property (nonatomic) NSInteger interfaceStyle; // ivar: _interfaceStyle
@property (nonatomic) NSUInteger kind; // ivar: _kind
@property (readonly, nonatomic) *CGColor ringColorRef;
@property (readonly, nonatomic) BOOL useDefaultRingColor;
@property (readonly, nonatomic) BOOL useLargeRing;


+(id)focusLayerForUserInterfaceStyle:(NSInteger)arg0 ;
+(id)layerWithStyle:(NSInteger)arg0 kind:(NSUInteger)arg1 ;
+(id)parentLayerForUserInterfaceStyle:(NSInteger)arg0 ;
+(id)selectedLayerForUserInterfaceStyle:(NSInteger)arg0 ;
+(id)selectedParentLayerForUserInterfaceStyle:(NSInteger)arg0 ;
-(CGFloat)borderScale;
-(CGFloat)insetForFocusRingBorder:(id)arg0 ;
-(CGFloat)lineWidthForBottomLayer;
-(id)bottomFocusRingColorForTintColor:(id)arg0 ;
-(id)fillColorForBottomLayer;
-(id)init;
-(id)tintColor;
-(struct CGColor *)strokeColorForBottomLayer;
-(void)_updateBottomLayerPath;
-(void)dealloc;
-(void)setPath:(struct CGPath *)arg0 ;
-(void)updateAppearance;


@end


#endif