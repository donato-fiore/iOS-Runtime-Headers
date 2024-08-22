// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PRELOCALEDETECTION_H
#define PRELOCALEDETECTION_H

@class NSDictionary, _PASLRUCache;

#import <Foundation/Foundation.h>


@interface PRELocaleDetection : NSObject {
    NSDictionary *_preferredLocales;
    _PASLRUCache *_lastConfidentLocaleForSender;
}




+(BOOL)isLanguageMismatchedForIdentifier:(id)arg0 withIdentifier:(id)arg1 ;
+(id)sharedInstance;
-(id)_getPreferredLocales;
-(id)_userLocaleDetectedFromString:(id)arg0 ;
-(id)init;
-(id)initWithLanguageLimit:(NSUInteger)arg0 withPreferredLocales:(id)arg1 ;
-(id)localeForMessage:(id)arg0 defaultLocale:(id)arg1 sender:(id)arg2 ;


@end


#endif