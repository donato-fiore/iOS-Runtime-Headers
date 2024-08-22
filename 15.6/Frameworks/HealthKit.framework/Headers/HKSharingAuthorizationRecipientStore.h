// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKSHARINGAUTHORIZATIONRECIPIENTSTORE_H
#define HKSHARINGAUTHORIZATIONRECIPIENTSTORE_H

@class NSArray, NSString;
@protocol _HKXPCExportable;

#import <Foundation/Foundation.h>

#import "HKHealthStore.h"
#import "HKObserverSet.h"
#import "HKTaskServerProxyProvider.h"

@interface HKSharingAuthorizationRecipientStore : NSObject <_HKXPCExportable>



@property (readonly, copy, nonatomic) NSArray *authorizationIdentifiers; // ivar: _authorizationIdentifiers
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (readonly, nonatomic) HKObserverSet *observers; // ivar: _observers
@property (readonly, nonatomic) HKTaskServerProxyProvider *proxyProvider; // ivar: _proxyProvider
@property (readonly, copy, nonatomic) NSArray *sharingAuthorizations; // ivar: _sharingAuthorizations
@property (readonly) Class superclass;


+(id)clientInterface;
+(id)serverInterface;
-(id)exportedInterface;
-(id)initWithHealthStore:(id)arg0 authorizationIdentifiers:(id)arg1 ;
-(id)initWithHealthStore:(id)arg0 sharingAuthorizations:(id)arg1 ;
-(id)remoteInterface;
-(void)_registerRemoteObservers;
-(void)addObserver:(id)arg0 ;
-(void)clientRemote_didAddRecipientIdentifier:(id)arg0 sharingAuthorizations:(id)arg1 ;
-(void)clientRemote_didRemoveRecipientIdentifier:(id)arg0 sharingAuthorizations:(id)arg1 ;
-(void)clientRemote_didRevokeRecipientIdentifier:(id)arg0 ;
-(void)connectionInterrupted;
-(void)connectionInvalidated;
-(void)fetchRecipientIdentifiersByAuthorizationWithCompletion:(id)arg0 ;
-(void)fetchRecipientIdentifiersWithCompletion:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif