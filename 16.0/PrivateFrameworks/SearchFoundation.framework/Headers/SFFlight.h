// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFFLIGHT_H
#define SFFLIGHT_H

@class NSString, NSDictionary, NSData, NSArray;
@protocol SFFlight, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SFFlight : NSObject <SFFlight, NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *carrierCode; // ivar: _carrierCode
@property (copy, nonatomic) NSString *carrierName; // ivar: _carrierName
@property (copy, nonatomic) NSString *carrierPhoneNumber; // ivar: _carrierPhoneNumber
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (copy, nonatomic) NSString *flightID; // ivar: _flightID
@property (copy, nonatomic) NSString *flightNumber; // ivar: _flightNumber
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *legs; // ivar: _legs
@property (copy, nonatomic) NSString *operatorCarrierCode; // ivar: _operatorCarrierCode
@property (copy, nonatomic) NSString *operatorFlightNumber; // ivar: _operatorFlightNumber
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif