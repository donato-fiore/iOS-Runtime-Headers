// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFSHAZAMMEDIACONTENTITEM_H
#define WFSHAZAMMEDIACONTENTITEM_H

@class WFContentItem;
@protocol WFContentItemClass;


#import "WFShazamMedia.h"

@interface WFShazamMediaContentItem : WFContentItem <WFContentItemClass>



@property (readonly, nonatomic) WFShazamMedia *media;


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
-(id)preferredFileType;
-(id)shazamURL;
-(id)title;
-(id)videoURL;
// -(void)generateFileRepresentation:(id)arg0 options:(unk)arg1 forType:(id)arg2  ;
// -(void)generateObjectRepresentation:(id)arg0 options:(unk)arg1 forClass:(id)arg2  ;
-(void)getArtworkDataWithURL:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif