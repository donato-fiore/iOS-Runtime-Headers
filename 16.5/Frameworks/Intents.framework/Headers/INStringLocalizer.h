// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INSTRINGLOCALIZER_H
#define INSTRINGLOCALIZER_H

@class NSMapTable, NSString, NSLocale, NSArray;

#import <Foundation/Foundation.h>


@interface INStringLocalizer : NSObject

@property (readonly, nonatomic) NSMapTable *bundleLocalizations; // ivar: _bundleLocalizations
@property (readonly, nonatomic) NSMapTable *bundlesByIdentifier; // ivar: _bundlesByIdentifier
@property (readonly, nonatomic) NSMapTable *bundlesByURL; // ivar: _bundlesByURL
@property (readonly, copy, nonatomic) NSString *languageCode; // ivar: _languageCode
@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) os_unfair_lock_s lock; // ivar: _lock
@property (readonly, nonatomic) NSMapTable *preferredBundleLocalizations; // ivar: _preferredBundleLocalizations
@property (readonly, nonatomic) NSArray *preferredLanguages; // ivar: _preferredLanguages


+(id)alternativeLocales;
+(id)localizerForLanguage:(id)arg0 ;
+(id)siriLocalizer;
-(BOOL)matchesBundleLocalizations:(struct __CFBundle *)arg0 ;
-(id)init;
-(id)initWithLanguageCode:(id)arg0 ;
-(id)localizationsForBundle:(struct __CFBundle *)arg0 ;
-(id)preferredLocalizationsForBundle:(struct __CFBundle *)arg0 ;
-(struct __CFBundle *)bundleWithIdentifier:(id)arg0 fileURL:(id)arg1 ;


@end


#endif