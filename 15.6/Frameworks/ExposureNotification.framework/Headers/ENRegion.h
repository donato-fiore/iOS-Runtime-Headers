// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ENREGION_H
#define ENREGION_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface ENRegion : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (readonly, copy, nonatomic) NSString *regionCode;
@property (readonly, copy, nonatomic) NSString *subdivisionCode; // ivar: _subdivisionCode


+(BOOL)supportsSecureCoding;
+(BOOL)validSubdivisionCode:(id)arg0 forCountryCode:(id)arg1 ;
+(id)regionFromServerResponseDictionary:(id)arg0 ;
+(id)regionWithCode:(id)arg0 ;
-(BOOL)isCountryCodeEqualToRegion:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isSubdivisionCodeEqualToRegion:(id)arg0 ;
-(BOOL)validSubdivisionCode;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCountryCode:(id)arg0 ;
-(id)initWithCountryCode:(id)arg0 subdivisionCode:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif