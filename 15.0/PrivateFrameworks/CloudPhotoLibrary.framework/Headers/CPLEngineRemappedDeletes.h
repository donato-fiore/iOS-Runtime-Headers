// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPLENGINEREMAPPEDDELETES_H
#define CPLENGINEREMAPPEDDELETES_H

@class NSMutableDictionary, NSString;
@protocol CPLAbstractObject;


#import "CPLEngineStorage.h"
#import "CPLPlatformObject.h"

@interface CPLEngineRemappedDeletes : CPLEngineStorage <CPLAbstractObject>

 {
    NSMutableDictionary *_perTransactionRemappedScopedIdentifiers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly) Class superclass;


-(BOOL)deleteRecordsForScopeIndex:(NSInteger)arg0 maxCount:(NSInteger)arg1 deletedCount:(*NSInteger)arg2 error:(*id)arg3 ;
-(NSUInteger)scopeType;
-(id)_fixupRemappedDeletesAndReturnBestCloudScopedIdentifierFromRemappedScopedIdentifiers:(id)arg0 fallback:(id)arg1 ;
-(id)realScopedIdentifierForRemappedScopedIdentifier:(id)arg0 ;
-(void)discardDeleteForRemappedRecordWithScopedIdentifier:(id)arg0 ;
-(void)scheduleDeleteForRemappedRecordWithScopedIdentifier:(id)arg0 realScopedIdentifier:(id)arg1 asap:(BOOL)arg2 ;
-(void)writeTransactionDidFail;
-(void)writeTransactionDidSucceed;


@end


#endif