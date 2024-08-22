// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVASSETREADERAUDIOMIXOUTPUTINTERNAL_H
#define AVASSETREADERAUDIOMIXOUTPUTINTERNAL_H

@class NSArray, NSMutableDictionary, NSString;

#import <Foundation/Foundation.h>

#import "AVAudioMix.h"
#import "AVAudioOutputSettings.h"

@interface AVAssetReaderAudioMixOutputInternal : NSObject {
    NSArray *audioTracks;
    AVAudioMix *audioMix;
    NSMutableDictionary *audioVolumeCurvesForTracks;
    NSMutableDictionary *audioTimePitchAlgorithmsForTracks;
    NSMutableDictionary *audioTapProcessorsForTracks;
    AVAudioOutputSettings *audioOutputSettings;
    NSString *audioTimePitchAlgorithm;
}






@end


#endif