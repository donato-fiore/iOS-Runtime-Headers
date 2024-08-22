// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFDISPLAYCONTENTITEM_H
#define WFDISPLAYCONTENTITEM_H

@class NSDictionary, NSString, WFFileType;
@protocol WFContentItemClass;


#import "WFContentItem.h"
#import "WFDisplay.h"
#import "WFObjectType.h"

@interface WFDisplayContentItem : WFContentItem <WFContentItemClass>



@property (readonly, nonatomic) NSDictionary *additionalRepresentationsForSerialization;
@property (readonly, nonatomic) BOOL cachesSupportedTypes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) WFDisplay *display;
@property (readonly, nonatomic) BOOL hasStringOutput;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL includesFileRepresentationInSerializedItem;
@property (readonly, nonatomic) NSDictionary *metadataForSerialization;
@property (readonly, nonatomic) WFFileType *preferredFileType;
@property (readonly, nonatomic) WFObjectType *preferredObjectType;
@property (readonly) Class superclass;


+(BOOL)hasLibrary;
+(id)contentCategories;
+(id)countDescription;
+(id)outputTypes;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)propertyBuilders;
+(id)stringConversionBehavior;
+(id)typeDescription;
+(void)runQuery:(id)arg0 withItems:(id)arg1 permissionRequestor:(id)arg2 completionHandler:(id)arg3 ;
-(id)defaultSourceForRepresentation:(id)arg0 ;
-(id)generateObjectRepresentationsForClass:(Class)arg0 options:(id)arg1 error:(*id)arg2 ;


@end


#endif