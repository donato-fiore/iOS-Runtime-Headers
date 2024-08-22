// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WDVIDEOURLMANAGER_H
#define WDVIDEOURLMANAGER_H


#import <Foundation/Foundation.h>


@interface WDVideoURLManager : NSObject



+(BOOL)isVideoPlaybackEnabled;
+(id)_baseURLForIdentifier:(id)arg0 ;
+(id)_parseJSON:(id)arg0 ;
+(id)preferredLanguageFromLanguages:(id)arg0 languagePreferences:(id)arg1 ;
+(void)_fetchPreferredURLForIdentifier:(id)arg0 completion:(id)arg1 ;
+(void)_fetchRawManifestForIdentifier:(id)arg0 completion:(id)arg1 ;
+(void)fetchURLForVideoWithIdentifier:(id)arg0 handler:(id)arg1 ;


@end


#endif