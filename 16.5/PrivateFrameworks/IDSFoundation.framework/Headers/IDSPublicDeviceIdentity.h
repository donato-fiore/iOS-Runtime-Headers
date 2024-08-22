// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSPUBLICDEVICEIDENTITY_H
#define IDSPUBLICDEVICEIDENTITY_H

@class NSString;
@protocol ENDevicePublicKey;

#import <Foundation/Foundation.h>

#import "IDSPublicAccountIdentity.h"
#import "IDSMPPublicLegacyIdentity.h"
#import "IDSMPPublicDeviceIdentity.h"

@interface IDSPublicDeviceIdentity : NSObject <ENDevicePublicKey>



@property (readonly, nonatomic) IDSPublicAccountIdentity *accountIdentity; // ivar: _accountIdentity
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) IDSMPPublicLegacyIdentity *legacyIdentity; // ivar: _legacyIdentity
@property (readonly, nonatomic) IDSMPPublicDeviceIdentity *modernIdentity; // ivar: _modernIdentity
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPublicLegacyIdentity:(id)arg0 modernIdentity:(id)arg1 accountIdentity:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif