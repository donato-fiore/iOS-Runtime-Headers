// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PCMAPLOCATION_H
#define PCMAPLOCATION_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PCMapLocation : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSString *airportCode; // ivar: _airportCode
@property (retain, nonatomic) NSString *airportName; // ivar: _airportName
@property (retain, nonatomic) NSString *countryName; // ivar: _countryName
@property (nonatomic) float latitude; // ivar: _latitude
@property (retain, nonatomic) NSString *locationName; // ivar: _locationName
@property (nonatomic) float longitude; // ivar: _longitude
@property (retain, nonatomic) NSString *name; // ivar: _name


+(BOOL)supportsSecureCoding;
+(id)dictionaryFromArrayOfLocations:(id)arg0 ;
+(void)removeLocationsFromArray:(id)arg0 withinDistance:(float)arg1 ofSameLocationsInDictionary:(id)arg2 ;
-(BOOL)hasSamePositionAsLocation:(id)arg0 tolerance:(float)arg1 ;
-(BOOL)isEqualToLocation:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)stringRepresentation;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif