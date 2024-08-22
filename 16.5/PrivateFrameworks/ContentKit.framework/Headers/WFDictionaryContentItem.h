// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFDICTIONARYCONTENTITEM_H
#define WFDICTIONARYCONTENTITEM_H

@class NSDictionary, NSString, WFFileType;
@protocol WFContentItemClass;


#import "WFGenericFileContentItem.h"
#import "WFObjectType.h"

@interface WFDictionaryContentItem : WFGenericFileContentItem <WFContentItemClass>



@property (readonly, nonatomic) NSDictionary *additionalRepresentationsForSerialization;
@property (readonly, nonatomic) BOOL cachesSupportedTypes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionary;
@property (readonly, nonatomic) BOOL hasStringOutput;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL includesFileRepresentationInSerializedItem;
@property (readonly, nonatomic) NSDictionary *metadataForSerialization;
@property (readonly, nonatomic) WFFileType *preferredFileType;
@property (readonly, nonatomic) WFObjectType *preferredObjectType;
@property (readonly) Class superclass;


+(id)contentCategories;
+(id)countDescription;
+(id)itemsWithJSONFileRepresentation:(id)arg0 attributionSet:(id)arg1 ;
+(id)itemsWithPlistFileRepresentation:(id)arg0 attributionSet:(id)arg1 ;
+(id)itemsWithPropertyListObject:(id)arg0 preferredDictionaryType:(id)arg1 attributionSet:(id)arg2 ;
+(id)itemsWithPropertyListObject:(id)arg0 preferredDictionaryType:(id)arg1 topLevelName:(id)arg2 attributionSet:(id)arg3 ;
+(id)outputTypes;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)propertyBuilders;
+(id)typeDescription;
-(id)allowedClassesForDecodingInternalRepresentations;
-(id)generateFileRepresentationForType:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)generateObjectRepresentationForClass:(Class)arg0 options:(id)arg1 error:(*id)arg2 ;


@end


#endif