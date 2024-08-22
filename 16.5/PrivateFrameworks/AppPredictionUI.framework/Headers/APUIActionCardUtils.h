// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APUIACTIONCARDUTILS_H
#define APUIACTIONCARDUTILS_H


#import <Foundation/Foundation.h>


@interface APUIActionCardUtils : NSObject



+(BOOL)updateCardView:(id)arg0 forINIntent:(id)arg1 withConfig:(id)arg2 ;
+(BOOL)updateCardView:(id)arg0 forINInteraction:(id)arg1 withConfig:(id)arg2 ;
+(BOOL)updateCardView:(id)arg0 forNSUserActivity:(id)arg1 withConfig:(id)arg2 ;
+(BOOL)updateCardView:(id)arg0 forUAUserActivityProxy:(id)arg1 withConfig:(id)arg2 ;
+(NSUInteger)_searchUIStyleForAPUIStyle:(NSUInteger)arg0 ;
+(id)_generateCardSectionWithInfo:(id)arg0 config:(id)arg1 ;
+(id)_subtitleForAction:(id)arg0 default:(id)arg1 ;
+(id)cardForCardSection:(id)arg0 ;
+(id)cardSectionForATXAction:(id)arg0 withConfig:(id)arg1 ;
+(id)cardSectionForHeroApp:(id)arg0 withConfig:(id)arg1 ;
+(id)cardSectionForINIntent:(id)arg0 withConfig:(id)arg1 ;
+(id)cardSectionForINInteraction:(id)arg0 withConfig:(id)arg1 ;
+(id)cardSectionForNSString:(id)arg0 withConfig:(id)arg1 ;
+(id)cardSectionForNSUserActivity:(id)arg0 withConfig:(id)arg1 ;
+(id)cardSectionForUAUserActivityProxy:(id)arg0 withConfig:(id)arg1 ;
+(id)cardSectionForVoiceShortcutWithPhrase:(id)arg0 name:(id)arg1 description:(id)arg2 applicationBundleIdentifier:(id)arg3 config:(id)arg4 ;
+(id)cardSectionForVoiceShortcutWithPhrase:(id)arg0 name:(id)arg1 description:(id)arg2 keyImage:(id)arg3 applicationBundleIdentifier:(id)arg4 config:(id)arg5 ;
+(id)cardViewForATXAction:(id)arg0 withConfig:(id)arg1 ;
+(id)cardViewForHeroApp:(id)arg0 withConfig:(id)arg1 ;
+(id)cardViewForINIntent:(id)arg0 withConfig:(id)arg1 ;
+(id)cardViewForINInteraction:(id)arg0 withConfig:(id)arg1 ;
+(id)cardViewForNSUserActivity:(id)arg0 withConfig:(id)arg1 ;
+(id)cardViewForUAUserActivityProxy:(id)arg0 withConfig:(id)arg1 ;
+(id)cardViewForVoiceShortcutWithPhrase:(id)arg0 name:(id)arg1 description:(id)arg2 applicationBundleIdentifier:(id)arg3 config:(id)arg4 ;
+(id)cardViewForVoiceShortcutWithPhrase:(id)arg0 name:(id)arg1 description:(id)arg2 keyImage:(id)arg3 applicationBundleIdentifier:(id)arg4 config:(id)arg5 ;
+(id)cardViewReuseIdentifier;
+(void)_configureCardInfo:(id)arg0 forATXAction:(id)arg1 withConfig:(id)arg2 ;
+(void)_configureCardInfo:(id)arg0 forHeroApp:(id)arg1 withConfig:(id)arg2 ;
+(void)_configureCardInfo:(id)arg0 forINIntent:(id)arg1 withConfig:(id)arg2 ;
+(void)_configureCardInfo:(id)arg0 forINInteraction:(id)arg1 withConfig:(id)arg2 ;
+(void)_configureCardInfo:(id)arg0 forNSString:(id)arg1 withConfig:(id)arg2 ;
+(void)_configureCardInfo:(id)arg0 forNSUserActivity:(id)arg1 withConfig:(id)arg2 ;
+(void)_configureCardInfo:(id)arg0 forUAUserActivityProxy:(id)arg1 withConfig:(id)arg2 ;
+(void)_configureCardInfo:(id)arg0 forVoiceShortcutWithPhrase:(id)arg1 name:(id)arg2 description:(id)arg3 keyImage:(id)arg4 applicationBundleIdentifier:(id)arg5 config:(id)arg6 ;
+(void)initialize;


@end


#endif