// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFAIRPORT_H
#define SFAIRPORT_H

@class NSString, NSDictionary, NSData, NSTimeZone;
@protocol SFAirport, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "SFLatLng.h"

@interface SFAirport : NSObject <SFAirport, NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *city; // ivar: _city
@property (copy, nonatomic) NSString *code; // ivar: _code
@property (copy, nonatomic) NSString *country; // ivar: _country
@property (copy, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (copy, nonatomic) NSString *district; // ivar: _district
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SFLatLng *location; // ivar: _location
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSString *postalCode; // ivar: _postalCode
@property (copy, nonatomic) NSString *state; // ivar: _state
@property (copy, nonatomic) NSString *street; // ivar: _street
@property (readonly) Class superclass;
@property (copy, nonatomic) NSTimeZone *timezone; // ivar: _timezone


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif