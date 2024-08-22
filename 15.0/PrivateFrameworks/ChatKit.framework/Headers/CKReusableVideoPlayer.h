// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKREUSABLEVIDEOPLAYER_H
#define CKREUSABLEVIDEOPLAYER_H

@class NSString, AVPlayerViewController;
@protocol AVPlayerViewControllerDelegate, CKReusableVideoPlayerDelegate;

#import <Foundation/Foundation.h>


@interface CKReusableVideoPlayer : NSObject <AVPlayerViewControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKReusableVideoPlayerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isObservingPlayer) BOOL observingPlayer; // ivar: _observingPlayer
@property (readonly, nonatomic, getter=isPictureInPictureActive) BOOL pictureInPictureActive;
@property (retain, nonatomic) AVPlayerViewController *playerViewController; // ivar: _playerViewController
@property (nonatomic, getter=isPlaying) BOOL playing; // ivar: _playing
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *videoTransferGUID; // ivar: _videoTransferGUID
@property (nonatomic) BOOL wasPlayingBeforeDisappearing; // ivar: _wasPlayingBeforeDisappearing


-(BOOL)isReadyForReuse;
-(id)init;
-(void)configureWithPlayerItem:(id)arg0 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)pause;
-(void)removeRateObserverIfNecessary;
-(void)selectedConversationChanged;
-(void)willDisappear;
-(void)windowDidClose;


@end


#endif