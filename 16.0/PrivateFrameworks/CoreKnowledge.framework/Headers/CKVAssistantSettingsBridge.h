// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKVASSISTANTSETTINGSBRIDGE_H
#define CKVASSISTANTSETTINGSBRIDGE_H


#import <Foundation/Foundation.h>


@interface CKVAssistantSettingsBridge : NSObject



+(BOOL)isASRSupported;
+(BOOL)isAssistantEnabled;
+(BOOL)isCustomerInstall;
+(BOOL)isDictationEnabled;
+(BOOL)isLinkVocabularyEnabled;
+(BOOL)isSiriMuxSupported;
+(BOOL)isSiriUODSupported;
+(BOOL)isSpeechProfileEnabled;
+(BOOL)isUnifiedAssetNamespaceEnabled;
+(id)currentDictationLanguageCodes;
+(id)currentSiriLanguageCode;
+(id)getConformingSharedUserIds;
-(id)init;


@end


#endif