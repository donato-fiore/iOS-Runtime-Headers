// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPLENGINEREMAPPEDRECORDS_H
#define CPLENGINEREMAPPEDRECORDS_H

@class NSMutableDictionary, NSString;
@protocol CPLAbstractObject;


#import "CPLEngineStorage.h"
#import "CPLPlatformObject.h"

@interface CPLEngineRemappedRecords : CPLEngineStorage <CPLAbstractObject>

 {
    NSMutableDictionary *_perTransactionRemappedScopedIdentifiers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly) Class superclass;


-(BOOL)addRemappedRecordWithScopedIdentifier:(id)arg0 realScopedIdentifier:(id)arg1 error:(*id)arg2 ;
-(BOOL)deleteRecordsForScopeIndex:(NSInteger)arg0 maxCount:(NSInteger)arg1 deletedCount:(*NSInteger)arg2 error:(*id)arg3 ;
-(BOOL)isRecordWithScopedIdentifierRemapped:(id)arg0 ;
-(BOOL)removeRemappedRecordWithScopedIdentifier:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)scopeType;
-(id)_fixupRemappedRecordsAndReturnBestCloudScopedIdentifierFromRemappedScopedIdentifiers:(id)arg0 fallback:(id)arg1 ;
-(id)realScopedIdentifierForRemappedScopedIdentifier:(id)arg0 ;
-(id)scopedIdentifiersRemappedToScopedIdentifier:(id)arg0 ;
-(void)writeTransactionDidFail;
-(void)writeTransactionDidSucceed;


@end


#endif