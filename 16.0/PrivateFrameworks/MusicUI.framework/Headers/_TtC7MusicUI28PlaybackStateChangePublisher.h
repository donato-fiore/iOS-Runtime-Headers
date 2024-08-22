// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC7MUSICUI28PLAYBACKSTATECHANGEPUBLISHER_H
#define _TTC7MUSICUI28PLAYBACKSTATECHANGEPUBLISHER_H

@class SwiftObject;



@interface _TtC7MusicUI28PlaybackStateChangePublisher : SwiftObject {
    ? playbackManager;
    ? onContentReloadTrigger;
    ? nowPlayingItemDescriptor;
    ? playbackState;
}




-(void)nowPlayingItemDidChange:(id)arg0 ;
-(void)playbackStateDidChange:(id)arg0 ;


@end


#endif