// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IPFORMAT_H
#define IPFORMAT_H


#import <Foundation/Foundation.h>


@interface IPFormat : NSObject



+(id)localeFromDeviceLanguage;
+(id)localeFromDeviceLocale;
+(id)numberFormatterFromLanguage;
+(id)numberFormatterFromLocale;
+(void)setNumberFormat:(id)arg0 ;


@end


#endif