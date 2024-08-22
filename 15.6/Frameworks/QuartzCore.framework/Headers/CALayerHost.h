// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALAYERHOST_H
#define CALAYERHOST_H

@class NSArray;


#import "CALayer.h"

@interface CALayerHost : CALayer

@property float asynchronousRenderMaxAPL; // ivar: _asynchronousRenderMaxAPL
@property float asynchronousRenderMaxAPLStrength; // ivar: _asynchronousRenderMaxAPLStrength
@property CGFloat asynchronousRenderPeriod;
@property (copy) NSArray *asynchronousRenderTimes;
@property unsigned int contextId;
@property BOOL inheritsSecurity;
@property BOOL preservesFlip;
@property BOOL rendersAsynchronously;


+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg0 ;
+(BOOL)_hasRenderLayerSubclass;
-(*void)_copyRenderLayer:(*void)arg0 layerFlags:(unsigned int)arg1 commitFlags:(*unsigned int)arg2 ;
-(BOOL)_renderLayerDefinesProperty:(unsigned int)arg0 ;
-(void)didChangeValueForKey:(id)arg0 ;
-(void)layerDidBecomeVisible:(BOOL)arg0 ;


@end


#endif