// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef USKSCENE_H
#define USKSCENE_H

@class NSURL;


#import "USKObject.h"
#import "USKNode.h"

@interface USKScene : USKObject {
    TfRefPtr<pxrInternal_v0_20__pxrReserved__usdkit__::UsdStage> _usdStage;
    NSURL *_fileURL;
}


@property (readonly, nonatomic) USKNode *rootNode;


+(id)newSceneWithURL:(id)arg0 ;
+(id)newSceneWithURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)exportToURL:(id)arg0 ;
-(BOOL)setCustomMetadata:(id)arg0 value:(id)arg1 ;
-(BOOL)setDictionaryMetadataWithKey:(id)arg0 dictionaryKey:(id)arg1 value:(id)arg2 ;
-(BOOL)setMetadataWithKey:(id)arg0 value:(id)arg1 ;
-(id)customMetadataWithKey:(id)arg0 ;
-(id)dictionaryMetadataWithKey:(id)arg0 dictionaryKey:(id)arg1 ;
-(id)init;
-(id)initSceneFromURL:(id)arg0 ;
-(id)initSceneFromURL:(id)arg0 error:(*id)arg1 ;
-(id)initWithUsdStage:(struct TfRefPtr<pxrInternal_v0_20__pxrReserved__usdkit__::UsdStage> )arg0 fileURL:(id)arg1 ;
-(id)loadedNodeIterator;
-(id)metadata;
-(id)metadataWithKey:(id)arg0 ;
-(id)newNodeAtPath:(id)arg0 type:(id)arg1 ;
-(id)newNodeAtPath:(id)arg0 type:(id)arg1 specifier:(id)arg2 ;
-(id)nodeAtPath:(id)arg0 ;
-(id)nodeIterator;
-(id)objectAtPath:(id)arg0 ;
-(id)propertyAtPath:(id)arg0 ;
-(id)subLayerOffsets;
-(id)subLayerPaths;
-(struct TfRefPtr<pxrInternal_v0_20__pxrReserved__usdkit__::UsdStage> )usdStage;
-(void)addSubLayerWithPath:(id)arg0 ;
-(void)addSubLayerWithPath:(id)arg0 offset:(id)arg1 ;
-(void)dealloc;
-(void)dumpUSDA;
-(void)save;
-(void)saveAndCreateARKitUSDZPackageWithURL:(id)arg0 ;
-(void)saveAndCreateUSDZPackageWithURL:(id)arg0 ;


@end


#endif