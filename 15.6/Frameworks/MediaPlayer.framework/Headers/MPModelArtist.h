// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPMODELARTIST_H
#define MPMODELARTIST_H

@class NSDate;


#import "MPModelPerson.h"
#import "MPModelGenre.h"

@interface MPModelArtist : MPModelPerson

@property (nonatomic) NSInteger albumCount;
@property (copy, nonatomic) id *artworkCatalogBlock;
@property (nonatomic, getter=isClassicalExperienceAvailable) BOOL classicalExperienceAvailable;
@property (copy, nonatomic) id *editorialArtworkCatalogBlock;
@property (copy, nonatomic) MPModelGenre *genre;
@property (nonatomic) BOOL hasBiography;
@property (copy, nonatomic) NSDate *libraryAddedDate;
@property (nonatomic) NSInteger songCount;


+(NSInteger)genericObjectType;
+(id)__classicalExperienceAvailable_KEY;
+(id)kindWithAlbumKind:(id)arg0 ;
-(id)artworkCatalog;
-(id)editorialArtworkCatalog;


@end


#endif