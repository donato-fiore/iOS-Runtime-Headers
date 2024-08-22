// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDCLIENTRESUMER_H
#define EDCLIENTRESUMER_H

@class NSString, BKSProcessAssertion;
@protocol EDProtectedDataReconciliationHookResponder, EFContentProtectionObserver, EDResumable, EDClientStateReporting, OS_dispatch_queue, EFScheduler;

#import <Foundation/Foundation.h>

#import "EDPersistenceHookRegistry.h"

@interface EDClientResumer : NSObject <EDProtectedDataReconciliationHookResponder, EFContentProtectionObserver, EDResumable>

 {
    NSString *_bundleID;
    BKSProcessAssertion *_assertion;
    id<EDClientStateReporting> *_clientState;
    EDPersistenceHookRegistry *_hookRegistry;
    NSObject<OS_dispatch_queue> *_queue;
    id<EFScheduler> *_scheduler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)log;
+(id)signpostLog;
-(NSUInteger)signpostID;
-(id)initWithClientBundleIdentifier:(id)arg0 hookRegistry:(id)arg1 clientState:(id)arg2 ;
-(void)contentProtectionStateChanged:(NSInteger)arg0 previousState:(NSInteger)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)persistenceDidReconcileProtectedData;
-(void)resumeForUpdates;


@end


#endif