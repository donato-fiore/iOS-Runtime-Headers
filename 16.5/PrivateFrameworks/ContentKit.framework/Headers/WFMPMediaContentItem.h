// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFMPMEDIACONTENTITEM_H
#define WFMPMEDIACONTENTITEM_H

@class NSDictionary, NSString, MPMediaItem, WFFileType;
@protocol WFContentItemClass;


#import "WFGenericFileContentItem.h"
#import "WFObjectType.h"

@interface WFMPMediaContentItem : WFGenericFileContentItem <WFContentItemClass>



@property (readonly, nonatomic) NSDictionary *additionalRepresentationsForSerialization;
@property (readonly, nonatomic) NSString *albumTitle;
@property (readonly, nonatomic) NSString *artist;
@property (readonly, nonatomic) BOOL cachesSupportedTypes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasStringOutput;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL includesFileRepresentationInSerializedItem;
@property (readonly, nonatomic) MPMediaItem *mediaItem;
@property (readonly, nonatomic) NSDictionary *metadataForSerialization;
@property (readonly, nonatomic) WFFileType *preferredFileType;
@property (readonly, nonatomic) WFObjectType *preferredObjectType;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title;


+(BOOL)hasLibrary;
+(BOOL)isAvailableOnPlatform:(NSInteger)arg0 ;
+(id)contentCategories;
+(id)countDescription;
+(id)filterDescription;
+(id)outputTypes;
+(id)ownedTypes;
+(id)pluralFilterDescription;
+(id)pluralTypeDescription;
+(id)propertyBuilders;
+(id)stringConversionBehavior;
+(id)typeDescription;
+(void)runQuery:(id)arg0 withItems:(id)arg1 permissionRequestor:(id)arg2 completionHandler:(id)arg3 ;
-(BOOL)getListAltText:(id)arg0 ;
-(BOOL)getListSubtitle:(id)arg0 ;
// -(BOOL)getListThumbnail:(id)arg0 forSize:(unk)arg1  ;
-(id)assetURL;
-(id)generateObjectRepresentationForClass:(Class)arg0 options:(id)arg1 error:(*id)arg2 ;
-(void)getPreferredFileSize:(id)arg0 ;


@end


#endif