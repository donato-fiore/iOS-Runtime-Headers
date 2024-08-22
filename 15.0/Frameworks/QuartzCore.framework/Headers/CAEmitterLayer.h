// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAEMITTERLAYER_H
#define CAEMITTERLAYER_H

@class NSArray, NSString;


#import "CALayer.h"

@interface CAEmitterLayer : CALayer

@property float birthRate;
@property CGFloat cullMaxZ;
@property CGFloat cullMinZ;
@property CGRect cullRect;
@property (copy) NSArray *emitterBehaviors;
@property (copy) NSArray *emitterCells;
@property CGFloat emitterDepth;
@property float emitterDuration;
@property (copy) NSString *emitterMode;
@property *CGPath emitterPath;
@property CGPoint emitterPosition;
@property (copy) NSArray *emitterRects;
@property (copy) NSString *emitterShape;
@property CGSize emitterSize;
@property CGFloat emitterZPosition;
@property float lifetime;
@property BOOL preservesDepth;
@property (copy) NSString *renderMode;
@property float scale;
@property unsigned int seed;
@property float spin;
@property float spinBias;
@property CGFloat updateInterval;
@property float velocity;


+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg0 ;
+(BOOL)_hasRenderLayerSubclass;
+(id)defaultValueForKey:(id)arg0 ;
-(*void)_copyRenderLayer:(*void)arg0 layerFlags:(unsigned int)arg1 commitFlags:(*unsigned int)arg2 ;
-(BOOL)CA_validateValue:(id)arg0 forKey:(id)arg1 ;
-(BOOL)_renderLayerDefinesProperty:(unsigned int)arg0 ;
-(id)implicitAnimationForKeyPath:(id)arg0 ;
-(unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)arg0 ;
-(void)_colorSpaceDidChange;
-(void)didChangeValueForKey:(id)arg0 ;
-(void)reloadValueForKeyPath:(id)arg0 ;


@end


#endif