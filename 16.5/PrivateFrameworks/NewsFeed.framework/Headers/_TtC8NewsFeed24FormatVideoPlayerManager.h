// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8NEWSFEED24FORMATVIDEOPLAYERMANAGER_H
#define _TTC8NEWSFEED24FORMATVIDEOPLAYERMANAGER_H


#import <Foundation/Foundation.h>


@interface _TtC8NewsFeed24FormatVideoPlayerManager : NSObject {
    ? delegate;
    ? reuseDelegate;
    ? offscreenVisibility;
    ? partialVisibility;
    ? onscreenVisibility;
    ? playerViewController;
    ? pictureInPictureState;
    ? offlineManager;
    ? visibilityPercentage;
    ? isBookmarkInProgress;
    ? isViewTransitionInProcess;
    ? cover;
    ? cacheKey;
    ? data;
    ? videoAdProviderFactory;
    ? coordinator;
    ? commandCenter;
    ? adJournal;
    ? sceneProvider;
    ? offlineAlertControllerFactory;
}




-(id)init;
-(void)didApplyBookmark;
-(void)didFinishCoveringWithNotification:(id)arg0 ;
-(void)didStartCoveringWithNotification:(id)arg0 ;
-(void)startPictureInPictureIfPossible;
-(void)willApplyBookmark;


@end


#endif