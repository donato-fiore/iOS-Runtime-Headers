// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHHANDLE_H
#define CHHANDLE_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CHHandle : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSString *normalizedValue; // ivar: _normalizedValue
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (readonly, copy, nonatomic) NSString *value; // ivar: _value


+(BOOL)supportsSecureCoding;
+(NSInteger)handleTypeForValue:(id)arg0 ;
+(id)normalizedEmailAddressHandleForValue:(id)arg0 ;
+(id)normalizedGenericHandleForValue:(id)arg0 ;
+(id)normalizedPhoneNumberHandleForValue:(id)arg0 isoCountryCode:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToHandle:(id)arg0 ;
-(BOOL)isTemporary;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHandle:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 value:(id)arg1 ;
-(id)initWithType:(NSInteger)arg0 value:(id)arg1 normalizedValue:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif