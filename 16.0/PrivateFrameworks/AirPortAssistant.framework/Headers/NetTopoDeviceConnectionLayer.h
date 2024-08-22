// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NETTOPODEVICECONNECTIONLAYER_H
#define NETTOPODEVICECONNECTIONLAYER_H

@class CAShapeLayer, NSString;
@protocol CALayerDelegate;


#import "NetTopoObjectLayer.h"

@interface NetTopoDeviceConnectionLayer : NetTopoObjectLayer <CALayerDelegate>

 {
    CAShapeLayer *_connectionLineLayer;
    *CGColor _lineColorActive;
    *CGColor _lineColorInactive;
    *CGColor _lineColorEthernet;
    *CGColor _lineColorWiFi;
    *CGColor _selectedLineColor;
    *CGColor _clearColor;
    *CGColor _whiteColor;
    CGPoint _upstreamConnectionPoint;
    CGPoint _downstreamConnectionPoint;
    CGPoint _siblingMergePoint;
    *CGPath _arrowhead;
}


@property (readonly, nonatomic) NSUInteger connectionMedium;
@property (nonatomic) NSUInteger connectionMediumFallback; // ivar: _connectionMediumFallback
@property (nonatomic) NSUInteger connectionStyle; // ivar: _connectionStyle
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGPoint downstreamConnectionPoint;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) *CGPath hitTestPath; // ivar: _hitTestPath
@property (nonatomic) CGPoint siblingMergePoint;
@property (readonly) Class superclass;
@property (nonatomic) CGPoint upstreamConnectionPoint;
@property (nonatomic) NSUInteger upstreamConnectionSide; // ivar: _upstreamConnectionSide
@property (nonatomic) NSUInteger upstreamDeviceSpatialRelationship; // ivar: _upstreamDeviceSpatialRelationship


-(id)describeOne:(id)arg0 uiLayer:(id)arg1 indent:(NSUInteger)arg2 ;
-(id)initWithUIStyle:(int)arg0 andOwningView:(id)arg1 ;
-(struct CGPath *)newConnectionPathWithOffset:(CGFloat)arg0 ;
-(struct CGRect )getUserInteractionBounds;
-(void)addBottomWindingConnectionToPath:(struct CGPath *)arg0 withOffset:(CGFloat)arg1 ;
-(void)addCurvedArrowConnectionToPath:(struct CGPath *)arg0 withOffset:(CGFloat)arg1 ;
-(void)addSideWindingConnectionToPath:(struct CGPath *)arg0 withOffset:(CGFloat)arg1 ;
-(void)dealloc;
-(void)drawLayer:(id)arg0 inContext:(struct CGContext *)arg1 ;
-(void)initNetTopoDeviceConnectionLayerCommonWithStyle:(int)arg0 andOwningView:(id)arg1 ;
-(void)layoutSublayers;
-(void)setNeedsDisplay;
-(void)setSelected:(BOOL)arg0 ;


@end


#endif