// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKCONTACT_H
#define PKCONTACT_H

@class NSString, NSPersonNameComponents, CNPhoneNumber, CNPostalAddress;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKContact : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *contactHandle;
@property (retain, nonatomic) NSString *emailAddress; // ivar: _emailAddress
@property (retain, nonatomic) NSPersonNameComponents *name; // ivar: _name
@property (retain, nonatomic) CNPhoneNumber *phoneNumber; // ivar: _phoneNumber
@property (retain, nonatomic) CNPostalAddress *postalAddress; // ivar: _postalAddress
@property (retain, nonatomic) NSString *supplementarySubLocality; // ivar: _supplementarySubLocality


+(BOOL)supportsSecureCoding;
+(NSInteger)version;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToContact:(id)arg0 ;
-(NSUInteger)hash;
-(id)cnMutableContact;
-(id)dictionaryRepresentation;
-(id)initWithCNContact:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif