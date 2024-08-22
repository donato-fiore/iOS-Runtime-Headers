// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLSHXPCASSERTIONSERVICEHOST_H
#define BLSHXPCASSERTIONSERVICEHOST_H

@class BSProcessHandle, NSMutableDictionary, NSString;
@protocol BLSXPCAssertionServiceHostInterface, BSInvalidatable, BLSAssertionService;

#import <Foundation/Foundation.h>


@interface BLSHXPCAssertionServiceHost : NSObject <BLSXPCAssertionServiceHostInterface, BSInvalidatable>

 {
    id<BLSAssertionService> *_localService;
    BSProcessHandle *_remoteProcessHandle;
    NSMutableDictionary *_assertionProxies;
    os_unfair_lock_s _lock;
    BOOL _valid;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)acquireAssertionForDescriptor:(id)arg0 error:(*id)arg1 ;
-(id)initWithLocalService:(id)arg0 peer:(id)arg1 ;
-(void)acquireAssertion:(id)arg0 ;
-(void)cancelAssertion:(id)arg0 withError:(id)arg1 ;
-(void)dealloc;
-(void)destroyAssertion:(id)arg0 ;
-(void)invalidate;
-(void)restartAssertionTimeoutTimer:(id)arg0 ;


@end


#endif