// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKTRUSTEDDEVICEENROLLMENTINFOPROVIDER_H
#define PKTRUSTEDDEVICEENROLLMENTINFOPROVIDER_H


#import <Foundation/Foundation.h>

#import "PKXPCService.h"

@interface PKTrustedDeviceEnrollmentInfoProvider : NSObject {
    PKXPCService *_remoteService;
}




-(id)_existingRemoteObjectProxy;
-(id)_remoteObjectProxy;
-(id)_remoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)_remoteObjectProxyWithFailureHandler:(id)arg0 ;
-(id)init;
-(void)trustedDeviceEnrollmentInfoWithCompletion:(id)arg0 ;
-(void)trustedDeviceEnrollmentSignatureForDevice:(NSUInteger)arg0 accountDSID:(id)arg1 sessionData:(id)arg2 completion:(id)arg3 ;


@end


#endif