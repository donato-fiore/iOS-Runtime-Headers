// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IDSDEVICEIDENTITY_H
#define IDSDEVICEIDENTITY_H

@class NSString;
@protocol ENDeviceKey, ENDevicePublicKey;

#import <Foundation/Foundation.h>

#import "IDSAccountIdentity.h"
#import "IDSMPFullLegacyIdentity.h"
#import "IDSMPFullDeviceIdentity.h"

@interface IDSDeviceIdentity : NSObject <ENDeviceKey>



@property (readonly, nonatomic) IDSAccountIdentity *accountIdentity; // ivar: _accountIdentity
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<ENDevicePublicKey> *devicePublicKey;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) IDSMPFullLegacyIdentity *legacyIdentity; // ivar: _legacyIdentity
@property (readonly, nonatomic) IDSMPFullDeviceIdentity *modernIdentity; // ivar: _modernIdentity
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLegacyIdentity:(id)arg0 modernIdentity:(id)arg1 accountIdentity:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif