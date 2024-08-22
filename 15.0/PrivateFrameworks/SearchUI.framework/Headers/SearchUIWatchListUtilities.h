// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SEARCHUIWATCHLISTUTILITIES_H
#define SEARCHUIWATCHLISTUTILITIES_H


#import <Foundation/Foundation.h>


@interface SearchUIWatchListUtilities : NSObject



+(BOOL)channelHasBeenSeen:(id)arg0 seenChannels:(id)arg1 ;
+(id)buttonForChannelDetails:(id)arg0 punchoutURLs:(id)arg1 isEntitled:(BOOL)arg2 isContinuing:(BOOL)arg3 isContainerItem:(BOOL)arg4 hasDescriptiveSeasonTitle:(BOOL)arg5 seasonNumber:(id)arg6 episodeNumber:(id)arg7 isHorizontallySrollingStyle:(BOOL)arg8 ;
+(id)buttonForChannelOffer:(id)arg0 channel:(id)arg1 episode:(id)arg2 ;
+(id)buttonForOffer:(id)arg0 playable:(id)arg1 ;
+(id)buttonForPlayable:(id)arg0 isHorizontallySrollingStyle:(BOOL)arg1 ;
+(id)buttonWithTitle:(id)arg0 subtitle:(id)arg1 punchoutURL:(id)arg2 type:(NSUInteger)arg3 image:(id)arg4 storeIdentifier:(id)arg5 ;
+(id)buttonsForPlayables:(id)arg0 channels:(id)arg1 currentEpisode:(id)arg2 isUpNextable:(BOOL)arg3 watchListState:(id)arg4 isHorizontallySrollingStyle:(BOOL)arg5 ;
+(void)fetchButtonsForWatchListIdentifier:(id)arg0 isMediaContainer:(BOOL)arg1 isHorizontallySrollingStyle:(BOOL)arg2 completion:(id)arg3 ;
+(void)fetchButtonsForWatchListIdentifier:(id)arg0 isMediaContainer:(BOOL)arg1 isHorizontallySrollingStyle:(BOOL)arg2 fetchButtons:(BOOL)arg3 completion:(id)arg4 ;
+(void)fetchWatchListStateForWatchListIdentifier:(id)arg0 isMediaContainer:(BOOL)arg1 completion:(id)arg2 ;
+(void)generateMediaContainerWatchListReponseForWatchListIdentifier:(id)arg0 completion:(id)arg1 ;
+(void)generateWatchListReponseForWatchListIdentifier:(id)arg0 completion:(id)arg1 ;


@end


#endif