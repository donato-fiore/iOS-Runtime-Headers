// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ACHDATASTORE_H
#define ACHDATASTORE_H

@class NSString, HDKeyValueDomain, NSError, NSHashTable, HDProfile;
@protocol HDHealthDaemonReadyObserver, HDDatabaseProtectedDataObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ACHDataStore : NSObject <HDHealthDaemonReadyObserver, HDDatabaseProtectedDataObserver>



@property (copy, nonatomic) NSString *databaseIdentifier; // ivar: _databaseIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) HDKeyValueDomain *defaultsDomain; // ivar: _defaultsDomain
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasCompletedFirstPopulateFromDatabase; // ivar: _hasCompletedFirstPopulateFromDatabase
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSError *injectedError; // ivar: _injectedError
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // ivar: _internalQueue
@property (nonatomic) BOOL needsPopulationWhenProtectedDataAvailable; // ivar: _needsPopulationWhenProtectedDataAvailable
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue; // ivar: _notificationQueue
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (nonatomic) BOOL populatesValuesFromDatabase; // ivar: _populatesValuesFromDatabase
@property (copy, nonatomic) id *populationCompleteBlock; // ivar: _populationCompleteBlock
@property (weak, nonatomic) HDProfile *profile; // ivar: _profile
@property (retain, nonatomic) NSHashTable *propertyProviders; // ivar: _propertyProviders
@property (readonly) Class superclass;


-(BOOL)_forceDatabasePopulate;
-(BOOL)_queue_populateAllPropertiesFromDatabase;
-(BOOL)_queue_populateFromDatabaseForProviders:(id)arg0 error:(*id)arg1 ;
-(BOOL)clearAllPropertiesWithError:(*id)arg0 databaseContext:(id)arg1 ;
-(id)_queue_allPropertyProviderKeys;
-(id)_queue_dictionaryRepresentationOfAllProviderProperties;
-(id)initWithProfile:(id)arg0 ;
-(void)_injectError:(id)arg0 ;
-(void)_syncEntityDidReceiveValues:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)addPropertyProvider:(id)arg0 ;
-(void)commitAllPropertiesToDatabaseWithContext:(id)arg0 completion:(id)arg1 ;
-(void)daemonReady:(id)arg0 ;
-(void)database:(id)arg0 protectedDataDidBecomeAvailable:(BOOL)arg1 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif