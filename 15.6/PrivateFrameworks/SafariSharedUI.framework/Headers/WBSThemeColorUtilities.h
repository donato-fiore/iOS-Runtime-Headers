// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSTHEMECOLORUTILITIES_H
#define WBSTHEMECOLORUTILITIES_H


#import <Foundation/Foundation.h>


@interface WBSThemeColorUtilities : NSObject



+(BOOL)shouldIgnoreThemeColorForContrastWithActiveTab:(id)arg0 privateBrowsingEnabled:(BOOL)arg1 ;
+(BOOL)shouldOverrideTintColorForThemeColor:(id)arg0 ;
+(id)overrideTabColorForThemeColor:(id)arg0 ;
+(id)updateThemeColorForWebView:(id)arg0 darkModeEnabled:(BOOL)arg1 ;
+(id)updateThemeColorForWebView:(id)arg0 darkModeEnabled:(BOOL)arg1 allowFallbackColors:(BOOL)arg2 updateUnderPageBackgroundColor:(BOOL)arg3 ;


@end


#endif