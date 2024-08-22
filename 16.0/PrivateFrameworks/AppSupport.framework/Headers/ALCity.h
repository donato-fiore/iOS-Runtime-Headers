// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ALCITY_H
#define ALCITY_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface ALCity : NSObject {
    NSString *_name;
    NSString *_unlocalizedName;
    NSString *_countryName;
    NSString *_unlocalizedCountryName;
    NSString *_countryOverride;
    NSString *_identifierForCPCity;
    BOOL _localizationAttempted;
}


@property (readonly, nonatomic) NSString *classicIdentifier;
@property (retain, nonatomic) NSString *countryName;
@property (retain, nonatomic) NSString *countryOverride;
@property (nonatomic) BOOL displayNameIncludingCountryShowsOnlyCountry; // ivar: _displayNameIncludingCountryShowsOnlyCountry
@property (nonatomic) int identifier; // ivar: _identifier
@property (nonatomic) float latitude; // ivar: _latitude
@property (retain, nonatomic) NSString *localeCode; // ivar: _localeCode
@property (nonatomic) float longitude; // ivar: _longitude
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) NSDictionary *properties;
@property (retain, nonatomic) NSString *timeZone; // ivar: _timeZone
@property (retain, nonatomic) NSString *unlocalizedCountryName;
@property (retain, nonatomic) NSString *unlocalizedCountryOverride; // ivar: _unlocalizedCountryOverride
@property (retain, nonatomic) NSString *unlocalizedName;
@property (retain, nonatomic) NSString *yahooCode; // ivar: _yahooCode


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)displayNameIncludingCountry:(BOOL)arg0 ;
-(id)displayNameIncludingCountry:(BOOL)arg0 withFormat:(id)arg1 ;
-(id)init;
-(id)initWithProperties:(id)arg0 ;
-(id)initWithSQLRow:(*char *)arg0 ;
-(void)dealloc;
-(void)ensureLocalized;


@end


#endif