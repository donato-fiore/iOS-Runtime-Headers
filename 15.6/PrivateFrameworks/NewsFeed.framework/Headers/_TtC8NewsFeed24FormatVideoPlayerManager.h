// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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
    ? data;
    ? videoAdProviderFactory;
    ? volumeProvider;
    ? coordinator;
    ? commandCenter;
    ? adJoural;
    ? sceneProvider;
    ? offlineAlertControllerFactory;
}




-(id)init;
-(void)didApplyBookmark;
-(void)startPictureInPictureIfPossible;
-(void)willApplyBookmark;


@end


#endif