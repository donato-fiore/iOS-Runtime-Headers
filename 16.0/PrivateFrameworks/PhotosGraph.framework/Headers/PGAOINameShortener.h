// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGAOINAMESHORTENER_H
#define PGAOINAMESHORTENER_H


#import <Foundation/Foundation.h>


@interface PGAOINameShortener : NSObject



+(BOOL)isCountryWithAOISubstitutions:(id)arg0 ;
+(id)_shortenedAOIForName:(id)arg0 ;
+(id)s_aoiReplacementsDictionary;
+(id)shortenedAOIForAOINode:(id)arg0 locationHelper:(id)arg1 ;
+(void)_enumerateWordCombinationsForName:(id)arg0 usingBlock:(id)arg1 ;


@end


#endif