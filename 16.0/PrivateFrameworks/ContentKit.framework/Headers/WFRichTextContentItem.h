// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFRICHTEXTCONTENTITEM_H
#define WFRICHTEXTCONTENTITEM_H

@class NSString;
@protocol WFContentItemClass;


#import "WFGenericFileContentItem.h"

@interface WFRichTextContentItem : WFGenericFileContentItem <WFContentItemClass>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportedTypeMustBeDeterminedByInstance:(id)arg0 ;
+(BOOL)typeRequiresMainThread:(id)arg0 ;
+(id)attributedStringFromHTMLFile:(id)arg0 options:(id)arg1 documentAttributes:(*id)arg2 error:(*id)arg3 ;
+(id)attributesDictionaryForType:(id)arg0 ;
+(id)contentCategories;
+(id)countDescription;
+(id)documentTypeForType:(id)arg0 ;
+(id)htmlFooter;
+(id)htmlHeader;
+(id)normalizedHTMLDocumentFromHTML:(id)arg0 ;
+(id)normalizedHTMLDocumentFromHTMLData:(id)arg0 ;
+(id)outputTypes;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)stringConversionBehavior;
+(id)typeDescription;
// +(void)loadAttributedStringInWebViewFromHTMLFile:(id)arg0 handler:(id)arg1 attributedStringOptions:(unk)arg2 documentAttributes:(id)arg3 name:(*id)arg4 coercionOptions:(id)arg5  ;
-(BOOL)canGenerateRepresentationForType:(id)arg0 ;
-(BOOL)isContent;
-(id)generateFileRepresentationForType:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)preferredFileType;
// -(void)generateAttributedString:(id)arg0 fromFile:(unk)arg1 forClass:(id)arg2 coercionOptions:(Class)arg3  ;
// -(void)generateDataRepresentation:(id)arg0 fromAttributedString:(unk)arg1 forType:(id)arg2  ;
// -(void)generateFileRepresentations:(id)arg0 options:(unk)arg1 forType:(id)arg2  ;
// -(void)generateObjectRepresentations:(id)arg0 options:(unk)arg1 forClass:(id)arg2  ;
// -(void)generateRTFDRepresentation:(id)arg0 fromAttributedString:(unk)arg1 forType:(id)arg2  ;
-(void)getFileRepresentationsForSerialization:(id)arg0 ;
-(void)getPDFFromResource:(id)arg0 includeMargin:(BOOL)arg1 options:(id)arg2 handler:(id)arg3 ;


@end


#endif