// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHLISTENINGAUTOSHADOWLAYER_H
#define SHLISTENINGAUTOSHADOWLAYER_H

@class CALayer, CAShapeLayer;


#import "SHPaletteLayer.h"

@interface SHListeningAutoShadowLayer : SHPaletteLayer

@property (retain, nonatomic) CALayer *autoShadowBackgroundLayer; // ivar: _autoShadowBackgroundLayer
@property (retain, nonatomic) CAShapeLayer *autoShadowOuterLayer; // ivar: _autoShadowOuterLayer


-(void)layoutSublayers;
-(void)setup;


@end


#endif