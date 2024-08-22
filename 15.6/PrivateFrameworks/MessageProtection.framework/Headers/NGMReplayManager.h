// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NGMREPLAYMANAGER_H
#define NGMREPLAYMANAGER_H

@class NSPersistentContainer;

#import <Foundation/Foundation.h>


@interface NGMReplayManager : NSObject {
    NSPersistentContainer *_persistentContainer;
}




+(id)sharedManager;
-(BOOL)deleteExpiredSendingDestinations;
-(BOOL)deleteReceivingCountersForKey:(id)arg0 ;
-(BOOL)isBATS;
-(BOOL)isRunningTests;
-(BOOL)isXCTest;
-(BOOL)processFetchRequestAndValidate:(id)arg0 counter:(unsigned int)arg1 commit:(BOOL)arg2 theirIdentity:(id)arg3 prekey:(id)arg4 error:(*id)arg5 ;
-(id)computeDestinationHashForIncomingMessageFrom:(id)arg0 toLocalKey:(id)arg1 ;
-(id)computeDestinationHashForOutgoingMessageTo:(id)arg0 withLocalKey:(id)arg1 ;
-(id)dbNameFromProcess;
-(id)objectContextWithError:(*id)arg0 ;
-(id)persistentContainerWithError:(*id)arg0 ;
-(id)persistentStoreDescription;
-(id)registeredPrekeyForNGMPrekey:(id)arg0 objectContext:(id)arg1 ;
-(id)validateIncomingCounter:(SEL)arg0 prekey:(unsigned int)arg1 publicIdentity:(id)arg2 error:(id)arg3 ;
-(unsigned int)counterForDestinationWithIdentityKey:(id)arg0 sendingIdentity:(id)arg1 error:(*id)arg2 success:(*BOOL)arg3 ;
-(void)logDatabaseCreationDate:(id)arg0 ;


@end


#endif