// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PDDEVICEREGISTRATIONSERVICE_H
#define PDDEVICEREGISTRATIONSERVICE_H

@class NSString;
@protocol PDDeviceRegistrationServiceExportedInterface;


#import "PDXPCService.h"
#import "PKEntitlementWhitelist.h"
#import "PDDeviceRegistrationServiceCoordinator.h"

@interface PDDeviceRegistrationService : PDXPCService <PDDeviceRegistrationServiceExportedInterface>

 {
    PKEntitlementWhitelist *_whitelist;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PDDeviceRegistrationServiceCoordinator *deviceRegistrationServiceCoordinator; // ivar: _deviceRegistrationServiceCoordinator
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithConnection:(id)arg0 ;
-(void)performDeviceRegistrationForReason:(id)arg0 brokerURL:(id)arg1 actionType:(NSInteger)arg2 completion:(id)arg3 ;


@end


#endif