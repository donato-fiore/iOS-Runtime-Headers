// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RPDEVICECONTEXT_H
#define RPDEVICECONTEXT_H


#import <Foundation/Foundation.h>

#import "RPDevice.h"
#import "RPLegacyDeviceDiscovery.h"
#import "RPLegacySession.h"

@interface RPDeviceContext : NSObject

@property (retain, nonatomic) RPDevice *device; // ivar: _device
@property (retain, nonatomic) RPLegacyDeviceDiscovery *discovery; // ivar: _discovery
@property (nonatomic) BOOL reported; // ivar: _reported
@property (retain, nonatomic) RPLegacySession *session; // ivar: _session
@property (nonatomic) int state; // ivar: _state


-(void)invalidate;
-(void)pairVerify;
-(void)systemInfoResponse:(id)arg0 error:(id)arg1 ;


@end


#endif