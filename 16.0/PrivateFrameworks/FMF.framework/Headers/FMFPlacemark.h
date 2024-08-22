// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FMFPLACEMARK_H
#define FMFPLACEMARK_H

@class NSString, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FMFPlacemark : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSString *administrativeArea; // ivar: _administrativeArea
@property (retain, nonatomic) NSString *country; // ivar: _country
@property (retain, nonatomic) NSArray *formattedAddressLines; // ivar: _formattedAddressLines
@property (retain, nonatomic) NSString *locality; // ivar: _locality
@property (retain, nonatomic) NSString *state; // ivar: _state
@property (retain, nonatomic) NSString *streetAddress; // ivar: _streetAddress
@property (retain, nonatomic) NSString *streetName; // ivar: _streetName


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryValue;
-(id)formattedAddress;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithLocality:(id)arg0 administrativeArea:(id)arg1 country:(id)arg2 state:(id)arg3 streetAddress:(id)arg4 streetName:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif