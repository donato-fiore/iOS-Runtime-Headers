// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _NBPHONENUMBER_H
#define _NBPHONENUMBER_H

@class NSNumber, NSString;
@protocol NSCopying, NSCoding;

#import <Foundation/Foundation.h>


@interface _NBPhoneNumber : NSObject <NSCopying, NSCoding>



@property (retain, nonatomic) NSNumber *countryCode; // ivar: _countryCode
@property (retain, nonatomic) NSNumber *countryCodeSource; // ivar: _countryCodeSource
@property (retain, nonatomic) NSString *extension; // ivar: _extension
@property (nonatomic) BOOL italianLeadingZero; // ivar: _italianLeadingZero
@property (retain, nonatomic) NSNumber *nationalNumber; // ivar: _nationalNumber
@property (retain, nonatomic) NSNumber *numberOfLeadingZeros; // ivar: _numberOfLeadingZeros
@property (retain, nonatomic) NSString *preferredDomesticCarrierCode; // ivar: _preferredDomesticCarrierCode
@property (retain, nonatomic) NSString *rawInput; // ivar: _rawInput


-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)getCountryCodeSourceOrDefault;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)clearCountryCodeSource;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif