// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAREPLICATORLAYER_H
#define CAREPLICATORLAYER_H



#import "CALayer.h"

@interface CAReplicatorLayer : CALayer

@property float instanceAlphaOffset;
@property float instanceBlueOffset;
@property *CGColor instanceColor;
@property NSInteger instanceCount;
@property CGFloat instanceDelay;
@property float instanceGreenOffset;
@property float instanceRedOffset;
@property CATransform3D instanceTransform;
@property BOOL preservesDepth;


+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg0 ;
+(BOOL)_hasRenderLayerSubclass;
+(id)defaultValueForKey:(id)arg0 ;
-(*void)_copyRenderLayer:(*void)arg0 layerFlags:(unsigned int)arg1 commitFlags:(*unsigned int)arg2 ;
-(BOOL)_renderLayerDefinesProperty:(unsigned int)arg0 ;
-(id)implicitAnimationForKeyPath:(id)arg0 ;
-(id)init;
-(unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)arg0 ;
-(void)_renderSublayersInContext:(struct CGContext *)arg0 ;
-(void)didChangeValueForKey:(id)arg0 ;


@end


#endif