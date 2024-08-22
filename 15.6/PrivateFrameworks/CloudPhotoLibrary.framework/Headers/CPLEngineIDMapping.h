// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPLENGINEIDMAPPING_H
#define CPLENGINEIDMAPPING_H

@class NSString;
@protocol CPLAbstractObject, CPLEngineIDMapping;


#import "CPLEngineStorage.h"
#import "CPLPlatformObject.h"

@interface CPLEngineIDMapping : CPLEngineStorage <CPLAbstractObject, CPLEngineIDMapping>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly) Class superclass;


-(BOOL)addAddEventForRecordWithLocalScopedIdentifier:(id)arg0 direction:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)addCloudScopedIdentifier:(id)arg0 forLocalScopedIdentifier:(id)arg1 isFinal:(BOOL)arg2 direction:(NSUInteger)arg3 error:(*id)arg4 ;
-(BOOL)addDeleteEventForRecordWithLocalScopedIdentifier:(id)arg0 direction:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)deleteRecordsForScopeIndex:(NSInteger)arg0 maxCount:(NSInteger)arg1 deletedCount:(*NSInteger)arg2 error:(*id)arg3 ;
-(BOOL)hasPendingIdentifiers;
-(BOOL)markAllPendingIdentifiersForScopeWithIdentifier:(id)arg0 asFinalWithError:(*id)arg1 ;
-(BOOL)removeMappingForCloudScopedIdentifier:(id)arg0 error:(*id)arg1 ;
-(BOOL)resetAllFinalCloudIdentifiersForScopeWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(BOOL)setFinalCloudScopedIdentifier:(id)arg0 forPendingCloudScopedIdentifier:(id)arg1 error:(*id)arg2 ;
-(NSUInteger)scopeType;
-(id)cloudScopedIdentifierForLocalScopedIdentifier:(id)arg0 isFinal:(*BOOL)arg1 ;
-(id)firstAvailableCloudScopedIdentifierForProposedCloudScopedIdentifier:(id)arg0 ;
-(id)localScopedIdentifierForCloudScopedIdentifier:(id)arg0 isFinal:(*BOOL)arg1 ;
-(id)localScopedIdentifierForCloudScopedIdentifierIncludeRemappedRecords:(id)arg0 ;
-(id)setupCloudScopedIdentifier:(id)arg0 forLocalScopedIdentifier:(id)arg1 isFinal:(BOOL)arg2 direction:(NSUInteger)arg3 error:(*id)arg4 ;


@end


#endif