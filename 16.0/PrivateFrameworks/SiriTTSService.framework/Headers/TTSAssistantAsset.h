// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TTSASSISTANTASSET_H
#define TTSASSISTANTASSET_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface TTSAssistantAsset : NSObject {
    ? supportedLanguages;
    ? name;
    ? identifier;
}


@property (nonatomic, readonly) NSInteger assistantGender; // ivar: assistantGender
@property (nonatomic, readonly) NSInteger assistantOrder; // ivar: assistantOrder
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSInteger gender;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) BOOL isCustom;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *primaryLanguage;
@property (nonatomic, readonly) NSArray *supportedLanguages;


-(id)init;


@end


#endif