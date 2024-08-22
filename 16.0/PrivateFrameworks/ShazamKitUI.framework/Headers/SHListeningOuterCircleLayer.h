// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SHLISTENINGOUTERCIRCLELAYER_H
#define SHLISTENINGOUTERCIRCLELAYER_H

@class CALayer;


#import "SHPaletteLayer.h"

@interface SHListeningOuterCircleLayer : SHPaletteLayer

@property (retain, nonatomic) CALayer *circleContainerLayer; // ivar: _circleContainerLayer
@property (retain, nonatomic) CALayer *circleLayer; // ivar: _circleLayer


-(void)layoutSublayers;
-(void)setup;


@end


#endif