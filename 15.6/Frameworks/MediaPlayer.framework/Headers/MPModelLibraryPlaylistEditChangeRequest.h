// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPMODELLIBRARYPLAYLISTEDITCHANGEREQUEST_H
#define MPMODELLIBRARYPLAYLISTEDITCHANGEREQUEST_H

@class NSString, NSNumber, UIImage;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "MPMediaLibrary.h"
#import "MPModelPlaylist.h"
#import "MPSectionedCollection.h"

@interface MPModelLibraryPlaylistEditChangeRequest : NSObject <NSCopying>



@property (copy, nonatomic) NSString *authorStoreIdentifier; // ivar: _authorStoreIdentifier
@property (copy, nonatomic, getter=isCuratorPlaylist) NSNumber *curatorPlaylist; // ivar: _curatorPlaylist
@property (readonly, nonatomic) BOOL didSetPlaylistUserImage; // ivar: _didSetPlaylistUserImage
@property (copy, nonatomic) NSNumber *isOwner; // ivar: _isOwner
@property (retain, nonatomic) MPMediaLibrary *mediaLibrary; // ivar: _mediaLibrary
@property (retain, nonatomic) MPModelPlaylist *parentPlaylist; // ivar: _parentPlaylist
@property (retain, nonatomic) MPModelPlaylist *playlist; // ivar: _playlist
@property (copy, nonatomic) NSString *playlistDescription; // ivar: _playlistDescription
@property (copy, nonatomic) MPSectionedCollection *playlistEntries; // ivar: _playlistEntries
@property (copy, nonatomic) NSString *playlistName; // ivar: _playlistName
@property (retain, nonatomic) UIImage *playlistUserImage; // ivar: _playlistUserImage
@property (copy, nonatomic, getter=isPublicPlaylist) NSNumber *publicPlaylist; // ivar: _publicPlaylist
@property (nonatomic) BOOL shouldCreatePlaylist; // ivar: _shouldCreatePlaylist
@property (copy, nonatomic, getter=isVisiblePlaylist) NSNumber *visiblePlaylist; // ivar: _visiblePlaylist


+(id)requiredPlaylistEntryProperties;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
// -(id)newOperationWithLocalPersistenceResponseHandler:(id)arg0 completeResponseHandler:(unk)arg1  ;


@end


#endif