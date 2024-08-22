// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFCONTENTITEM_H
#define WFCONTENTITEM_H

@class NSUUID, NSString, NSExtensionItem, WFImage, WFType, NSItemProvider, NSMutableDictionary;
@protocol WFContentItemClass, WFCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "WFContentAttributionSet.h"
#import "WFRepresentation.h"

@interface WFContentItem : NSObject <WFContentItemClass, WFCopying, NSSecureCoding>



@property (retain, nonatomic) WFContentAttributionSet *attributionSet; // ivar: _attributionSet
@property (readonly, nonatomic) NSUUID *cachingIdentifier; // ivar: _cachingIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSExtensionItem *extensionItem;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) WFImage *icon;
@property (readonly, nonatomic) WFRepresentation *internalRepresentation;
@property (readonly, nonatomic) WFType *internalRepresentationType; // ivar: _internalRepresentationType
@property (readonly, nonatomic) NSItemProvider *itemProvider;
@property (readonly, nonatomic) NSExtensionItem *minimalExtensionItem;
@property (readonly, nonatomic) NSItemProvider *minimalItemProvider;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSUInteger preferredDisplayStyle;
@property (retain, nonatomic) NSMutableDictionary *representationsByType; // ivar: _representationsByType
@property (readonly, nonatomic) NSString *richListTitle;
@property (retain, nonatomic) NSMutableDictionary *subItemsByClass; // ivar: _subItemsByClass
@property (readonly) Class superclass;


