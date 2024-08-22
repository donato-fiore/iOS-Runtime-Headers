// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMSNOWPLAYINGINFO_H
#define CMSNOWPLAYINGINFO_H

@class NSString;
@protocol CMSCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CMSNowPlayingInfo : NSObject <CMSCoding, NSCopying>



@property (copy, nonatomic) NSString *albumName; // ivar: _albumName
@property (copy, nonatomic) NSString *applicationBundleID; // ivar: _applicationBundleID
@property (copy, nonatomic) NSString *artistName; // ivar: _artistName
@property (copy, nonatomic) NSString *artworkURLString; // ivar: _artworkURLString
@property (copy, nonatomic) NSString *collectionIdentifier; // ivar: _collectionIdentifier
@property (copy, nonatomic) NSString *composerName; // ivar: _composerName
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) float defaultPlaybackRate; // ivar: _defaultPlaybackRate
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger discNumber; // ivar: _discNumber
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (nonatomic) CGFloat elapsedTime; // ivar: _elapsedTime
@property (copy, nonatomic) NSString *endpointID; // ivar: _endpointID
@property (copy, nonatomic) NSString *externalContentIdentifier; // ivar: _externalContentIdentifier
@property (copy, nonatomic) NSString *externalUserProfileIdentifier; // ivar: _externalUserProfileIdentifier
@property (copy, nonatomic) NSString *genre; // ivar: _genre
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isAdvertisement; // ivar: _isAdvertisement
@property (nonatomic) BOOL isLive; // ivar: _isLive
@property (nonatomic) NSUInteger mediaType; // ivar: _mediaType
@property (nonatomic) float playbackRate; // ivar: _playbackRate
@property (nonatomic) NSUInteger queueIndex; // ivar: _queueIndex
@property (copy, nonatomic) NSString *requesterSharedUserID; // ivar: _requesterSharedUserID
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) NSUInteger trackNumber; // ivar: _trackNumber
@property (copy, nonatomic) NSString *userAccountHomeUserID; // ivar: _userAccountHomeUserID
@property (copy, nonatomic) NSString *userActivityPersistentIdentifier; // ivar: _userActivityPersistentIdentifier


+(id)instanceFromCMSCoded:(id)arg0 ;
+(id)nowPlayingInfoFromDictionary:(id)arg0 ;
-(id)cmsCoded;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif