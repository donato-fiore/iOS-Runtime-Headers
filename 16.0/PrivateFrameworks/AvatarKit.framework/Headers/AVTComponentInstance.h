// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTCOMPONENTINSTANCE_H
#define AVTCOMPONENTINSTANCE_H

@class NSArray, NSString, NSMapTable, NSMutableDictionary, NSDictionary, SCNNode;

#import <Foundation/Foundation.h>


@interface AVTComponentInstance : NSObject {
    NSArray *_assets;
    NSString *_materialVariant;
    NSString *_assetImageVariant;
    float _skinnerVariantIntensity;
    NSMapTable *_variantSkinnerPairs;
    NSMutableDictionary *_visibilityRules;
    NSDictionary *_layers;
}


@property (readonly) NSString *assetImage; // ivar: _assetImage
@property (readonly) SCNNode *assetNode; // ivar: _assetNode
@property (readonly) ? uvRemappingInfo;


-(BOOL)has2DAsset;
-(BOOL)has3DAsset;
-(id)assetImageForAsset:(id)arg0 ;
-(id)assetImageWithLayerNamed:(id)arg0 ;
-(id)initWithComponent:(id)arg0 assetResourceCache:(id)arg1 ;
-(void)setImageVariant:(id)arg0 ;
-(void)setMaterialVariant:(id)arg0 ;
-(void)setSkinnerVariantIntensity:(float)arg0 skeleton:(id)arg1 ;
-(void)setVisibilityRules:(id)arg0 dictatedByCategory:(NSInteger)arg1 ;
-(void)updateMaterialsWithComponent:(id)arg0 ;


@end


#endif