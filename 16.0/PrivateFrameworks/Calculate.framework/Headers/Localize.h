// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LOCALIZE_H
#define LOCALIZE_H


#import <Foundation/Foundation.h>


@interface Localize : NSObject



+(id)availableLocaleNames;
+(id)formatString:(id)arg0 withExponent:(int)arg1 formatter:(id)arg2 ;
+(id)localizationForLocale:(id)arg0 ;
+(id)localizedStringForKey:(id)arg0 value:(id)arg1 table:(id)arg2 localization:(id)arg3 ;
+(id)localizedStringsForTable:(id)arg0 localization:(id)arg1 ;
+(id)mainBundle;
+(id)systemLocale;
+(id)systemLocales;


@end


#endif