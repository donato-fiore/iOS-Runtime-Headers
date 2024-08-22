// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MIPPLAYLIST_H
#define MIPPLAYLIST_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;


#import "MIPMultiverseIdentifier.h"
#import "MIPSmartPlaylistInfo.h"

@interface MIPPlaylist : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *artworkId; // ivar: _artworkId
@property (retain, nonatomic) NSString *authorDisplayName; // ivar: _authorDisplayName
@property (retain, nonatomic) NSString *authorHandle; // ivar: _authorHandle
@property (nonatomic) NSInteger authorStoreId; // ivar: _authorStoreId
@property (retain, nonatomic) NSString *authorStoreURL; // ivar: _authorStoreURL
@property (retain, nonatomic) NSMutableArray *childIdentifiers; // ivar: _childIdentifiers
@property (retain, nonatomic) NSString *cloudGlobalId; // ivar: _cloudGlobalId
@property (nonatomic) BOOL cloudIsCuratorPlaylist; // ivar: _cloudIsCuratorPlaylist
@property (nonatomic) BOOL cloudIsSharingDisabled; // ivar: _cloudIsSharingDisabled
@property (nonatomic) BOOL cloudIsSubscribed; // ivar: _cloudIsSubscribed
@property (nonatomic) NSInteger cloudLastUpdateTime; // ivar: _cloudLastUpdateTime
@property (retain, nonatomic) NSString *cloudUniversalLibraryId; // ivar: _cloudUniversalLibraryId
@property (retain, nonatomic) NSString *cloudVersionHash; // ivar: _cloudVersionHash
@property (nonatomic) NSInteger creationDateTime; // ivar: _creationDateTime
@property (nonatomic) int distinguishedKind; // ivar: _distinguishedKind
@property (nonatomic) BOOL editable; // ivar: _editable
@property (retain, nonatomic) NSString *externalVendorDisplayName; // ivar: _externalVendorDisplayName
@property (retain, nonatomic) NSString *externalVendorIdentifier; // ivar: _externalVendorIdentifier
@property (nonatomic) BOOL externalVendorPlaylist; // ivar: _externalVendorPlaylist
@property (retain, nonatomic) NSString *externalVendorTag; // ivar: _externalVendorTag
@property (retain, nonatomic) MIPMultiverseIdentifier *geniusSeedTrackIdentifier; // ivar: _geniusSeedTrackIdentifier
@property (readonly, nonatomic) BOOL hasArtworkId;
@property (readonly, nonatomic) BOOL hasAuthorDisplayName;
@property (readonly, nonatomic) BOOL hasAuthorHandle;
@property (nonatomic) BOOL hasAuthorStoreId;
@property (readonly, nonatomic) BOOL hasAuthorStoreURL;
@property (readonly, nonatomic) BOOL hasCloudGlobalId;
@property (nonatomic) BOOL hasCloudIsCuratorPlaylist;
@property (nonatomic) BOOL hasCloudIsSharingDisabled;
@property (nonatomic) BOOL hasCloudIsSubscribed;
@property (nonatomic) BOOL hasCloudLastUpdateTime;
@property (readonly, nonatomic) BOOL hasCloudUniversalLibraryId;
@property (readonly, nonatomic) BOOL hasCloudVersionHash;
@property (nonatomic) BOOL hasCreationDateTime;
@property (nonatomic) BOOL hasDistinguishedKind;
@property (nonatomic) BOOL hasEditable;
@property (readonly, nonatomic) BOOL hasExternalVendorDisplayName;
@property (readonly, nonatomic) BOOL hasExternalVendorIdentifier;
@property (nonatomic) BOOL hasExternalVendorPlaylist;
@property (readonly, nonatomic) BOOL hasExternalVendorTag;
@property (readonly, nonatomic) BOOL hasGeniusSeedTrackIdentifier;
@property (nonatomic) BOOL hasHidden;
@property (nonatomic) BOOL hasLastPlayedDateTime;
@property (nonatomic) BOOL hasLikedState;
@property (nonatomic) BOOL hasMinRefreshInterval;
@property (nonatomic) BOOL hasModificationDateTime;
@property (readonly, nonatomic) BOOL hasName;
@property (nonatomic) BOOL hasOwner;
@property (readonly, nonatomic) BOOL hasParentIdentifier;
@property (nonatomic) BOOL hasPlayCount;
@property (nonatomic) BOOL hasPlaylistCategoryTypeMask;
@property (readonly, nonatomic) BOOL hasPlaylistDescription;
@property (readonly, nonatomic) BOOL hasPlaylistGroupingSortKey;
@property (nonatomic) BOOL hasRemoteSourceType;
@property (nonatomic) BOOL hasReversedSorting;
@property (readonly, nonatomic) BOOL hasSecondaryArtworkId;
@property (nonatomic) BOOL hasSecondaryArtworkSourceType;
@property (nonatomic) BOOL hasShared;
@property (readonly, nonatomic) BOOL hasSmartPlaylistInfo;
@property (nonatomic) BOOL hasSortType;
@property (nonatomic) BOOL hasStoreId;
@property (nonatomic) BOOL hasSubscriberCount;
@property (nonatomic) BOOL hasSubscriberLikedCount;
@property (nonatomic) BOOL hasSubscriberPlayCount;
@property (readonly, nonatomic) BOOL hasSubscriberURL;
@property (nonatomic) BOOL hasType;
@property (nonatomic) BOOL hasVisible;
@property (nonatomic) BOOL hidden; // ivar: _hidden
@property (retain, nonatomic) NSMutableArray *items; // ivar: _items
@property (nonatomic) NSInteger lastPlayedDateTime; // ivar: _lastPlayedDateTime
@property (nonatomic) int likedState; // ivar: _likedState
@property (nonatomic) NSInteger minRefreshInterval; // ivar: _minRefreshInterval
@property (nonatomic) NSInteger modificationDateTime; // ivar: _modificationDateTime
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) BOOL owner; // ivar: _owner
@property (retain, nonatomic) MIPMultiverseIdentifier *parentIdentifier; // ivar: _parentIdentifier
@property (nonatomic) int playCount; // ivar: _playCount
@property (nonatomic) int playlistCategoryTypeMask; // ivar: _playlistCategoryTypeMask
@property (retain, nonatomic) NSString *playlistDescription; // ivar: _playlistDescription
@property (retain, nonatomic) NSString *playlistGroupingSortKey; // ivar: _playlistGroupingSortKey
@property (nonatomic) int remoteSourceType; // ivar: _remoteSourceType
@property (nonatomic) BOOL reversedSorting; // ivar: _reversedSorting
@property (retain, nonatomic) NSString *secondaryArtworkId; // ivar: _secondaryArtworkId
@property (nonatomic) int secondaryArtworkSourceType; // ivar: _secondaryArtworkSourceType
@property (nonatomic) BOOL shared; // ivar: _shared
@property (retain, nonatomic) MIPSmartPlaylistInfo *smartPlaylistInfo; // ivar: _smartPlaylistInfo
@property (nonatomic) int sortType; // ivar: _sortType
@property (nonatomic) NSInteger storeId; // ivar: _storeId
@property (nonatomic) int subscriberCount; // ivar: _subscriberCount
@property (nonatomic) int subscriberLikedCount; // ivar: _subscriberLikedCount
@property (nonatomic) int subscriberPlayCount; // ivar: _subscriberPlayCount
@property (retain, nonatomic) NSString *subscriberURL; // ivar: _subscriberURL
@property (nonatomic) int type; // ivar: _type
@property (nonatomic) BOOL visible; // ivar: _visible


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)childIdentifiersAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)itemsAtIndex:(NSUInteger)arg0 ;
-(id)sortTypeAsString:(int)arg0 ;
-(id)typeAsString:(int)arg0 ;
-(int)StringAsSortType:(id)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(void)addChildIdentifiers:(id)arg0 ;
-(void)addItems:(id)arg0 ;
-(void)clearChildIdentifiers;
-(void)clearItems;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif