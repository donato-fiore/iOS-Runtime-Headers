// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFSHAZAMMEDIACONTENTITEM_H
#define WFSHAZAMMEDIACONTENTITEM_H

@class WFContentItem, NSDictionary, NSString, WFFileType, WFObjectType;
@protocol WFContentItemClass;


#import "WFShazamMedia.h"

@interface WFShazamMediaContentItem : WFContentItem <WFContentItemClass>



@property (readonly, nonatomic) NSDictionary *additionalRepresentationsForSerialization;
@property (readonly, nonatomic) BOOL cachesSupportedTypes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasStringOutput;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL includesFileRepresentationInSerializedItem;
@property (readonly, nonatomic) WFShazamMedia *media;
@property (readonly, nonatomic) NSDictionary *metadataForSerialization;
@property (readonly, nonatomic) WFFileType *preferredFileType;
@property (readonly, nonatomic) WFObjectType *preferredObjectType;
@property (readonly) Class superclass;


+(BOOL)canLowercaseTypeDescription;
+(id)contentCategories;
+(id)countDescription;
+(id)outputTypes;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)propertyBuilders;
+(id)typeDescription;
-(id)appleMusicID;
-(id)appleMusicURL;
-(id)artist;
-(id)artworkURL;
-(id)isExplicit;
-(id)lyricsSnippet;
-(id)lyricsSnippetSynced;
-(id)shazamURL;
-(id)title;
-(id)videoURL;
// -(void)generateFileRepresentation:(id)arg0 options:(unk)arg1 forType:(id)arg2  ;
// -(void)generateObjectRepresentation:(id)arg0 options:(unk)arg1 forClass:(id)arg2  ;
-(void)getArtworkDataWithURL:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif