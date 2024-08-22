// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCH3DSAGEFILLDATA_H
#define TSCH3DSAGEFILLDATA_H

@class NSDictionary, NSArray;
@protocol TSCH3DSageFillData, TSCH3DSageFillImageDataSource;

#import <Foundation/Foundation.h>

#import "TSCH3DFillSetIdentifier.h"

@interface TSCH3DSageFillData : NSObject <TSCH3DSageFillData>

 {
    NSDictionary *_properties;
    NSArray *_layersProperties;
    TSCH3DFillSetIdentifier *_identifier;
    NSObject<TSCH3DSageFillImageDataSource> *_imageSource;
    BOOL _isLowRes;
}




+(id)TSPImageDataFromTexture:(id)arg0 ;
+(id)dataWithFillSetIdentifier:(id)arg0 ;
+(id)dataWithFillSetIdentifier:(id)arg0 isLowRes:(BOOL)arg1 ;
+(id)dataWithProperties:(id)arg0 layersProperties:(id)arg1 identifier:(id)arg2 imageSource:(id)arg3 ;
+(id)dataWithProperties:(id)arg0 layersProperties:(id)arg1 identifier:(id)arg2 imageSource:(id)arg3 isLowRes:(BOOL)arg4 ;
+(id)textureWithImageData:(id)arg0 ;
-(BOOL)isLayerEnabledForIndex:(NSUInteger)arg0 ;
-(BOOL)layerIsEnvironmentMapForIndex:(NSUInteger)arg0 ;
-(NSInteger)layerBlendModeForIndex:(NSUInteger)arg0 ;
-(NSUInteger)layerCount;
-(float)layerRotationForIndex:(NSUInteger)arg0 ;
-(float)layerScaleForIndex:(NSUInteger)arg0 ;
-(float)opacity;
-(float)shininess;
-(id)fillSetIdentifier;
-(id)initWithProperties:(id)arg0 layersProperties:(id)arg1 identifier:(id)arg2 imageSource:(id)arg3 ;
-(id)initWithProperties:(id)arg0 layersProperties:(id)arg1 identifier:(id)arg2 imageSource:(id)arg3 isLowRes:(BOOL)arg4 ;
-(id)layerLightenPercentageForIndex:(NSUInteger)arg0 ;
-(id)objectForKey:(id)arg0 index:(NSUInteger)arg1 ;
-(id)textureForIndex:(NSUInteger)arg0 ;
-(int)layerTilingModeForIndex:(NSUInteger)arg0 ;
-(struct Color )colorFromRedKey:(id)arg0 greenKey:(id)arg1 blueKey:(id)arg2 defaultGray:(float)arg3 ;
-(struct Color )diffuse;
-(struct Color )emissive;
-(struct Color )makeGray:(float)arg0 ;
-(struct Color )specular;
-(struct ColorResult )colorFromRedKey:(id)arg0 greenKey:(id)arg1 blueKey:(id)arg2 ;


@end


#endif