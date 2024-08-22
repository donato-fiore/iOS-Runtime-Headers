// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGSTORYRECIPEBUILDER_H
#define PGSTORYRECIPEBUILDER_H


#import <Foundation/Foundation.h>


@interface PGStoryRecipeBuilder : NSObject



+(id)_appleSongAssetFromAppleMusicCuration:(id)arg0 ;
+(id)_keyFlexSongAssetFromFlexMusicCuration:(id)arg0 ;
+(id)_storyRecipeWithKeyAppleMusicSongAsset:(id)arg0 keyFlexSongAsset:(id)arg1 isAppleMusicSubscriber:(BOOL)arg2 shouldAvoidColorGrading:(BOOL)arg3 ;
+(id)storyRecipeForMemory:(id)arg0 appleMusicCuration:(id)arg1 flexMusicCuration:(id)arg2 shouldAvoidColorGrading:(BOOL)arg3 isAppleMusicSubscriber:(BOOL)arg4 error:(*id)arg5 ;


@end


#endif