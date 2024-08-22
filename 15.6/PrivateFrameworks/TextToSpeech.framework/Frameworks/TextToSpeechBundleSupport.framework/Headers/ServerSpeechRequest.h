// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SERVERSPEECHREQUEST_H
#define SERVERSPEECHREQUEST_H

@class TTSSpeechRequest, NSArray, TTSVoiceResourceAsset;

#import <Foundation/Foundation.h>

#import "TTSSpeechServerInstance.h"

@interface ServerSpeechRequest : NSObject {
    TTSSpeechServerInstance *clientServer;
    TTSSpeechRequest *clientRequest;
    *__CFString text;
    *__CFAttributedString attributedText;
    *__CFURL outputPathURL;
    char * voiceName;
    NSInteger footprint;
    NSInteger voiceType;
    NSInteger gender;
    *__CFString languageCode;
    unsigned char notifyMarkStart;
    unsigned char maintainInput;
    unsigned char supportsAccurateWordCallbacks;
    unsigned char skipLuthorRules;
    float rate;
    float pitch;
    float volume;
    unsigned char useSharedSession;
    unsigned int audioSessionID;
    unsigned int audioQueueFlags;
    NSArray *channels;
    TTSVoiceResourceAsset *voiceResource;
    NSArray *rulesetRangeAdjustments;
    id *audioBufferCallback;
    unsigned char synthesizeSilently;
}




-(void)dealloc;


@end


#endif