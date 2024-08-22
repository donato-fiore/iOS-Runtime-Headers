// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKIDENTITYCONFIGURATION_H
#define CRKIDENTITYCONFIGURATION_H

@class NSString, NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CRKIdentityConfiguration : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) BOOL addsClientAuthAndServerAuthEKUs; // ivar: _addsClientAuthAndServerAuthEKUs
@property (readonly, copy, nonatomic) NSString *commonName; // ivar: _commonName
@property (nonatomic) BOOL createsCertificateAuthority; // ivar: _createsCertificateAuthority
@property (readonly, copy, nonatomic) NSData *dataRepresentation;
@property (copy, nonatomic) NSString *emailAddress; // ivar: _emailAddress
@property (nonatomic) unsigned int hashingAlgorithm; // ivar: _hashingAlgorithm
@property (nonatomic) NSInteger keySizeInBits; // ivar: _keySizeInBits


+(BOOL)defaultCreatesCertificateAuthority;
+(BOOL)supportsSecureCoding;
+(NSInteger)defaultKeySizeInBits;
+(id)configurationWithData:(id)arg0 ;
+(unsigned int)defaultHashingAlgorithm;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCommonName:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif