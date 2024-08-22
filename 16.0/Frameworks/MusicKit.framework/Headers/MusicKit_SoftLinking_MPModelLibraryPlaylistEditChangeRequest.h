// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUSICKIT_SOFTLINKING_MPMODELLIBRARYPLAYLISTEDITCHANGEREQUEST_H
#define MUSICKIT_SOFTLINKING_MPMODELLIBRARYPLAYLISTEDITCHANGEREQUEST_H

@class MPModelLibraryPlaylistEditChangeRequest;

#import <Foundation/Foundation.h>

#import "MusicKit_SoftLinking_MPMediaLibrary.h"

@interface MusicKit_SoftLinking_MPModelLibraryPlaylistEditChangeRequest : NSObject {
    MPModelLibraryPlaylistEditChangeRequest *_underlyingRequest;
    MusicKit_SoftLinking_MPMediaLibrary *_mediaLibrary;
}




-(id)initWithPlaylist:(id)arg0 playlistEntries:(id)arg1 playlistName:(id)arg2 playlistDescription:(id)arg3 authorDisplayName:(id)arg4 ;
-(id)initWithPlaylistEntries:(id)arg0 playlistName:(id)arg1 playlistDescription:(id)arg2 authorDisplayName:(id)arg3 ;
-(void)sdk_performWithCompletionHandler:(id)arg0 ;


@end


#endif