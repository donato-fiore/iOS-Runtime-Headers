// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFITUNESOBJECTCONTENTITEM_H
#define WFITUNESOBJECTCONTENTITEM_H

@class WFContentItem, NSString;
@protocol WFURLCoercion;


#import "WFiTunesObject.h"

@interface WFiTunesObjectContentItem : WFContentItem <WFURLCoercion>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) WFiTunesObject *object;
@property (readonly) Class superclass;


+(BOOL)canLowercaseTypeDescription;
+(BOOL)parseiTunesURL:(id)arg0 itemIdentifier:(*id)arg1 countryCode:(*id)arg2 ;
+(BOOL)supportedTypeMustBeDeterminedByInstance:(id)arg0 ;
+(BOOL)urlItem_canCoerceFromURL:(id)arg0 ;
+(id)contentCategories;
+(id)countDescription;
+(id)outputTypes;
+(id)pluralTypeDescription;
+(id)propertyBuilders;
+(id)typeDescription;
+(id)urlItem_outputClasses;
+(id)urlItem_sharingItemClassesByBundleIdentifier;
// +(void)urlItem_generateObjectRepresentations:(id)arg0 fromURL:(unk)arg1 forClass:(id)arg2  ;
// +(void)urlItem_generateObjectRepresentations:(id)arg0 fromiTunesURL:(unk)arg1 forClass:(id)arg2  ;
-(BOOL)canGenerateRepresentationForType:(id)arg0 ;
-(id)generateObjectRepresentationForClass:(Class)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)possibleArtworkURLs;
-(id)preferredFileType;
// -(void)generateFileRepresentation:(id)arg0 options:(unk)arg1 forType:(id)arg2  ;
-(void)getArtworkDataWithURLs:(id)arg0 completionHandler:(id)arg1 ;
-(void)getArtworkForSize:(struct CGSize )arg0 completionHandler:(id)arg1 ;
-(void)getPreferredArtworkURL:(id)arg0 ;


@end


#endif