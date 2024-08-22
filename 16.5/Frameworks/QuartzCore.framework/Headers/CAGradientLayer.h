// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAGRADIENTLAYER_H
#define CAGRADIENTLAYER_H

@class NSArray, NSString;


#import "CALayer.h"

@interface CAGradientLayer : CALayer

@property (retain) id *colorMap;
@property *CGColorSpace colorSpace;
@property (copy) NSArray *colors;
@property CGPoint endPoint;
@property (copy) NSArray *interpolations;
@property (copy) NSArray *locations;
@property CGFloat noiseScale;
@property BOOL premultiplied;
@property CGPoint startPoint;
@property (copy) NSString *type;


+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg0 ;
+(BOOL)_hasRenderLayerSubclass;
+(id)defaultValueForKey:(id)arg0 ;
-(*void)_copyRenderLayer:(*void)arg0 layerFlags:(unsigned int)arg1 commitFlags:(*unsigned int)arg2 ;
-(BOOL)CA_validateValue:(id)arg0 forKey:(id)arg1 ;
-(BOOL)_renderLayerDefinesProperty:(unsigned int)arg0 ;
-(id)implicitAnimationForKeyPath:(id)arg0 ;
-(unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)arg0 ;
-(void)_renderBackgroundInContext:(struct CGContext *)arg0 ;
-(void)didChangeValueForKey:(id)arg0 ;


@end


#endif