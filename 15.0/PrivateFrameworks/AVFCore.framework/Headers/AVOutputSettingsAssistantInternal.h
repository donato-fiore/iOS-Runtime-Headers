// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVOUTPUTSETTINGSASSISTANTINTERNAL_H
#define AVOUTPUTSETTINGSASSISTANTINTERNAL_H

@class NSDictionary;
@protocol AVOutputSettingsAssistantBaseSettingsProvider, AVOutputSettingsAssistantVideoSettingsAdjuster;

#import <Foundation/Foundation.h>


@interface AVOutputSettingsAssistantInternal : NSObject {
    id<AVOutputSettingsAssistantBaseSettingsProvider> *baseSettingsProvider;
    id<AVOutputSettingsAssistantVideoSettingsAdjuster> *videoSettingsAdjuster;
    *opaqueCMFormatDescription sourceVideoFormat;
    *opaqueCMFormatDescription sourceAudioFormat;
    NSDictionary *videoEncoderSpecification;
    ? sourceVideoAverageFrameDuration;
    ? sourceVideoMinFrameDuration;
}






@end


#endif