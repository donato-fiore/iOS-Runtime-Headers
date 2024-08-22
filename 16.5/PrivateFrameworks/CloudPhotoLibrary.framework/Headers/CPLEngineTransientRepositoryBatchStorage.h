// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPLENGINETRANSIENTREPOSITORYBATCHSTORAGE_H
#define CPLENGINETRANSIENTREPOSITORYBATCHSTORAGE_H

@class NSString;
@protocol CPLBatchExtractionStrategyStorage;

#import <Foundation/Foundation.h>

#import "CPLEngineScope.h"
#import "CPLRecordTargetMapping.h"
#import "CPLEngineTransientRepository.h"

@interface CPLEngineTransientRepositoryBatchStorage : NSObject <CPLBatchExtractionStrategyStorage>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CPLEngineScope *scope; // ivar: _scope
@property (readonly) Class superclass;
@property (readonly, nonatomic) CPLRecordTargetMapping *targetMapping; // ivar: _targetMapping
@property (readonly, nonatomic) CPLEngineTransientRepository *transientRepository; // ivar: _transientRepository


-(BOOL)hasChangesInScopeWithIdentifier:(id)arg0 ;
-(BOOL)isRecordWithScopedIdentifierStashed:(id)arg0 ;
-(BOOL)removeChange:(id)arg0 error:(*id)arg1 ;
-(BOOL)stashChange:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)effectiveResourceSizeToUploadForUploadIdentifier:(id)arg0 ;
-(id)allChangesWithClass:(Class)arg0 relatedScopedIdentifier:(id)arg1 ;
-(id)allChangesWithClass:(Class)arg0 scopeIdentifier:(id)arg1 changeType:(NSUInteger)arg2 ;
-(id)allChangesWithClass:(Class)arg0 scopeIdentifier:(id)arg1 trashed:(BOOL)arg2 ;
-(id)allChangesWithClass:(Class)arg0 secondaryScopedIdentifier:(id)arg1 ;
-(id)allChangesWithScopeIdentifier:(id)arg0 ;
-(id)allNonDeletedChangesWithClass:(Class)arg0 scopeIdentifier:(id)arg1 ;
-(id)changeWithScopedIdentifier:(id)arg0 ;
-(id)initWithTransientRepository:(id)arg0 scope:(id)arg1 ;
-(void)beginExtractingBatch;
-(void)cleanupAfterExtractingBatch;


@end


#endif