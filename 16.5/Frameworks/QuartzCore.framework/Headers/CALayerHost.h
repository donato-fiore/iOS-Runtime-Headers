// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALAYERHOST_H
#define CALAYERHOST_H

@class NSArray;


#import "CALayer.h"

@interface CALayerHost : CALayer

@property BOOL asynchronousOpaque;
@property float asynchronousRenderMaxAPL; // ivar: _asynchronousRenderMaxAPL
@property float asynchronousRenderMaxAPLStrength; // ivar: _asynchronousRenderMaxAPLStrength
@property CGFloat asynchronousRenderPeriod;
@property (copy) NSArray *asynchronousRenderTimes;
@property unsigned int contextId;
@property BOOL inheritsSecurity;
@property BOOL preservesFlip;
@property BOOL rendersAsynchronously;
@property BOOL resizesHostedContext;
@property BOOL stopsHitTestTransformAccumulation;


+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg0 ;
+(BOOL)_hasRenderLayerSubclass;
+(id)allLayerHosts;
-(*void)_copyRenderLayer:(*void)arg0 layerFlags:(unsigned int)arg1 commitFlags:(*unsigned int)arg2 ;
-(BOOL)_renderLayerDefinesProperty:(unsigned int)arg0 ;
-(id)init;
-(void)dealloc;
-(void)didChangeValueForKey:(id)arg0 ;
-(void)layerDidBecomeVisible:(BOOL)arg0 ;


@end


#endif