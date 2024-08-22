// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFMEDIAHELPER_H
#define HFMEDIAHELPER_H


#import <Foundation/Foundation.h>


@interface HFMediaHelper : NSObject



+(BOOL)isAirPortExpress:(id)arg0 ;
+(BOOL)isAppleTV:(id)arg0 ;
+(BOOL)isAudioReceiver:(id)arg0 ;
+(BOOL)isDoorbellChimeEnabled:(id)arg0 ;
+(BOOL)isHomePod:(id)arg0 ;
+(BOOL)isHomePodMediaSystem:(id)arg0 ;
+(BOOL)isHomePodMini:(id)arg0 ;
+(BOOL)isHomePodMiniMediaSystem:(id)arg0 ;
+(BOOL)isHomePodOriginal:(id)arg0 ;
+(BOOL)isHomePodOriginalMediaSystem:(id)arg0 ;
+(BOOL)isSiriDisabled:(id)arg0 ;
+(BOOL)supportsDoorbellChime:(id)arg0 ;
+(id)_findAccessorySettingSiriLanguageAdapterFor:(id)arg0 ;
+(id)changeAllSiriLanguagesFor:(id)arg0 to:(id)arg1 ;
+(id)changeSiriLanguageFor:(id)arg0 to:(id)arg1 ;
+(id)mediaIconDescriptorForMediaContainer:(id)arg0 ;
+(id)siriLanguageFor:(id)arg0 ;


@end


#endif