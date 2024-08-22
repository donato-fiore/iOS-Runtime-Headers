// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PODEVICECONFIGURATION_H
#define PODEVICECONFIGURATION_H

@class NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PODeviceConfiguration : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSData *_deviceEncryptionKeyData; // ivar: __deviceEncryptionKeyData
@property (retain, nonatomic) NSData *_deviceSigningKeyData; // ivar: __deviceSigningKeyData
@property (nonatomic) *__SecCertificate deviceEncryptionCertificate; // ivar: _deviceEncryptionCertificate
@property (readonly) *__SecIdentity deviceEncryptionIdentity;
@property (nonatomic) *__SecKey deviceEncryptionKey; // ivar: _deviceEncryptionKey
@property (nonatomic) *__SecCertificate deviceSigningCertificate; // ivar: _deviceSigningCertificate
@property (readonly) *__SecIdentity deviceSigningIdentity;
@property (nonatomic) *__SecKey deviceSigningKey; // ivar: _deviceSigningKey
@property BOOL registrationCompleted; // ivar: _registrationCompleted


+(BOOL)supportsSecureCoding;
-(id)dataRepresentation;
-(id)dataRepresentationForDisplay:(BOOL)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif