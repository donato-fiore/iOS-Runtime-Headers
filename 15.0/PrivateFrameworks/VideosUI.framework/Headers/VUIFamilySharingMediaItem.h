// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIFAMILYSHARINGMEDIAITEM_H
#define VUIFAMILYSHARINGMEDIAITEM_H

@class NSString;


#import "VUIMediaItem.h"
#import "VUIFamilySharingMediaItemAssetController.h"
#import "VUIFamilySharingEntity.h"
#import "VUIExtrasInfo.h"
#import "VUIFamilySharingRelationships.h"
#import "VUIVideosPlayable.h"

@interface VUIFamilySharingMediaItem : VUIMediaItem

@property (retain, nonatomic) NSString *artworkURL; // ivar: _artworkURL
@property (retain, nonatomic) VUIFamilySharingMediaItemAssetController *assetController; // ivar: _assetController
@property (retain, nonatomic) NSString *buyParams; // ivar: _buyParams
@property (retain, nonatomic) VUIFamilySharingEntity *entity; // ivar: _entity
@property (retain, nonatomic) VUIExtrasInfo *iTunesExtrasInfo; // ivar: _iTunesExtrasInfo
@property (retain, nonatomic) NSString *personalizedBuyParams; // ivar: _personalizedBuyParams
@property (retain, nonatomic) NSString *previewArtworkURL; // ivar: _previewArtworkURL
@property (retain, nonatomic) VUIFamilySharingRelationships *relationships; // ivar: _relationships
@property (retain, nonatomic) VUIVideosPlayable *videosPlayable; // ivar: _videosPlayable


-(id)_bestOffer;
-(id)_bestRedownloadOffer;
-(id)_itunesExtrasDictionary;
-(id)bookmark;
-(id)contentDescription;
-(id)contentRating;
-(id)duration;
-(id)episodeNumber;
-(id)extrasURL;
-(id)genreTitle;
-(id)initWithAMSEntity:(id)arg0 requestedProperties:(id)arg1 ;
-(id)releaseDate;
-(id)releaseYear;
-(id)seasonCanonicalID;
-(id)seasonIdentifier;
-(id)seasonNumber;
-(id)showCanonicalID;
-(id)showIdentifier;
-(id)showTitle;
-(id)storeID;
-(id)title;


@end


#endif