// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WORLDCLOCKCITY_H
#define WORLDCLOCKCITY_H

@class NSString, ALCity, NSNumber, NSURL, NSDictionary;

#import <Foundation/Foundation.h>


@interface WorldClockCity : NSObject {
    NSString *_timeZone;
    NSString *_name;
    NSString *_countryName;
    NSString *_countryCode;
    NSString *_unlocalizedName;
    NSString *_unlocalizedCountryName;
}


@property (readonly, nonatomic) ALCity *alCity; // ivar: _alCity
@property (readonly, nonatomic) NSNumber *alCityId;
@property (readonly, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) NSString *countryName;
@property (readonly, nonatomic) NSURL *idUrl;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSDictionary *properties;
@property (readonly, nonatomic) NSString *timeZone;
@property (readonly, nonatomic) NSString *unlocalizedCityName;
@property (readonly, nonatomic) NSString *unlocalizedCountryName;


+(BOOL)isCachedLanguageStaleForProperties:(id)arg0 ;
+(BOOL)isCachedLanguageStaleForProperties:(id)arg0 systemLanguage:(id)arg1 ;
+(BOOL)isWorldClockCityProperties:(id)arg0 ;
+(id)unlocalizedExampleCity;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithALCity:(id)arg0 ;
-(id)initWithALCityIdentifier:(int)arg0 ;
-(id)initWithProperties:(id)arg0 ;
-(id)initWithTimeZone:(id)arg0 countryCode:(id)arg1 name:(id)arg2 countryName:(id)arg3 unlocalizedName:(id)arg4 unlocalizedCountryName:(id)arg5 ;


@end


#endif