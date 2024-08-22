// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC7NEWSUI218AUDIOPLAYLISTSTORE_H
#define _TTC7NEWSUI218AUDIOPLAYLISTSTORE_H

@class SwiftObject;
@protocol FCAudioPlaylistObserving;



@interface _TtC7NewsUI218AudioPlaylistStore : SwiftObject <FCAudioPlaylistObserving>

 {
    ? playlistUpdatedSignal;
    ? audioPlaylist;
    ? headlineService;
    ? headlineCache;
}




-(void)audioPlaylistDidChange:(id)arg0 ;


@end


#endif