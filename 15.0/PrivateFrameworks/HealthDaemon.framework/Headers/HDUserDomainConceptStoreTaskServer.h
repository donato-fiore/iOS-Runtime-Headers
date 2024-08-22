// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDUSERDOMAINCONCEPTSTORETASKSERVER_H
#define HDUSERDOMAINCONCEPTSTORETASKSERVER_H

@class NSString;
@protocol HDUserDomainConceptObserver, HKUserDomainConceptStoreServerInterface;


#import "HDStandardTaskServer.h"
#import "HDUserDomainConceptManager.h"

@interface HDUserDomainConceptStoreTaskServer : HDStandardTaskServer <HDUserDomainConceptObserver, HKUserDomainConceptStoreServerInterface>

 {
    HDUserDomainConceptManager *_userDomainConceptManager;
    os_unfair_lock_s _lock;
    BOOL _shouldObserveChanges;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)taskIdentifier;
-(id)exportedInterface;
-(id)initWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 ;
-(id)remoteInterface;
-(void)dealloc;
-(void)remote_observeUserDomainConceptChanges:(BOOL)arg0 completion:(id)arg1 ;
-(void)remote_storeUserDomainConcepts:(id)arg0 method:(NSInteger)arg1 completion:(id)arg2 ;
-(void)userDomainConceptManager:(id)arg0 didAddUserDomainConcepts:(id)arg1 ;
-(void)userDomainConceptManager:(id)arg0 didDeleteUserDomainConcepts:(id)arg1 ;
-(void)userDomainConceptManager:(id)arg0 didJournalUserDomainConcepts:(id)arg1 ;
-(void)userDomainConceptManager:(id)arg0 didUpdateUserDomainConcepts:(id)arg1 ;


@end


#endif