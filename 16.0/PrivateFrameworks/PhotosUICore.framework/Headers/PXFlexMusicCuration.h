// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXFLEXMUSICCURATION_H
#define PXFLEXMUSICCURATION_H

@protocol PXAudioAssetFetchResult;

#import <Foundation/Foundation.h>


@interface PXFlexMusicCuration : NSObject

@property (readonly, nonatomic) NSObject<PXAudioAssetFetchResult> *bestSongSuggestions; // ivar: _bestSongSuggestions
@property (readonly, nonatomic) NSObject<PXAudioAssetFetchResult> *secondarySongSuggestions; // ivar: _secondarySongSuggestions


-(id)init;
-(id)initWithBestSongSuggestions:(id)arg0 secondarySongSuggestions:(id)arg1 ;


@end


#endif