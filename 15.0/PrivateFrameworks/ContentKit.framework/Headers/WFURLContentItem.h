// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFURLCONTENTITEM_H
#define WFURLCONTENTITEM_H

@class NSURL;
@protocol WFContentItemClass;


#import "WFContentItem.h"

@interface WFURLContentItem : WFContentItem <WFContentItemClass>



@property (readonly, nonatomic) NSURL *URL;


+(BOOL)supportedTypeMustBeDeterminedByInstance:(id)arg0 ;
+(id)attributionSetContentOfURL:(id)arg0 ;
+(id)contentCategories;
+(id)countDescription;
+(id)filterRepresentationsForAllowedContent:(id)arg0 ;
+(id)itemWithSerializedItem:(id)arg0 forType:(id)arg1 named:(id)arg2 attributionSet:(id)arg3 cachingIdentifier:(id)arg4 ;
+(id)outputTypes;
+(id)ownedPasteboardTypes;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)typeDescription;
+(void)registerURLCoercion:(Class)arg0 ;
-(BOOL)canGenerateRepresentationForType:(id)arg0 ;
-(BOOL)includesFileRepresentationInSerializedItem;
-(id)additionalRepresentationsForSerialization;
-(id)description;
-(id)intermediaryTypesForCoercionToItemClass:(Class)arg0 ;
-(id)outputTypes;
// -(void)generateFileRepresentation:(id)arg0 options:(unk)arg1 forType:(id)arg2  ;
-(void)generateObjectRepresentationForPrintHandler:(id)arg0 ;
// -(void)generateObjectRepresentations:(id)arg0 options:(unk)arg1 forClass:(id)arg2  ;
-(void)getContentsOfURLWithHandler:(id)arg0 ;
// -(void)getContentsWithRequest:(id)arg0 cacheResult:(BOOL)arg1 expectedByteCountHandler:(id)arg2 writtenByteCountHandler:(unk)arg3 completionHandler:(id)arg4  ;
// -(void)getContentsWithRequest:(id)arg0 expectedByteCountHandler:(id)arg1 writtenByteCountHandler:(unk)arg2 completionHandler:(id)arg3  ;
-(void)getHeadersWithCompletionHandler:(id)arg0 ;
-(void)getPDFWithOptions:(id)arg0 completionHandler:(id)arg1 ;
-(void)getPreferredFileExtension:(id)arg0 ;
-(void)getPreferredFileSize:(id)arg0 ;
-(void)getTitle:(id)arg0 ;


@end


#endif