+(BOOL)canLowercaseTypeDescription;
+(BOOL)contentItems:(id)arg0 haveContentProperties:(id)arg1 ;
+(BOOL)errorIsBadCoercionError:(id)arg0 ;
+(BOOL)hasFileOutput;
+(BOOL)hasLibrary;
+(BOOL)hasStringOutput;
+(BOOL)isAvailableOnPlatform:(NSInteger)arg0 ;
+(BOOL)isContentItemSubclass;
+(BOOL)supportedItemClassMustBeDeterminedByInstance:(Class)arg0 ;
+(BOOL)supportedTypeMustBeDeterminedByInstance:(id)arg0 ;
+(BOOL)supportedTypesMustBeDeterminedByInstance;
+(BOOL)supportsSecureCoding;
+(id)allProperties;
+(id)allSupportedItemClasses;
+(id)allSupportedTypes;
+(id)badCoercionErrorDefaultResponsibleComponent;
+(id)badCoercionErrorForItemClass:(Class)arg0 ;
+(id)badCoercionErrorForItemClasses:(id)arg0 ;
+(id)badCoercionErrorForObjectClass:(Class)arg0 ;
+(id)badCoercionErrorForType:(id)arg0 ;
+(id)badCoercionErrorForTypeDescription:(id)arg0 toTypeDescription:(id)arg1 ;
+(id)badCoercionErrorWithReasonString:(id)arg0 ;
+(id)contentCategories;
+(id)contentPropertySubstitutor:(SEL)arg0 ;
+(id)countDescription;
+(id)filterDescription;
+(id)filterRepresentationsForAllowedContent:(id)arg0 ;
+(id)itemFromSerializedItem:(id)arg0 withItemClass:(Class)arg1 forType:(id)arg2 nameIfKnown:(id)arg3 sourceName:(id)arg4 attributionSet:(id)arg5 cachingIdentifier:(id)arg6 completionHandler:(id)arg7 ;
+(id)itemWithFile:(id)arg0 ;
+(id)itemWithFile:(id)arg0 attributionSet:(id)arg1 ;
+(id)itemWithFile:(id)arg0 attributionSet:(id)arg1 cachingIdentifier:(id)arg2 ;
+(id)itemWithFile:(id)arg0 origin:(id)arg1 disclosureLevel:(NSUInteger)arg2 ;
+(id)itemWithObject:(id)arg0 ;
+(id)itemWithObject:(id)arg0 attributionSet:(id)arg1 ;
+(id)itemWithObject:(id)arg0 named:(id)arg1 ;
+(id)itemWithObject:(id)arg0 named:(id)arg1 attributionSet:(id)arg2 ;
+(id)itemWithObject:(id)arg0 named:(id)arg1 attributionSet:(id)arg2 cachingIdentifier:(id)arg3 ;
+(id)itemWithObject:(id)arg0 origin:(id)arg1 disclosureLevel:(NSUInteger)arg2 ;
+(id)itemWithObject:(id)arg0 privacyConfiguration:(id)arg1 ;
+(id)itemWithRepresentation:(id)arg0 ;
+(id)itemWithRepresentation:(id)arg0 attributionSet:(id)arg1 ;
+(id)itemWithRepresentation:(id)arg0 attributionSet:(id)arg1 cachingIdentifier:(id)arg2 ;
+(id)itemWithRepresentation:(id)arg0 attributionSet:(id)arg1 includesDefaultAttributionSet:(BOOL)arg2 ;
+(id)itemWithRepresentation:(id)arg0 forType:(id)arg1 ;
+(id)itemWithRepresentation:(id)arg0 forType:(id)arg1 attributionSet:(id)arg2 ;
+(id)itemWithRepresentation:(id)arg0 forType:(id)arg1 attributionSet:(id)arg2 cachingIdentifier:(id)arg3 ;
+(id)itemWithRepresentation:(id)arg0 forType:(id)arg1 attributionSet:(id)arg2 includesDefaultAttributionSet:(BOOL)arg3 ;
+(id)itemWithRepresentation:(id)arg0 forType:(id)arg1 attributionSet:(id)arg2 includesDefaultAttributionSet:(BOOL)arg3 cachingIdentifier:(id)arg4 ;
+(id)itemWithSerializedItem:(id)arg0 forType:(id)arg1 named:(id)arg2 attributionSet:(id)arg3 cachingIdentifier:(id)arg4 ;
+(id)localizedFilterDescription;
+(id)localizedPluralFilterDescription;
+(id)localizedPluralTypeDescription;
+(id)localizedTypeDescription;
+(id)outputTypes;
+(id)ownedPasteboardTypes;
+(id)ownedTypes;
+(id)pasteboardValueClasses;
+(id)pluralFilterDescription;
+(id)pluralTypeDescription;
+(id)populateBadCoercionError:(id)arg0 withResponsibleComponent:(id)arg1 ;
+(id)properties;
+(id)propertyBuilders;
+(id)propertyForName:(id)arg0 ;
+(id)stringConversionBehavior;
+(id)supportedItemClasses;
+(id)supportedItemClassesExcludingInstanceSpecificTypes;
+(id)supportedPropertyForProperty:(id)arg0 ;
+(id)supportedTypes;
+(id)supportedTypesExcludingInstanceSpecificTypes;
+(id)typeDescription;
+(void)getContentItemFromSerializedItem:(id)arg0 sourceName:(id)arg1 completionHandler:(id)arg2 ;
+(void)runQuery:(id)arg0 withItems:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)cachesSupportedTypes;
-(BOOL)canEncodeWithCoder:(id)arg0 ;
-(BOOL)canGenerateIntermediaryRepresentationForItemClass:(Class)arg0 ;
-(BOOL)canGenerateRepresentationForType:(id)arg0 ;
-(BOOL)canPerformCoercion:(id)arg0 ;
-(BOOL)coercionOptions:(id)arg0 allowCoercionsToItemClass:(Class)arg1 ;
-(BOOL)coercionOptions:(id)arg0 allowCoercionsToType:(id)arg1 ;
-(BOOL)getListAltText:(id)arg0 ;
-(BOOL)getListSubtitle:(id)arg0 ;
// -(BOOL)getListThumbnail:(id)arg0 forSize:(unk)arg1  ;
-(BOOL)hasStringOutput;
-(BOOL)includesFileRepresentationInSerializedItem;
-(BOOL)isCoercibleToItemClass:(Class)arg0 ;
-(BOOL)isCoercibleToItemClasses:(id)arg0 ;
-(Class)classForCopying;
-(id)_getRepresentationsForType:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)additionalRepresentationsForSerialization;
-(id)allSupportedItemClasses;
-(id)allSupportedTypes;
-(id)allowedClassesForDecodingInternalRepresentations;
-(id)changeTransaction;
-(id)contentItemByMergingAttributionSet:(id)arg0 ;
-(id)copyWithName:(id)arg0 ;
-(id)copyWithName:(id)arg0 zone:(struct _NSZone *)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)defaultSourceForRepresentation:(id)arg0 ;
-(id)extensionItemWithItemProvider:(id)arg0 ;
-(id)fileRepresentationForType:(id)arg0 ;
-(id)fileRepresentationsForType:(id)arg0 ;
-(id)generateFileRepresentationForType:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)generateFileRepresentationsForType:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)generateFirstLevelSubItemsForItemClass:(Class)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)generateObjectRepresentationForClass:(Class)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)generateObjectRepresentationsForClass:(Class)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)generateRepresentationsForType:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)generateSubItemsForItemClass:(Class)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)getRepresentationsForType:(id)arg0 error:(*id)arg1 ;
-(id)getRepresentationsForType:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRepresentation:(id)arg0 forType:(id)arg1 attributionSet:(id)arg2 ;
-(id)initWithRepresentation:(id)arg0 forType:(id)arg1 attributionSet:(id)arg2 cachingIdentifier:(id)arg3 ;
-(id)initWithRepresentation:(id)arg0 forType:(id)arg1 attributionSet:(id)arg2 includesDefaultAttributionSet:(BOOL)arg3 ;
-(id)initWithRepresentation:(id)arg0 forType:(id)arg1 attributionSet:(id)arg2 includesDefaultAttributionSet:(BOOL)arg3 cachingIdentifier:(id)arg4 ;
-(id)initWithRepresentationsByType:(id)arg0 forType:(id)arg1 subItemsByClass:(id)arg2 attributionSet:(id)arg3 includesDefaultAttributionSet:(BOOL)arg4 cachingIdentifier:(id)arg5 ;
-(id)intermediaryTypesForCoercionToItemClass:(Class)arg0 ;
-(id)internalName;
-(id)internalRepresentationForCopyingWithName:(id)arg0 ;
-(id)itemProviderForTypes:(id)arg0 ;
-(id)itemsByCoercingToItemClass:(Class)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)metadataForSerialization;
-(id)nativePasteboardTypeForObjectRepresentationOfClass:(Class)arg0 ;
-(id)objectForClass:(Class)arg0 ;
-(id)objectRepresentationForClass:(Class)arg0 ;
-(id)objectRepresentationsForClass:(Class)arg0 ;
-(id)objectsForClass:(Class)arg0 ;
-(id)outputTypes;
-(id)ownedTypes;
-(id)preferredFileType;
-(id)preferredObjectType;
-(id)preferredTypeOfClass:(Class)arg0 ;
-(id)representationForType:(id)arg0 ;
-(id)representationsForType:(id)arg0 ;
-(id)subItemForClass:(Class)arg0 ;
-(id)subItemsForClass:(Class)arg0 ;
-(id)supportedItemClasses;
-(id)supportedTypes;
-(id)typeForCoercionRequest:(id)arg0 ;
-(void)coerceToItemClass:(Class)arg0 completionHandler:(id)arg1 ;
-(void)coerceToItemClasses:(id)arg0 completionHandler:(id)arg1 ;
-(void)coerceToItemClasses:(id)arg0 options:(id)arg1 completionHandler:(id)arg2 ;
-(void)copyStateToItem:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)forceCoerceToItemClasses:(id)arg0 options:(id)arg1 completionHandler:(id)arg2 ;
// -(void)generateFileRepresentation:(id)arg0 options:(unk)arg1 forType:(id)arg2  ;
// -(void)generateFileRepresentations:(id)arg0 options:(unk)arg1 forType:(id)arg2  ;
-(void)generateFirstLevelSubItemsForItemClass:(Class)arg0 options:(id)arg1 completionHandler:(id)arg2 ;
// -(void)generateObjectRepresentation:(id)arg0 options:(unk)arg1 forClass:(id)arg2  ;
// -(void)generateObjectRepresentations:(id)arg0 options:(unk)arg1 forClass:(id)arg2  ;
-(void)generateRepresentationsForType:(id)arg0 options:(id)arg1 completionHandler:(id)arg2 ;
-(void)generateSubItemsForItemClasses:(id)arg0 options:(id)arg1 completionHandler:(id)arg2 ;
// -(void)getFileRepresentation:(id)arg0 forType:(unk)arg1  ;
// -(void)getFileRepresentations:(id)arg0 forType:(unk)arg1  ;
-(void)getFileRepresentationsForSerialization:(id)arg0 ;
// -(void)getObjectRepresentation:(id)arg0 forClass:(unk)arg1  ;
// -(void)getObjectRepresentations:(id)arg0 forClass:(unk)arg1  ;
-(void)getPreferredFileExtension:(id)arg0 ;
-(void)getPreferredFileSize:(id)arg0 ;
-(void)getRepresentationsForType:(id)arg0 options:(id)arg1 completionHandler:(id)arg2 ;
-(void)getSerializedItem:(id)arg0 ;
// -(void)getTitleWithAvailabilityBlock:(id)arg0 completionHandler:(unk)arg1  ;
-(void)performCoercion:(id)arg0 ;
-(void)setFileRepresentations:(id)arg0 forType:(id)arg1 ;
-(void)setObjectRepresentations:(id)arg0 forClass:(Class)arg1 ;
-(void)setRepresentations:(id)arg0 forType:(id)arg1 ;
-(void)setSubItems:(id)arg0 forClass:(Class)arg1 ;


@end


#endif