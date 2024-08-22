// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVASSETPLAYBACKASSISTANT_H
#define AVASSETPLAYBACKASSISTANT_H


#import <Foundation/Foundation.h>

#import "AVAsset.h"

@interface AVAssetPlaybackAssistant : NSObject {
    AVAsset *_asset;
}




+(id)assetPlaybackAssistantWithAsset:(id)arg0 ;
-(id)_playbackConfigurationOptions;
-(id)initWithAsset:(id)arg0 ;
-(void)dealloc;
-(void)loadPlaybackConfigurationOptionsWithCompletionHandler:(id)arg0 ;


@end


#endif