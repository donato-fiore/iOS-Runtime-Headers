// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTASSET_H
#define AVTASSET_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface AVTAsset : NSObject {
    NSString *_resourcePath;
    unsigned char _resourceType;
    NSDictionary *_morphVariantDependencies;
    NSDictionary *_imageVariantDependencies;
    NSDictionary *_materialVariantDependencies;
    NSDictionary *_highlights;
    NSUInteger _refCount;
    id *_cachedResource;
    BOOL _forceHighTessellation;
    NSDictionary *_perAssetMain;
}


@property (readonly) NSString *ambientOcclusion; // ivar: _ambientOcclusion
@property (readonly) NSInteger componentType; // ivar: _componentType
@property (readonly) NSUInteger editableColorCount; // ivar: _editableColorCount
@property (readonly) BOOL is2DAsset;
@property (readonly) BOOL is3DAsset;
@property (readonly) NSDictionary *layers; // ivar: _layers
@property (readonly) NSDictionary *specializationSettings; // ivar: _specializationSettings
@property (readonly) NSString *uid; // ivar: _uid
@property (readonly) ? uvRemappingInfo; // ivar: _uvRemappingInfo


-(id)assetImageForAsset:(id)arg0 ;
-(id)description;
-(id)initWithType:(NSInteger)arg0 path:(id)arg1 packID:(id)arg2 ;
-(id)instantiateResource;
-(id)resourceByCachingIfNeeded:(BOOL)arg0 ;
-(void)decrUseCount;
-(void)enumerateVariantDependenciesOfKind:(NSUInteger)arg0 block:(id)arg1 ;
-(void)freeCache;
-(void)incrUseCount;


@end


#endif