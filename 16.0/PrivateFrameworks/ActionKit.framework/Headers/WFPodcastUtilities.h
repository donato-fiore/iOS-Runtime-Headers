// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFPODCASTUTILITIES_H
#define WFPODCASTUTILITIES_H


#import <Foundation/Foundation.h>


@interface WFPodcastUtilities : NSObject



+(*void)createLocalPlayerPath;
+(*void)createPlayerPathForOrigin:(*void)arg0 ;
+(id)generatePlaybackQueueURL:(id)arg0 withQueryDictionary:(id)arg1 ;
+(struct _MRSystemAppPlaybackQueue *)createPlaybackQueueWithURLs:(id)arg0 setImmediatePlayback:(BOOL)arg1 ;
+(void)createPreferredPlayerPathWithCompletion:(id)arg0 ;
+(void)getPodcastsFromLibraryFetchingDetailsFromServer:(BOOL)arg0 withCompletion:(id)arg1 ;


@end


#endif