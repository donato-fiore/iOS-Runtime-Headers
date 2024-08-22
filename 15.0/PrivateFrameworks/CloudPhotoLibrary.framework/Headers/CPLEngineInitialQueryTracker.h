// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPLENGINEINITIALQUERYTRACKER_H
#define CPLENGINEINITIALQUERYTRACKER_H

@class NSString;
@protocol CPLAbstractObject;


#import "CPLEngineStorage.h"
#import "CPLPlatformObject.h"

@interface CPLEngineInitialQueryTracker : CPLEngineStorage <CPLAbstractObject>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly) Class superclass;


-(BOOL)deleteRecordsForScopeIndex:(NSInteger)arg0 maxCount:(NSInteger)arg1 deletedCount:(*NSInteger)arg2 error:(*id)arg3 ;
-(BOOL)recordInitialQueryForClassFinished:(Class)arg0 scope:(id)arg1 finishedState:(NSInteger)arg2 error:(*id)arg3 ;
-(BOOL)recordInitialQueryForClassStarted:(Class)arg0 scope:(id)arg1 cursor:(id)arg2 error:(*id)arg3 ;
-(BOOL)recordQueryBatchForClass:(Class)arg0 scope:(id)arg1 cursor:(id)arg2 count:(NSUInteger)arg3 error:(*id)arg4 ;
-(NSUInteger)scopeType;


@end


#endif