// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKSHARINGRECIPIENTAUTHORIZATIONSTORE_H
#define HKSHARINGRECIPIENTAUTHORIZATIONSTORE_H

@class NSString;
@protocol _HKXPCExportable;

#import <Foundation/Foundation.h>

#import "HKHealthStore.h"
#import "HKObserverSet.h"
#import "HKTaskServerProxyProvider.h"
#import "HKSharingRecipientIdentifier.h"

@interface HKSharingRecipientAuthorizationStore : NSObject <_HKXPCExportable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (readonly, nonatomic) HKObserverSet *observers; // ivar: _observers
@property (readonly, nonatomic) HKTaskServerProxyProvider *proxyProvider; // ivar: _proxyProvider
@property (readonly, copy, nonatomic) HKSharingRecipientIdentifier *recipientIdentifier; // ivar: _recipientIdentifier
@property (readonly) Class superclass;


+(id)clientInterface;
+(id)serverInterface;
-(id)exportedInterface;
-(id)initWithHealthStore:(id)arg0 recipientIdentifier:(id)arg1 ;
-(id)remoteInterface;
-(void)_registerRemoteObservers;
-(void)addAuthorizationIdentifiers:(id)arg0 completion:(id)arg1 ;
-(void)addObserver:(id)arg0 ;
-(void)addSharingAuthorizations:(id)arg0 completion:(id)arg1 ;
-(void)clientRemote_didAddSharingAuthorizations:(id)arg0 ;
-(void)clientRemote_didRemoveSharingAuthorizations:(id)arg0 ;
-(void)clientRemote_wasRevoked;
-(void)connectionInterrupted;
-(void)connectionInvalidated;
-(void)fetchAuthorizationIdentifiersWithCompletion:(id)arg0 ;
-(void)fetchSharingAuthorizationsMarkedForDeletionWithCompletion:(id)arg0 ;
-(void)fetchSharingAuthorizationsWithCompletion:(id)arg0 ;
-(void)removeAuthorizationIdentifiers:(id)arg0 completion:(id)arg1 ;
-(void)removeObserver:(id)arg0 ;
-(void)removeSharingAuthorizations:(id)arg0 completion:(id)arg1 ;
-(void)revokeWithCompletion:(id)arg0 ;


@end


#endif