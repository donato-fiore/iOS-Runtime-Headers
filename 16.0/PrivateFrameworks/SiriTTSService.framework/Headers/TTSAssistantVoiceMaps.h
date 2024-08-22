// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TTSASSISTANTVOICEMAPS_H
#define TTSASSISTANTVOICEMAPS_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface TTSAssistantVoiceMaps : NSObject {
    ? voicesForLanguageMap;
    ? deprecatedVoicesMap;
    ? relativePitchOrderForVoicesMap;
    ? relativeOrderForVoicesMap;
    ? identifiersForVoicesMap;
}


@property (nonatomic, readonly) NSDictionary *deprecatedVoicesMap;
@property (nonatomic, readonly) NSDictionary *identifiersForVoicesMap;
@property (nonatomic, readonly) NSDictionary *relativeOrderForVoicesMap;
@property (nonatomic, readonly) NSDictionary *relativePitchOrderForVoicesMap;
@property (nonatomic, readonly) NSDictionary *voicesForLanguageMap;


-(id)init;


@end


#endif