// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASLOCATION_H
#define ASLOCATION_H

@class NSString;
@protocol NSSecureCoding;


#import "ASItem.h"

@interface ASLocation : ASItem <NSSecureCoding>



@property (retain, nonatomic) NSString *accuracy; // ivar: _accuracy
@property (retain, nonatomic) NSString *altitude; // ivar: _altitude
@property (retain, nonatomic) NSString *altitudeAccuracy; // ivar: _altitudeAccuracy
@property (retain, nonatomic) NSString *annotation; // ivar: _annotation
@property (retain, nonatomic) NSString *city; // ivar: _city
@property (retain, nonatomic) NSString *country; // ivar: _country
@property (retain, nonatomic) NSString *displayName; // ivar: _displayName
@property (retain, nonatomic) NSString *latitude; // ivar: _latitude
@property (retain, nonatomic) NSString *longitude; // ivar: _longitude
@property (retain, nonatomic) NSString *postalCode; // ivar: _postalCode
@property (retain, nonatomic) NSString *state; // ivar: _state
@property (retain, nonatomic) NSString *street; // ivar: _street


+(BOOL)supportsSecureCoding;
+(id)locationWithCalLocation:(*void)arg0 ;
-(BOOL)isEmptyLocation;
-(BOOL)isEqualToLocation:(id)arg0 ;
-(id)initWithApplicationData:(id)arg0 ;
-(id)initWithCalLocation:(*void)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTitle:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif