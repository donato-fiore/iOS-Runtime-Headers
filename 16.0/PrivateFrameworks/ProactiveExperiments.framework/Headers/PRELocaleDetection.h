// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRELOCALEDETECTION_H
#define PRELOCALEDETECTION_H

@class NSDictionary, _PASLRUCache;

#import <Foundation/Foundation.h>


@interface PRELocaleDetection : NSObject {
    NSDictionary *_preferredLocales;
    _PASLRUCache *_lastConfidentLocaleForSender;
    NSUInteger _languageLimit;
}




+(BOOL)isLanguageMismatchedForIdentifier:(id)arg0 withIdentifier:(id)arg1 ;
+(id)languageTagForLocaleIdentifier:(id)arg0 ;
+(id)sharedInstance;
-(BOOL)isLanguageMismatchedForMessage:(id)arg0 withLocaleIdentifier:(id)arg1 ;
-(id)_bestLocaleForLanguageTag:(id)arg0 ;
-(id)_getPreferredLocales;
-(id)_userLanguageDetectedFromString:(id)arg0 preferredLocales:(id)arg1 ;
-(id)_userLocaleDetectedFromString:(id)arg0 ;
-(id)init;
-(id)initWithLanguageLimit:(NSUInteger)arg0 withPreferredLocales:(id)arg1 ;
-(id)localeForMessage:(id)arg0 outgoingMessageHistory:(id)arg1 defaultLocale:(id)arg2 defaultLocaleLastChangedDate:(id)arg3 sender:(id)arg4 ;


@end


#endif