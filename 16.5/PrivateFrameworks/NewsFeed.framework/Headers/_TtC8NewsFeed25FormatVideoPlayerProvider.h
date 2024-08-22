// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8NEWSFEED25FORMATVIDEOPLAYERPROVIDER_H
#define _TTC8NEWSFEED25FORMATVIDEOPLAYERPROVIDER_H

@protocol SVVideoProviding;

#import <Foundation/Foundation.h>


@interface _TtC8NewsFeed25FormatVideoPlayerProvider : NSObject <SVVideoProviding>

 {
    ? data;
    ? coordinator;
    ? metadata;
}


@property (nonatomic, readonly) CGFloat impressionThreshold;


-(id)init;
-(id)loadWithCompletionBlock:(SEL)arg0 ;
-(void)playbackFailedWithError:(id)arg0 ;
-(void)playbackFinished;
-(void)playbackInitiatedWithButtonTapped:(BOOL)arg0 ;
-(void)playbackPaused;
-(void)playbackReadyToStart;
-(void)playbackResumed;
-(void)playbackStarted;
-(void)startedPictureInPicture;
-(void)stoppedPictureInPicture;


@end


#endif