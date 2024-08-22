// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRISERVERCONTEXT_H
#define TRISERVERCONTEXT_H

@class TRIClient;
@protocol TRIPaths, TRIPushServiceConnectionMultiplexing, TRITaskQueuing, TRIXPCActivityManagementProtocol;

#import <Foundation/Foundation.h>

#import "TRIActivationEventDatabase.h"
#import "TRIContentTracker.h"
#import "TRIMLRuntimeEvaluationHistoryDatabase.h"
#import "TRIExperimentDatabase.h"
#import "TRIExperimentHistoryDatabase.h"
#import "TRISQLiteCKDatabaseFailureInjectionDelegate.h"
#import "TRISQLiteCKDatabase.h"
#import "TRIKVStore.h"
#import "TRILimitedCarryProfileManager.h"
#import "TRINamespaceDatabase.h"
#import "TRIRolloutDatabase.h"
#import "TRITaskDatabase.h"
#import "TRIDatabase.h"

@interface TRIServerContext : NSObject

@property (readonly, nonatomic) TRIActivationEventDatabase *activationEventDatabase; // ivar: _activationEventDatabase
@property (readonly, nonatomic) TRIClient *client; // ivar: _client
@property (readonly, nonatomic) TRIContentTracker *contentTracker; // ivar: _contentTracker
@property (readonly, nonatomic) TRIMLRuntimeEvaluationHistoryDatabase *evaluationHistoryDatabase; // ivar: _evaluationHistoryDatabase
@property (readonly, nonatomic) TRIExperimentDatabase *experimentDatabase; // ivar: _experimentDatabase
@property (readonly, nonatomic) TRIExperimentHistoryDatabase *experimentHistoryDatabase; // ivar: _experimentHistoryDatabase
@property (retain, nonatomic) TRISQLiteCKDatabaseFailureInjectionDelegate *failureInjectionDelegate; // ivar: _failureInjectionDelegate
@property (retain) TRISQLiteCKDatabase *fakeCKDatabase; // ivar: _fakeCKDatabase
@property (readonly, nonatomic) TRIKVStore *keyValueStore; // ivar: _keyValueStore
@property (retain, nonatomic) TRILimitedCarryProfileManager *limitedCarryManager; // ivar: _limitedCarryManager
@property (readonly, nonatomic) TRINamespaceDatabase *namespaceDatabase; // ivar: _namespaceDatabase
@property (readonly, nonatomic) NSObject<TRIPaths> *paths; // ivar: _paths
@property (retain, nonatomic) NSObject<TRIPushServiceConnectionMultiplexing> *pushServiceMuxer; // ivar: _pushServiceMuxer
@property (readonly, nonatomic) TRIRolloutDatabase *rolloutDatabase; // ivar: _rolloutDatabase
@property (readonly, nonatomic) TRITaskDatabase *taskDatabase; // ivar: _taskDatabase
@property (retain, nonatomic) NSObject<TRITaskQueuing> *taskQueue; // ivar: _taskQueue
@property (readonly, nonatomic) TRIDatabase *underlyingDatabase; // ivar: _underlyingDatabase
@property (nonatomic) BOOL useCKNative; // ivar: _useCKNative
@property (readonly, weak, nonatomic) NSObject<TRIXPCActivityManagementProtocol> *xpcActivityManager; // ivar: _xpcActivityManager


-(id)ensureFakeCKDatabase;
-(id)init;
-(id)initWithPaths:(id)arg0 client:(id)arg1 storageManagement:(id)arg2 ;
-(id)initWithPaths:(id)arg0 client:(id)arg1 storageManagement:(id)arg2 xpcActivityManagement:(id)arg3 ;
-(void)_logInitErrorWithClient:(id)arg0 message:(id)arg1 ;
-(void)logErrorMetric:(id)arg0 ;


@end


#endif