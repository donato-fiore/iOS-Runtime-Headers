// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IPFORMAT_H
#define IPFORMAT_H


#import <Foundation/Foundation.h>


@interface IPFormat : NSObject



+(CGFloat)sampleTime;
+(id)dateFormatFromFormatter:(id)arg0 style:(NSUInteger)arg1 ;
+(id)dateFormatterFromLanguage;
+(id)dateFormatterFromLocale;
+(id)localeFromDeviceLanguage;
+(id)numberFormatterFromLanguage;
+(id)numberFormatterFromLocale;
+(void)setDateFormat:(id)arg0 ;
+(void)setNumberFormat:(id)arg0 ;


@end


#endif