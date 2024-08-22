// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXAPPLEMUSICCURATION_H
#define PXAPPLEMUSICCURATION_H

@protocol PXAudioAssetFetchResult;

#import <Foundation/Foundation.h>

#import "PXAppleMusicCurationInfo.h"

@interface PXAppleMusicCuration : NSObject

@property (readonly, nonatomic) NSObject<PXAudioAssetFetchResult> *bestMusicSuggestions; // ivar: _bestMusicSuggestions
@property (readonly, nonatomic) PXAppleMusicCurationInfo *musicCurationInfo; // ivar: _musicCurationInfo
@property (readonly, nonatomic) NSObject<PXAudioAssetFetchResult> *musicForLocation; // ivar: _musicForLocation
@property (readonly, nonatomic) NSObject<PXAudioAssetFetchResult> *musicForPerformer; // ivar: _musicForPerformer
@property (readonly, nonatomic) NSObject<PXAudioAssetFetchResult> *musicForTime; // ivar: _musicForTime
@property (readonly, nonatomic) NSObject<PXAudioAssetFetchResult> *musicForYou; // ivar: _musicForYou


-(id)init;
-(id)initWithBestMusicSuggestions:(id)arg0 musicForYou:(id)arg1 musicForLocation:(id)arg2 musicForTime:(id)arg3 musicForPerformer:(id)arg4 musicCurationInfo:(id)arg5 ;


@end


#endif