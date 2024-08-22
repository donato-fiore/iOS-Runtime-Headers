// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DCCREDENTIALPROPERTIES_H
#define DCCREDENTIALPROPERTIES_H

@class NSDate, NSString, NSDictionary, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "DCCredentialOptions.h"

@interface DCCredentialProperties : NSObject <NSSecureCoding>



@property (retain) NSDate *createdAt; // ivar: _createdAt
@property (retain) NSString *credentialIdentifier; // ivar: _credentialIdentifier
@property NSUInteger credentialState; // ivar: _credentialState
@property (retain) NSDictionary *deviceEncryptionKeys; // ivar: _deviceEncryptionKeys
@property BOOL hasUsablePresentmentAuthPolicy; // ivar: _hasUsablePresentmentAuthPolicy
@property (retain) NSDictionary *keySigningKeys; // ivar: _keySigningKeys
@property (retain) DCCredentialOptions *options; // ivar: _options
@property (retain) NSString *partition; // ivar: _partition
@property (retain) NSArray *payloadProtectionKeys; // ivar: _payloadProtectionKeys
@property (retain) NSDate *payloadValidFrom; // ivar: _payloadValidFrom
@property (retain) NSDate *payloadValidUntil; // ivar: _payloadValidUntil
@property (retain) NSDictionary *presentmentKeys; // ivar: _presentmentKeys
@property (retain) NSDate *updatedAt; // ivar: _updatedAt


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif