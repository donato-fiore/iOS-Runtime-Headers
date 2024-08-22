// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDPERSISTENCEHOOKREGISTRY_H
#define EDPERSISTENCEHOOKREGISTRY_H

@class NSString;
@protocol EFLoggable;

#import <Foundation/Foundation.h>


@interface EDPersistenceHookRegistry : NSObject <EFLoggable>

 {
    os_unfair_lock_s _lock;
    *__CFDictionary _hookRespondersBySelector;
    *__CFDictionary _methodSignaturesBySelector;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_proxiedProtocols;
+(id)log;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)_copyRespondersForSelector:(SEL)arg0 ;
-(id)init;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)_forwardStackInvocation:(id)arg0 ;
-(void)_initializeMethodSignatures;
-(void)_messageRespondersWithInvocation:(id)arg0 ;
-(void)_registerHookResponder:(id)arg0 protocol:(id)arg1 ;
-(void)_registerHookResponder:(id)arg0 withMethodDescription:(struct objc_method_description )arg1 ;
-(void)_registerSelector:(struct objc_method_description )arg0 ;
-(void)dealloc;
-(void)forwardInvocation:(id)arg0 ;
-(void)registerAccountChangeHookResponder:(id)arg0 ;
-(void)registerActivityHookResponder:(id)arg0 ;
-(void)registerBrandIndicatorChangeHookResponder:(id)arg0 ;
-(void)registerCloudStorageChangeHookResponder:(id)arg0 ;
-(void)registerDatabaseChangeHookResponder:(id)arg0 ;
-(void)registerMailboxChangeHookResponder:(id)arg0 ;
-(void)registerMessageChangeHookResponder:(id)arg0 ;
-(void)registerMessageDeliveryHookResponder:(id)arg0 ;
-(void)registerMessageReadHookResponder:(id)arg0 ;
-(void)registerProtectedDataReconciliationHookResponder:(id)arg0 ;
-(void)registerSearchableIndexHookResponder:(id)arg0 ;
-(void)registerSenderBucketChangeHookResponder:(id)arg0 ;
-(void)registerThreadChangeHookResponder:(id)arg0 ;
-(void)unregisterAllHookResponders;
-(void)unregisterHookResponder:(id)arg0 ;


@end


#endif