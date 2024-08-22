// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKPRIVATEIDENTITY_H
#define CRKPRIVATEIDENTITY_H

@class NSString, NSDate, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CRKPrivateIdentity : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *commonNamePrefix; // ivar: _commonNamePrefix
@property (retain, nonatomic) NSDate *identityExpirationDate; // ivar: _identityExpirationDate
@property (retain, nonatomic) NSData *identityPersistentId; // ivar: _identityPersistentId
@property (retain, nonatomic) NSDate *stagedIdentityExpirationDate; // ivar: _stagedIdentityExpirationDate
@property (retain, nonatomic) NSData *stagedIdentityPersistentId; // ivar: _stagedIdentityPersistentId


+(BOOL)supportsSecureCoding;
+(id)commonNameWithPrefix:(id)arg0 ;
+(id)freshPrivateIdentityWithCommonNamePrefix:(id)arg0 ;
+(id)keychainGroup;
+(id)makeIdentityWithCommonName:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)refreshIdentities;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryValue;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithIdentityPersistentId:(id)arg0 stagedIdentityPersistentId:(id)arg1 commonNamePrefix:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif