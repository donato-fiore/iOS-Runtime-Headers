// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPLENGINECHANGEPIPE_H
#define CPLENGINECHANGEPIPE_H

@class NSString;
@protocol CPLAbstractObject;


#import "CPLEngineStorage.h"
#import "CPLPlatformObject.h"

@interface CPLEngineChangePipe : CPLEngineStorage <CPLAbstractObject>



@property (readonly, nonatomic) NSUInteger countOfQueuedBatches;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly) Class superclass;


-(BOOL)appendChangeBatch:(id)arg0 error:(*id)arg1 ;
-(BOOL)compactChangeBatchesWithError:(*id)arg0 ;
-(BOOL)deleteAllChangeBatchesWithError:(*id)arg0 ;
-(BOOL)deleteAllChangesWithScopeFilter:(id)arg0 error:(*id)arg1 ;
-(BOOL)deleteRecordsForScopeIndex:(NSInteger)arg0 maxCount:(NSInteger)arg1 deletedCount:(*NSInteger)arg2 error:(*id)arg3 ;
-(BOOL)hasQueuedBatches;
-(BOOL)hasSomeChangeInScopesWithIdentifiers:(id)arg0 ;
-(BOOL)hasSomeChangeWithScopeFilter:(id)arg0 ;
-(BOOL)hasSomeChangeWithScopedIdentifier:(id)arg0 ;
-(BOOL)isEmpty;
-(BOOL)popChangeBatch:(*id)arg0 error:(*id)arg1 ;
-(BOOL)popNextBatchWithError:(*id)arg0 ;
-(NSUInteger)scopeType;
-(id)allChangeBatches;
-(id)nextBatch;
-(id)popAllChangeBatchesWithError:(*id)arg0 ;


@end


#endif