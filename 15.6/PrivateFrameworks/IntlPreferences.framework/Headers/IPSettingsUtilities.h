// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IPSETTINGSUTILITIES_H
#define IPSETTINGSUTILITIES_H


#import <Foundation/Foundation.h>


@interface IPSettingsUtilities : NSObject



+(void)mirrorToWatchIfNecessary;
+(void)runPostLanguageChangeOperations;
+(void)setLanguage:(id)arg0 ;
+(void)setLanguageAndRegion:(id)arg0 ;
+(void)setRegion:(id)arg0 ;
+(void)writeLanguageAndLocaleConfigurationIfNeededWithCompletion:(id)arg0 ;


@end


#endif