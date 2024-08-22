// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKINHERITANCEACCESSKEY_H
#define AKINHERITANCEACCESSKEY_H

@class NSUUID, NSData, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface AKInheritanceAccessKey : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSUUID *beneficiaryID; // ivar: _beneficiaryID
@property (retain, nonatomic) NSData *claimTokenData; // ivar: _claimTokenData
@property (retain, nonatomic) NSString *claimTokenString; // ivar: _claimTokenString
@property (retain, nonatomic) NSData *wrappedKeyData; // ivar: _wrappedKeyData
@property (retain, nonatomic) NSString *wrappedKeyString; // ivar: _wrappedKeyString
@property (retain, nonatomic) NSData *wrappingKeyData; // ivar: _wrappingKeyData
@property (retain, nonatomic) NSString *wrappingKeyString; // ivar: _wrappingKeyString


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithBeneficiairyIdentifier:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif