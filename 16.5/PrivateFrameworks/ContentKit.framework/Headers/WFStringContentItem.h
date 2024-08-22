// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFSTRINGCONTENTITEM_H
#define WFSTRINGCONTENTITEM_H

@class NSDictionary, NSString, WFFileType;
@protocol WFContentItemClass;


#import "WFGenericFileContentItem.h"
#import "WFDataDetectorResults.h"
#import "WFObjectType.h"

@interface WFStringContentItem : WFGenericFileContentItem <WFContentItemClass>



@property (readonly, nonatomic) NSDictionary *additionalRepresentationsForSerialization;
@property (readonly, nonatomic) BOOL cachesSupportedTypes;
@property (retain, nonatomic) WFDataDetectorResults *dataDetectorResults; // ivar: _dataDetectorResults
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasStringOutput;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL includesFileRepresentationInSerializedItem;
@property (readonly, nonatomic) NSDictionary *metadataForSerialization;
@property (readonly, nonatomic) WFFileType *preferredFileType;
@property (readonly, nonatomic) WFObjectType *preferredObjectType;
@property (readonly, nonatomic) NSString *string;
@property (readonly) Class superclass;


+(id)coercions;
+(id)contentCategories;
+(id)countDescription;
+(id)dictionaryCoercionHandler;
+(id)itemWithSerializedItem:(id)arg0 forType:(id)arg1 named:(id)arg2 attributionSet:(id)arg3 cachingIdentifier:(id)arg4 ;
+(id)outputTypes;
+(id)ownedTypes;
+(id)pdfCoercionHandler;
+(id)pluralTypeDescription;
+(id)printFormatterCoercionHandler;
+(id)textFileCoercionHandler;
+(id)typeDescription;
-(BOOL)isContent;


@end


#endif