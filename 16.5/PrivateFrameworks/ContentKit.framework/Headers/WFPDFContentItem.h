// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFPDFCONTENTITEM_H
#define WFPDFCONTENTITEM_H

@class NSDictionary, NSString, WFFileType;
@protocol WFContentItemClass;


#import "WFGenericFileContentItem.h"
#import "WFObjectType.h"

@interface WFPDFContentItem : WFGenericFileContentItem <WFContentItemClass>



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
+(id)itemWithPrintFormatters:(id)arg0 names:(id)arg1 ;
+(id)outputTypes;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)typeDescription;
+(void)getPDFFromPrintFormatters:(id)arg0 nameIfKnown:(id)arg1 matchingInputSize:(BOOL)arg2 withMargin:(BOOL)arg3 startingAtPage:(NSInteger)arg4 endingAtPage:(NSInteger)arg5 completionHandler:(id)arg6 ;
-(void)createImageWithFileType:(id)arg0 colorspace:(struct CGColorSpace *)arg1 resolution:(CGFloat)arg2 completion:(id)arg3 ;
-(void)enumeratePagesInDocument:(id)arg0 block:(id)arg1 ;
// -(void)generateFileRepresentations:(id)arg0 options:(unk)arg1 forType:(id)arg2  ;
// -(void)generateObjectRepresentations:(id)arg0 options:(unk)arg1 forClass:(id)arg2  ;
// -(void)getPDF:(id)arg0 matchingInputSize:(unk)arg1 withMargin:(BOOL)arg2 startingAtPage:(BOOL)arg3 endingAtPage:(NSInteger)arg4  ;


@end


#endif