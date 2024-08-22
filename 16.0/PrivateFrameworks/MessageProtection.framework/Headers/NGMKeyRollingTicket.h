// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NGMKEYROLLINGTICKET_H
#define NGMKEYROLLINGTICKET_H


#import <Foundation/Foundation.h>

#import "NGMFullPrekey.h"
#import "NGMPublicDeviceIdentity.h"

@interface NGMKeyRollingTicket : NSObject

@property (readonly, nonatomic) NGMFullPrekey *prekey; // ivar: _prekey
@property (readonly, nonatomic) NGMPublicDeviceIdentity *registrationInfo; // ivar: _registrationInfo


-(id)identityData;
-(id)initTicketWithSigningKey:(id)arg0 error:(*id)arg1 ;
-(id)publicDeviceIdentity;


@end


#endif