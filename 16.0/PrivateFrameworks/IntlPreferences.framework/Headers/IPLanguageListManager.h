// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IPLANGUAGELISTMANAGER_H
#define IPLANGUAGELISTMANAGER_H

@class NSArray, NSLocale, NSString;

#import <Foundation/Foundation.h>


@interface IPLanguageListManager : NSObject

@property (retain, nonatomic) NSArray *preferredLanguages; // ivar: _preferredLanguages
@property (retain, nonatomic) NSLocale *preferredLocale; // ivar: _preferredLocale
@property (readonly, nonatomic) NSString *systemDisplayLanguage; // ivar: _systemDisplayLanguage
@property (readonly, nonatomic) NSArray *systemLanguages; // ivar: _systemLanguages


+(BOOL)canRemoveLanguages:(id)arg0 fromPreferredLanguages:(id)arg1 ;
+(id)effectiveSystemLanguagesWithUnsupportedVariant:(BOOL)arg0 forPreferredLanguages:(id)arg1 ;
+(id)generator;
+(id)manager;
+(id)regionalVariantLanguagesForBaseLanguage:(id)arg0 ;
+(id)regionalVariantLanguagesForSystemLanguages;
+(void)preheat;
+(void)sortByLocalizedLanguage:(id)arg0 ;
-(id)deviceLanguagesForChangingDeviceLanguage:(BOOL)arg0 ;
-(id)initWithPreferredLanguages:(id)arg0 ;
-(id)initWithPreferredLanguages:(id)arg0 preferredLocale:(id)arg1 ;
-(id)initWithPreferredLanguages:(id)arg0 preferredLocale:(id)arg1 systemLanguages:(id)arg2 ;
-(id)languageVariants;
-(id)otherLanguages;
-(void)setRegion:(id)arg0 updateFirstLanguage:(BOOL)arg1 ;


@end


#endif