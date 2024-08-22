// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKUSERDOMAINCONCEPTSTORE_H
#define HKUSERDOMAINCONCEPTSTORE_H

@class NSUUID, NSString;
@protocol _HKXPCExportable, HKUserDomainConceptStoreClientInterface, HKUserDomainConceptStoreDelegate;

#import <Foundation/Foundation.h>

#import "HKTaskServerProxyProvider.h"

@interface HKUserDomainConceptStore : NSObject <_HKXPCExportable, HKUserDomainConceptStoreClientInterface>

 {
    NSUUID *_identifier;
    HKTaskServerProxyProvider *_proxyProvider;
    os_unfair_lock_s _lock;
    id<HKUserDomainConceptStoreDelegate> *_delegate;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HKUserDomainConceptStoreDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)clientInterface;
+(id)serverInterface;
-(BOOL)_synchronouslyObserveUserDomainConceptChanges:(*id)arg0 ;
-(id)exportedInterface;
-(id)init;
-(id)initWithHealthStore:(id)arg0 ;
-(id)remoteInterface;
-(void)_clientQueue_notifyForChangesToUserDomainConcepts:(id)arg0 changeType:(NSInteger)arg1 ;
-(void)_createAndStoreUserDomainConceptBackedByOntologyConceptWithIdentifier:(id)arg0 supplementaryProperties:(id)arg1 userDomainConceptTypeIdentifier:(id)arg2 completion:(id)arg3 ;
-(void)_handleAutomaticProxyReconnection;
-(void)_observeUserDomainConceptChanges:(BOOL)arg0 completion:(id)arg1 ;
-(void)_storeUserDomainConcepts:(id)arg0 method:(NSInteger)arg1 completion:(id)arg2 ;
-(void)client_notifyForChangesToUserDomainConcepts:(id)arg0 changeType:(NSInteger)arg1 ;
-(void)connectionInvalidated;
-(void)deleteUserDomainConcept:(id)arg0 completion:(id)arg1 ;
-(void)deleteUserDomainConcepts:(id)arg0 completion:(id)arg1 ;
-(void)insertNewUserDomainConceptBackedByOntologyConceptWithIdentifier:(id)arg0 supplementaryProperties:(id)arg1 userDomainConceptTypeIdentifier:(id)arg2 completion:(id)arg3 ;
-(void)saveOrUpdateUserDomainConcept:(id)arg0 completion:(id)arg1 ;
-(void)saveOrUpdateUserDomainConcepts:(id)arg0 completion:(id)arg1 ;


@end


#endif