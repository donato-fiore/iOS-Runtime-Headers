// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPUTILS_H
#define PPUTILS_H


#import <Foundation/Foundation.h>


@interface PPUtils : NSObject



+(BOOL)isFirstPartyApp:(id)arg0 ;
+(BOOL)isInternalDevice;
+(BOOL)localizedTimeStructForDate:(id)arg0 tm:(struct tm *)arg1 ;
+(BOOL)localizedTimeStructForSecondsFrom1970:(CGFloat)arg0 tm:(struct tm *)arg1 ;
+(BOOL)yesWithProbability:(CGFloat)arg0 ;
+(CGFloat)jaroSimilarityForString:(id)arg0 other:(id)arg1 ;
+(NSInteger)compareDouble:(CGFloat)arg0 withDouble:(CGFloat)arg1 ;
+(NSInteger)reverseCompareDouble:(CGFloat)arg0 withDouble:(CGFloat)arg1 ;
+(id)Sha256ForData:(id)arg0 withSalt:(id)arg1 ;
+(id)coordinatesToGeoHashWithLength:(NSUInteger)arg0 latitude:(CGFloat)arg1 longitude:(CGFloat)arg2 ;
+(id)currentLocaleLanguageCode;
+(id)formatStringArray:(id)arg0 truncatingAtLength:(NSUInteger)arg1 ;
+(id)hexOfBytes:(*void)arg0 size:(NSUInteger)arg1 ;
+(id)hexUUID;
+(id)osBuild;
+(id)preferredLanguages;
+(id)reduceSpotlightDomainIdentifiers:(id)arg0 ;
+(id)sqliteGlobEscape:(id)arg0 ;
+(void)enumerateChunksOfSize:(NSUInteger)arg0 fromArray:(id)arg1 usingBlock:(id)arg2 ;


@end


#endif