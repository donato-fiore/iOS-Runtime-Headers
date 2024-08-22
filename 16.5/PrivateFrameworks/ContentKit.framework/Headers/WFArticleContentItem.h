// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFARTICLECONTENTITEM_H
#define WFARTICLECONTENTITEM_H

@class NSDictionary, NSString, WFFileType;
@protocol WFContentItemClass;


#import "WFContentItem.h"
#import "WFArticle.h"
#import "WFObjectType.h"

@interface WFArticleContentItem : WFContentItem <WFContentItemClass>



@property (readonly, nonatomic) NSDictionary *additionalRepresentationsForSerialization;
@property (readonly, nonatomic) WFArticle *article;
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


+(id)URLCoercionHandler;
+(id)coercions;
+(id)contentCategories;
+(id)countDescription;
+(id)dateCoercionHandler;
+(id)fileWithHTML:(id)arg0 named:(id)arg1 ;
+(id)htmlCoercionHandler;
+(id)imageCoercionHandler;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)propertyBuilders;
+(id)stringCoercionHandler;
+(id)stringConversionBehavior;
+(id)typeDescription;
-(BOOL)getListSubtitle:(id)arg0 ;
-(id)defaultSourceForRepresentation:(id)arg0 ;
-(id)htmlRepresentation;


@end


#endif