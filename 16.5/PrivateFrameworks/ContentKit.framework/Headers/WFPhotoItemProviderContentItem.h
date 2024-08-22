// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFPHOTOITEMPROVIDERCONTENTITEM_H
#define WFPHOTOITEMPROVIDERCONTENTITEM_H

@class NSDictionary, NSString, WFFileType;
@protocol WFContentItemClass;


#import "WFNSItemProviderContentItem.h"
#import "WFObjectType.h"

@interface WFPhotoItemProviderContentItem : WFNSItemProviderContentItem <WFContentItemClass>



@property (readonly, nonatomic) NSDictionary *additionalRepresentationsForSerialization;
@property (readonly, nonatomic) BOOL cachesSupportedTypes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasStringOutput;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL includesFileRepresentationInSerializedItem;
@property (readonly, nonatomic) NSDictionary *metadataForSerialization;
@property (readonly, nonatomic) WFFileType *preferredFileType;
@property (readonly, nonatomic) WFObjectType *preferredObjectType;
@property (readonly) Class superclass;


+(id)contentCategories;
+(id)countDescription;
+(id)itemWithItemProviderItem:(id)arg0 photoMediaFileRepresentation:(id)arg1 assetIdentifier:(id)arg2 ;
+(id)outputTypes;
+(id)pluralTypeDescription;
+(id)typeDescription;
-(id)defaultSourceForRepresentation:(id)arg0 ;
-(id)outputTypes;


@end


#endif