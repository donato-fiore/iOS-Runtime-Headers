// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _EXPLORERDOTLAYER_H
#define _EXPLORERDOTLAYER_H

@class CATransformLayer, CALayer;



@interface _ExplorerDotLayer : CATransformLayer

@property (readonly, nonatomic) CALayer *connectivityDotBackingLayer; // ivar: _connectivityDotBackingLayer
@property (readonly, nonatomic) CALayer *connectivityDotLayer; // ivar: _connectivityDotLayer
@property (readonly, nonatomic) CALayer *noServicePillLayer; // ivar: _noServicePillLayer


-(id)init;
-(void)layoutSublayers;


@end


#endif