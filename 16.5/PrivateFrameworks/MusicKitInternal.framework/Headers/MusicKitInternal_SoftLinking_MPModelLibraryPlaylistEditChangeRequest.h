// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUSICKITINTERNAL_SOFTLINKING_MPMODELLIBRARYPLAYLISTEDITCHANGEREQUEST_H
#define MUSICKITINTERNAL_SOFTLINKING_MPMODELLIBRARYPLAYLISTEDITCHANGEREQUEST_H

@class MPModelLibraryPlaylistEditChangeRequest;

#import <Foundation/Foundation.h>


@interface MusicKitInternal_SoftLinking_MPModelLibraryPlaylistEditChangeRequest : NSObject {
    MPModelLibraryPlaylistEditChangeRequest *_underlyingRequest;
}




-(id)initWithParentPlaylist:(id)arg0 playlistEntries:(id)arg1 playlistName:(id)arg2 playlistDescription:(id)arg3 playlistUserImage:(struct CGImage *)arg4 publicPlaylist:(id)arg5 visiblePlaylist:(id)arg6 authorStoreIdentifier:(id)arg7 ;
-(id)initWithPlaylist:(id)arg0 playlistEntries:(id)arg1 playlistName:(id)arg2 playlistDescription:(id)arg3 playlistUserImage:(struct CGImage *)arg4 publicPlaylist:(id)arg5 visiblePlaylist:(id)arg6 authorStoreIdentifier:(id)arg7 ;
-(void)_performWithRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)performWithCompletionHandler:(id)arg0 ;


@end


#endif