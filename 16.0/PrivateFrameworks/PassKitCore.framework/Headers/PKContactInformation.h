// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKCONTACTINFORMATION_H
#define PKCONTACTINFORMATION_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKContactInformation : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSArray *emailAddresses; // ivar: _emailAddresses
@property (readonly, nonatomic) NSArray *phoneNumbers; // ivar: _phoneNumbers
@property (readonly, nonatomic) NSArray *postalAddresses; // ivar: _postalAddresses


+(BOOL)supportsSecureCoding;
+(id)_keychainWrapper;
+(id)contactInformationFromKeychain;
+(void)deleteContactInformationFromKeychain;
+(void)saveContactInformationToKeychain:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithKeychainData:(id)arg0 ;
-(id)initWithPostalAddresses:(id)arg0 emailAddresses:(id)arg1 phoneNumbers:(id)arg2 ;
-(id)keychainData;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif