// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPLENGINESCOPECLEANUPTASKS_H
#define CPLENGINESCOPECLEANUPTASKS_H

@class NSMutableArray, NSString;
@protocol CPLAbstractObject;


#import "CPLEngineStorage.h"
#import "CPLPlatformObject.h"

@interface CPLEngineScopeCleanupTasks : CPLEngineStorage <CPLAbstractObject>

 {
    NSInteger _currentCleanupScopeIndex;
    NSMutableArray *_remainingStoragesToCleanup;
    BOOL _shouldRequestACleanupToScheduler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly) Class superclass;


+(id)scopeTypeDescriptionForScopeType:(NSUInteger)arg0 ;
-(BOOL)addCleanupTaskForScopeWithIndex:(NSInteger)arg0 scopeIdentifier:(id)arg1 scopeType:(NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)cleanupStepHasMore:(*BOOL)arg0 error:(*id)arg1 ;
-(BOOL)hasCleanupTasks;
-(NSUInteger)scopeType;
-(void)writeTransactionDidFail;
-(void)writeTransactionDidSucceed;


@end


#endif