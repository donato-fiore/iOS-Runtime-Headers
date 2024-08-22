// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGSIMPLENAMEDEMAILADDRESS_H
#define SGSIMPLENAMEDEMAILADDRESS_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SGSimpleNamedEmailAddress : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSString *emailAddress; // ivar: _emailAddress
@property (readonly, nonatomic) NSString *name; // ivar: _name


+(BOOL)supportsSecureCoding;
+(id)emailToNameDictionaryWithNamedEmailAddresses:(id)arg0 ;
+(id)namedEmailAddressWithCSPerson:(id)arg0 ;
+(id)namedEmailAddressWithFieldValue:(id)arg0 ;
+(id)namedEmailAddressesWithEmailToNameDictionary:(id)arg0 ;
+(id)namedEmailAddressesWithFieldValues:(id)arg0 ;
+(id)serializeAll:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToNamedEmailAddress:(id)arg0 ;
-(NSUInteger)hash;
-(id)asCSPerson;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 emailAddress:(id)arg1 ;
-(id)initWithNamedHandle:(id)arg0 ;
-(id)serialized;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif