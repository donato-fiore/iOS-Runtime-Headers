// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKENCRYPTEDPUSHPROVISIONINGTARGET_H
#define PKENCRYPTEDPUSHPROVISIONINGTARGET_H

@class NSData;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKEncryptedPushProvisioningTarget : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSData *data; // ivar: _data
@property (copy, nonatomic) NSData *ephemeralPublicKey; // ivar: _ephemeralPublicKey
@property (copy, nonatomic) NSData *publicKeyHash; // ivar: _publicKeyHash
@property (nonatomic) NSUInteger source; // ivar: _source
@property (nonatomic) NSUInteger status; // ivar: _status
@property (nonatomic) NSUInteger targetDevice; // ivar: _targetDevice


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToEncryptedProvisioningTarget:(id)arg0 ;
-(NSUInteger)hash;
-(id)asWebServiceDictionary;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif