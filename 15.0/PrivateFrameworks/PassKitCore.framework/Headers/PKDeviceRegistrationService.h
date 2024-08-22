// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKDEVICEREGISTRATIONSERVICE_H
#define PKDEVICEREGISTRATIONSERVICE_H


#import <Foundation/Foundation.h>

#import "PKXPCService.h"

@interface PKDeviceRegistrationService : NSObject {
    PKXPCService *_remoteService;
    BOOL _isRegistering;
}




+(id)sharedInstance;
-(id)_remoteObjectProxy;
-(id)_remoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)_remoteObjectProxyWithFailureHandler:(id)arg0 ;
-(id)_remoteObjectProxyWithSemaphore:(id)arg0 ;
-(id)init;
-(void)dealloc;
-(void)performDeviceRegistrationForReason:(id)arg0 brokerURL:(id)arg1 actionType:(NSInteger)arg2 completion:(id)arg3 ;
-(void)performDeviceRegistrationWithCompletion:(id)arg0 ;


@end


#endif