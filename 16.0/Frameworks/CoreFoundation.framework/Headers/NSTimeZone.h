// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSTIMEZONE_H
#define NSTIMEZONE_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "NSData.h"

@interface NSTimeZone : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy) NSData *data;
@property (readonly, copy) NSString *name;


+(BOOL)supportsSecureCoding;
+(id)abbreviationDictionary;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)defaultTimeZone;
+(id)knownTimeZoneNames;
+(id)localTimeZone;
+(id)systemTimeZone;
+(id)timeZoneDataVersion;
+(id)timeZoneForSecondsFromGMT:(NSInteger)arg0 ;
+(id)timeZoneWithAbbreviation:(id)arg0 ;
+(id)timeZoneWithName:(id)arg0 ;
+(id)timeZoneWithName:(id)arg0 data:(id)arg1 ;
+(void)resetSystemTimeZone;
+(void)setAbbreviationDictionary:(id)arg0 ;
+(void)setDefaultTimeZone:(id)arg0 ;
-(BOOL)isDaylightSavingTime;
-(BOOL)isDaylightSavingTimeForDate:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToTimeZone:(id)arg0 ;
-(BOOL)isNSTimeZone__;
-(CGFloat)daylightSavingTimeOffset;
-(CGFloat)daylightSavingTimeOffsetForDate:(id)arg0 ;
-(NSInteger)secondsFromGMT;
-(NSInteger)secondsFromGMTForDate:(id)arg0 ;
-(NSUInteger)_cfTypeID;
-(NSUInteger)hash;
-(id)abbreviation;
-(id)abbreviationForDate:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 ;
-(id)initWithName:(id)arg0 data:(id)arg1 ;
-(id)localizedName:(NSInteger)arg0 locale:(id)arg1 ;
-(id)nextDaylightSavingTimeTransition;
-(id)nextDaylightSavingTimeTransitionAfterDate:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif