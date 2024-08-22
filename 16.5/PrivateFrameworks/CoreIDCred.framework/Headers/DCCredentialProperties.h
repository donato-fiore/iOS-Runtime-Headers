// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DCCREDENTIALPROPERTIES_H
#define DCCREDENTIALPROPERTIES_H

@class NSDate, NSString, NSDictionary, NSData, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "DCCredentialOptions.h"

@interface DCCredentialProperties : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSDate *createdAt; // ivar: _createdAt
@property (retain, nonatomic) NSString *credentialIdentifier; // ivar: _credentialIdentifier
@property (nonatomic) NSUInteger credentialState; // ivar: _credentialState
@property (retain, nonatomic) NSDictionary *deviceEncryptionKeys; // ivar: _deviceEncryptionKeys
@property (nonatomic) BOOL hasUsablePresentmentAuthPolicy; // ivar: _hasUsablePresentmentAuthPolicy
@property (retain, nonatomic) NSDictionary *keySigningKeys; // ivar: _keySigningKeys
@property (nonatomic) BOOL needsPresentmentKeyRefresh; // ivar: _needsPresentmentKeyRefresh
@property (retain, nonatomic) DCCredentialOptions *options; // ivar: _options
@property (retain, nonatomic) NSString *partition; // ivar: _partition
@property (retain, nonatomic) NSData *payloadIngestionHash; // ivar: _payloadIngestionHash
@property (retain, nonatomic) NSArray *payloadProtectionKeys; // ivar: _payloadProtectionKeys
@property (retain, nonatomic) NSDate *payloadValidFrom; // ivar: _payloadValidFrom
@property (retain, nonatomic) NSDate *payloadValidUntil; // ivar: _payloadValidUntil
@property (retain, nonatomic) NSDictionary *presentmentKeys; // ivar: _presentmentKeys
@property (retain, nonatomic) NSDate *updatedAt; // ivar: _updatedAt


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif