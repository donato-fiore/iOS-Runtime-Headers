// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IPNUMBERFORMAT_H
#define IPNUMBERFORMAT_H

@class NSString, NSLocale;

#import <Foundation/Foundation.h>


@interface IPNumberFormat : NSObject

@property (readonly, nonatomic) NSString *formattedNumber; // ivar: _formattedNumber
@property (readonly, nonatomic) NSLocale *locale; // ivar: _locale


+(id)availableFormats;
+(id)candidateLocales;
+(id)currentFormat;
+(id)formattedNumberInLocale:(id)arg0 ;
+(id)formattedNumberUsingSeparatorsFromLocale:(id)arg0 ;
+(id)formatterInLocale:(id)arg0 ;
+(id)formatterUsingSeparatorsFromLocale:(id)arg0 ;
+(void)setFormat:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithLocale:(id)arg0 formattedNumber:(id)arg1 ;


@end


#endif