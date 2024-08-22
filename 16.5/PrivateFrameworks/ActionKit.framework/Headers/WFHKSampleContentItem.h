// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFHKSAMPLECONTENTITEM_H
#define WFHKSAMPLECONTENTITEM_H

@class WFContentItem, NSDictionary, NSString, WFFileType, WFObjectType;
@protocol WFContentItemClass;



@interface WFHKSampleContentItem : WFContentItem <WFContentItemClass>



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


+(BOOL)hasLibrary;
+(BOOL)supportedTypeMustBeDeterminedByInstance:(id)arg0 ;
+(id)contentCategories;
+(id)countDescription;
+(id)filterDescription;
+(id)itemWithQuantitySample:(id)arg0 ;
+(id)itemWithQuantitySample:(id)arg0 unit:(id)arg1 ;
+(id)itemWithQuantitySamples:(id)arg0 ;
+(id)itemWithQuantitySamples:(id)arg0 unit:(id)arg1 ;
+(id)outputTypes;
+(id)ownedTypes;
+(id)pluralFilterDescription;
+(id)pluralTypeDescription;
+(id)propertyBuilders;
+(id)stringConversionBehavior;
+(id)typeDescription;
+(void)runQuery:(id)arg0 withItems:(id)arg1 permissionRequestor:(id)arg2 completionHandler:(id)arg3 ;
-(BOOL)canGenerateRepresentationForType:(id)arg0 ;
-(BOOL)getListAltText:(id)arg0 ;
-(id)categorySample;
-(id)defaultSourceForRepresentation:(id)arg0 ;
-(id)duration;
-(id)endDate;
-(id)localizedCategorySampleValue;
-(id)quantitySample;
-(id)quantitySampleContainer;
-(id)readableTypeIdentifier;
-(id)sampleValue;
-(id)sourceName;
-(id)startDate;
-(id)unit;
// -(void)generateObjectRepresentations:(id)arg0 options:(unk)arg1 forClass:(id)arg2  ;


@end


#endif