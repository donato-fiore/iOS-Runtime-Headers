// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKNFCPAYLOAD_H
#define PKNFCPAYLOAD_H

@class NSData, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKNFCPayload : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSData *encryptionPublicKeyData; // ivar: _encryptionPublicKeyData
@property (copy, nonatomic) NSString *message; // ivar: _message
@property (nonatomic) BOOL requiresAuthentication; // ivar: _requiresAuthentication


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPKNFCPayload:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNFCDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif