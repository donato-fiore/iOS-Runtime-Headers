// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUISIDEBANDMEDIAITEM_H
#define VUISIDEBANDMEDIAITEM_H

@protocol VUISidebandMediaEntityImageLoadParamsCreating;


#import "VUIMediaItem.h"
#import "VUISidebandMediaItemAssetController.h"
#import "VUIVideoManagedObject.h"

@interface VUISidebandMediaItem : VUIMediaItem <VUISidebandMediaEntityImageLoadParamsCreating>



@property (retain, nonatomic) VUISidebandMediaItemAssetController *assetController; // ivar: _assetController
@property (retain, nonatomic) VUIVideoManagedObject *videoManagedObject; // ivar: _videoManagedObject


-(BOOL)allowsManualDownloadRenewal;
-(BOOL)markedAsDeleted;
-(BOOL)renewsOfflineKeysAutomatically;
-(id)HLSColorCapability;
-(id)addedDate;
-(id)availabilityEndDate;
-(id)brandID;
-(id)brandName;
-(id)canonicalID;
-(id)colorCapability;
-(id)downloadExpirationDate;
-(id)duration;
-(id)episodeIndexInSeries;
-(id)episodeNumber;
-(id)fractionalEpisodeNumber;
-(id)genreTitle;
-(id)imageLoadParamsWithImageType:(NSUInteger)arg0 ;
-(id)initWithMediaLibrary:(id)arg0 videoManagedObject:(id)arg1 requestedProperties:(id)arg2 ;
-(id)isLocal;
-(id)isPlayable;
-(id)releaseDate;
-(id)seasonCanonicalID;
-(id)seasonIdentifier;
-(id)seasonNumber;
-(id)seasonTitle;
-(id)showCanonicalID;
-(id)showIdentifier;
-(id)showTitle;
-(id)storeID;
-(id)title;
-(void)_videoManagedObjectPlaybackExpirationWillChange:(id)arg0 ;
-(void)dealloc;


@end


#endif