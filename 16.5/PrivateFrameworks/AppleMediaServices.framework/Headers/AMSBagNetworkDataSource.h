// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSBAGNETWORKDATASOURCE_H
#define AMSBAGNETWORKDATASOURCE_H

@class NSError, NSString, NSMutableDictionary, NSDate;
@protocol AMSBagDataSourceProtocol, AMSBagAccountProvider, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AMSObserver.h"
#import "AMSTimeout.h"
#import "AMSBagNetworkTaskResult.h"
#import "AMSBagNetworkTask.h"
#import "AMSProcessInfo.h"

@interface AMSBagNetworkDataSource : NSObject <AMSBagDataSourceProtocol>



@property (readonly, nonatomic) NSObject<AMSBagAccountProvider> *accountProvider; // ivar: _accountProvider
@property (retain, nonatomic) AMSObserver *accountsChangedObserver; // ivar: _accountsChangedObserver
@property (retain, nonatomic) NSError *activeFailure; // ivar: _activeFailure
@property (readonly, nonatomic) AMSTimeout *activeFailureTimeout; // ivar: _activeFailureTimeout
@property (readonly, copy, nonatomic) NSString *bagLoadingPartialIdentifier;
@property (readonly, nonatomic) os_unfair_recursive_lock_s cachedDataAccessLock; // ivar: _cachedDataAccessLock
@property (retain, nonatomic) AMSBagNetworkTaskResult *cachedResult; // ivar: _cachedResult
@property (retain, nonatomic) NSString *cachedStorefront; // ivar: _cachedStorefront
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // ivar: _completionQueue
@property (retain, nonatomic) AMSBagNetworkTask *currentLoadTask; // ivar: _currentLoadTask
@property (copy, nonatomic) id *dataSourceChangedHandler; // ivar: _dataSourceChangedHandler
@property (copy, nonatomic) id *dataSourceDataInvalidatedHandler; // ivar: _dataSourceDataInvalidatedHandler
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableDictionary *defaultValues; // ivar: _defaultValues
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *descriptionExtended;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isLoaded) BOOL loaded;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *processAccountStoreDidChangeNotificationQueue; // ivar: _processAccountStoreDidChangeNotificationQueue
@property (readonly, copy, nonatomic) AMSProcessInfo *processInfo; // ivar: _processInfo
@property (readonly, copy, nonatomic) NSString *profile; // ivar: _profile
@property (readonly, copy, nonatomic) NSString *profileVersion; // ivar: _profileVersion
@property (readonly) Class superclass;


+(id)valueForURLVariable:(id)arg0 account:(id)arg1 clientInfo:(id)arg2 ;
-(id)_fetchBag;
-(id)_newCompletionQueue;
-(id)defaultValueForKey:(id)arg0 ;
-(id)initWithProfile:(id)arg0 profileVersion:(id)arg1 processInfo:(id)arg2 ;
-(id)initWithProfile:(id)arg0 profileVersion:(id)arg1 processInfo:(id)arg2 accountProvider:(id)arg3 ;
-(id)valueForURLVariable:(id)arg0 account:(id)arg1 ;
-(void)_accountStoreDidChange;
-(void)_invalidateCacheNotification:(id)arg0 ;
-(void)_updateCachedResult:(id)arg0 ;
-(void)dealloc;
-(void)loadWithCompletion:(id)arg0 ;
-(void)setDefaultValue:(id)arg0 forKey:(id)arg1 ;


@end


#endif