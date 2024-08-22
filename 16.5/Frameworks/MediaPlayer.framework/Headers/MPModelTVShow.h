// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPMODELTVSHOW_H
#define MPMODELTVSHOW_H

@class NSString;


#import "MPModelObject.h"
#import "MPModelTVShowCreator.h"

@interface MPModelTVShow : MPModelObject

@property (copy, nonatomic) id *artworkCatalogBlock;
@property (copy, nonatomic) MPModelTVShowCreator *creator;
@property (copy, nonatomic) NSString *editorNotes;
@property (copy, nonatomic) id *editorialArtworkCatalogBlock;
@property (nonatomic) NSInteger episodesCount;
@property (copy, nonatomic) NSString *shortEditorNotes;
@property (copy, nonatomic) NSString *shortTitle;
@property (copy, nonatomic) NSString *tagline;
@property (copy, nonatomic) NSString *title;


+(NSInteger)genericObjectType;
+(id)kindWithSeasonKind:(id)arg0 ;
-(id)artworkCatalog;
-(id)editorialArtworkCatalog;
-(id)humanDescription;


@end


#endif