// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKBACKGROUNDCONTACTLESSINTERFACESESSIONCONTROLLER_H
#define PKBACKGROUNDCONTACTLESSINTERFACESESSIONCONTROLLER_H

@class PKPaymentSessionHandle, PKContactlessInterfaceSession, NSString, PKSecureElementPass;
@protocol PKContactlessInterfaceSessionDelegate;

#import <Foundation/Foundation.h>


@interface PKBackgroundContactlessInterfaceSessionController : NSObject <PKContactlessInterfaceSessionDelegate>

 {
    id *_relinquishOwnershipBlock;
    NSUInteger _lifecycleState;
    PKPaymentSessionHandle *_sessionHandle;
    PKContactlessInterfaceSession *_session;
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasActiveSession;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PKSecureElementPass *pass; // ivar: _pass
@property (readonly) Class superclass;


-(id)claimActiveSession;
-(id)initWithFieldProperties:(id)arg0 forPassUniqueID:(id)arg1 relinquishOwnership:(id)arg2 ;
-(void)_processContext:(id)arg0 ;
-(void)contactlessInterfaceSession:(id)arg0 didEndPersistentCardEmulationWithContext:(id)arg1 ;
-(void)contactlessInterfaceSession:(id)arg0 didFinishTransactionWithContext:(id)arg1 ;
-(void)contactlessInterfaceSessionDidTerminate:(id)arg0 ;
-(void)contactlessInterfaceSessionDidTerminate:(id)arg0 withErrorCode:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)setSession:(id)arg0 ;
-(void)start;


@end


#endif