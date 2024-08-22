// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHLISTENINGINNERCIRCLELAYER_H
#define SHLISTENINGINNERCIRCLELAYER_H

@class CAShapeLayer, CALayer;


#import "SHPaletteLayer.h"

@interface SHListeningInnerCircleLayer : SHPaletteLayer

@property (retain, nonatomic) CAShapeLayer *circle; // ivar: _circle
@property (retain, nonatomic) CALayer *circleContainerLayer; // ivar: _circleContainerLayer


-(struct CGPath *)circlePathForRect:(struct CGRect )arg0 ;
-(void)layoutSublayers;
-(void)setup;


@end


#endif