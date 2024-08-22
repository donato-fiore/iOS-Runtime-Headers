// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIFAMILYSHARINGMEDIACOLLECTION_H
#define VUIFAMILYSHARINGMEDIACOLLECTION_H

@class NSString, NSArray;


#import "VUIMediaCollection.h"
#import "VUIFamilySharingEntity.h"

@interface VUIFamilySharingMediaCollection : VUIMediaCollection

@property (retain, nonatomic) NSString *amsSeasonIdentifier; // ivar: _amsSeasonIdentifier
@property (retain, nonatomic) NSString *amsShowIdentifier; // ivar: _amsShowIdentifier
@property (retain, nonatomic) NSString *artworkURL; // ivar: _artworkURL
@property (retain, nonatomic) VUIFamilySharingEntity *entity; // ivar: _entity
@property (retain, nonatomic) NSArray *seasonNumbers; // ivar: _seasonNumbers


-(id)contentDescription;
-(id)contentRating;
-(id)duration;
-(id)genreTitle;
-(id)initWithAMSEntity:(id)arg0 requestedProperties:(id)arg1 mediaEntityType:(id)arg2 ;
-(id)releaseDate;
-(id)releaseYear;
-(id)seasonCount;
-(id)seasonNumber;
-(id)showTitle;
-(id)title;


@end


#endif