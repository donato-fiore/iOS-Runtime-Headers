// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFPHOTOMEDIACONTENTITEM_H
#define WFPHOTOMEDIACONTENTITEM_H

@class PHAsset;
@protocol WFContentItemClass;


#import "WFGenericFileContentItem.h"
#import "WFFileType.h"

@interface WFPhotoMediaContentItem : WFGenericFileContentItem <WFContentItemClass>



@property (readonly, nonatomic) PHAsset *asset;
@property (nonatomic) NSInteger library; // ivar: _library
@property (retain, nonatomic) WFFileType *preferredFileType; // ivar: _preferredFileType


+(BOOL)hasLibrary;
+(BOOL)isAvailableOnPlatform:(NSInteger)arg0 ;
+(BOOL)supportedTypeMustBeDeterminedByInstance:(id)arg0 ;
+(id)contentCategories;
+(id)countDescription;
+(id)fetchOptionsForLibrary:(NSInteger)arg0 ;
+(id)filterDescription;
+(id)itemWithAssetIdentifier:(id)arg0 ;
+(id)itemWithAssetIdentifier:(id)arg0 assetFile:(id)arg1 ;
+(id)itemWithAssetIdentifier:(id)arg0 library:(NSInteger)arg1 ;
+(id)itemWithAssetIdentifier:(id)arg0 library:(NSInteger)arg1 assetFile:(id)arg2 ;
+(id)itemWithAssetIdentifier:(id)arg0 library:(NSInteger)arg1 assetFile:(id)arg2 nameIfKnown:(id)arg3 ;
+(id)itemWithAssetIdentifier:(id)arg0 library:(NSInteger)arg1 assetFile:(id)arg2 nameIfKnown:(id)arg3 attributionSet:(id)arg4 cachingIdentifier:(id)arg5 ;
+(id)itemWithSerializedItem:(id)arg0 forType:(id)arg1 named:(id)arg2 attributionSet:(id)arg3 cachingIdentifier:(id)arg4 ;
+(id)itemsWithBurstIdentifier:(id)arg0 ;
+(id)outputTypes;
+(id)ownedPasteboardTypes;
+(id)ownedTypes;
+(id)photoAlbums;
+(id)pluralFilterDescription;
+(id)pluralTypeDescription;
+(id)propertyBuilders;
+(id)remoteItemWithAssetIdentifier:(id)arg0 named:(id)arg1 ;
+(id)stringConversionBehavior;
+(id)typeDescription;
+(void)runQuery:(id)arg0 withItems:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)canGenerateRepresentationForType:(id)arg0 ;
-(BOOL)getListAltText:(id)arg0 ;
-(BOOL)getListSubtitle:(id)arg0 ;
// -(BOOL)getListThumbnail:(id)arg0 forSize:(unk)arg1  ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isPhotoType:(id)arg0 ;
-(BOOL)isScreenshot;
-(NSUInteger)hash;
-(id)additionalRepresentationsForSerialization;
-(id)defaultSourceForRepresentation:(id)arg0 ;
-(id)duration;
-(id)fullSizeAssetResourcesInResources:(id)arg0 ;
-(id)generateObjectRepresentationForClass:(Class)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)height;
-(id)imageManager;
-(id)intermediaryTypesForCoercionToItemClass:(Class)arg0 ;
-(id)isBurst;
-(id)isFavorite;
-(id)isHidden;
-(id)isLivePhoto;
-(id)make;
-(id)mediaType;
-(id)metadataIfLocallyAvailable;
-(id)model;
-(id)orientation;
-(id)outputTypes;
-(id)photoTypes;
-(id)preferredAssetResourceForType:(id)arg0 ;
-(id)width;
-(struct CGSize )size;
-(void)copyStateToItem:(id)arg0 ;
// -(void)generateAVAsset:(id)arg0 networkAccessAllowed:(unk)arg1  ;
// -(void)generateFileRepresentation:(id)arg0 options:(unk)arg1 forType:(id)arg2  ;
// -(void)generateObjectRepresentation:(id)arg0 options:(unk)arg1 forClass:(id)arg2  ;
-(void)getFrameRate:(id)arg0 ;
-(void)getMetadata:(id)arg0 ;
-(void)getPreferredFileExtension:(id)arg0 ;
-(void)getPreferredFileSize:(id)arg0 ;
// -(void)getThumbnail:(id)arg0 ofSize:(unk)arg1  ;
-(void)retrieveAssetResource:(id)arg0 withNetworkAccess:(BOOL)arg1 completionHandler:(id)arg2 ;
// -(void)retrieveFileWithImageManager:(id)arg0 forType:(unk)arg1  ;


@end


#endif