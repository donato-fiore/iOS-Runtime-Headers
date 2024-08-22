// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFMEDIAHELPER_H
#define HFMEDIAHELPER_H


#import <Foundation/Foundation.h>


@interface HFMediaHelper : NSObject



+(BOOL)isAirPortExpress:(id)arg0 ;
+(BOOL)isAnyKindOfGroup:(id)arg0 ;
+(BOOL)isAppleTV:(id)arg0 ;
+(BOOL)isAudioReceiver:(id)arg0 ;
+(BOOL)isContainedWithinAGroup:(id)arg0 ;
+(BOOL)isContainedWithinMediaSystem:(id)arg0 ;
+(BOOL)isDoorbellChimeEnabled:(id)arg0 ;
+(BOOL)isHomePod:(id)arg0 ;
+(BOOL)isHomePodMediaSystem:(id)arg0 ;
+(BOOL)isHomePodMini:(id)arg0 ;
+(BOOL)isHomePodMiniMediaSystem:(id)arg0 ;
+(BOOL)isHomePodOriginal:(id)arg0 ;
+(BOOL)isHomePodOriginalMediaSystem:(id)arg0 ;
+(BOOL)isPermanentSpeakerGroup:(id)arg0 ;
+(BOOL)isSiriDisabled:(id)arg0 ;
+(BOOL)supportsDoorbellChime:(id)arg0 ;
+(id)_findAccessorySettingSiriLanguageAdapterFor:(id)arg0 ;
+(id)changeAllSiriLanguageOptionsFor:(id)arg0 to:(id)arg1 ;
+(id)changeSiriLanguageOptionFor:(id)arg0 to:(id)arg1 ;
+(id)mediaContainerSymbolConfiguration;
+(id)mediaIconDescriptorForMediaContainer:(id)arg0 ;
+(id)siriLanguageOptionFor:(id)arg0 ;


@end


#endif