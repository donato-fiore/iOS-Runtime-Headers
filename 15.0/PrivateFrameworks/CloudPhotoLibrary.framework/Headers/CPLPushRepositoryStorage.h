// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPLPUSHREPOSITORYSTORAGE_H
#define CPLPUSHREPOSITORYSTORAGE_H



#import "CPLChangeStorage.h"
#import "CPLEngineScopeStorage.h"
#import "CPLEnginePushRepository.h"

@interface CPLPushRepositoryStorage : CPLChangeStorage {
    NSUInteger _storageScopeType;
    CPLEngineScopeStorage *_scopes;
}


@property (readonly, nonatomic) CPLEnginePushRepository *pushRepository; // ivar: _pushRepository


-(BOOL)getRelatedScopedIdentifier:(*id)arg0 forRecordWithScopedIdentifier:(id)arg1 ;
-(BOOL)hasChangesWithRelatedScopedIdentifier:(id)arg0 class:(Class)arg1 ;
-(id)changeWithScopedIdentifier:(id)arg0 ;
-(id)changesWithRelatedScopedIdentifier:(id)arg0 class:(Class)arg1 ;
-(id)initWithPushRepository:(id)arg0 ;
-(id)scopedIdentifierAddingScopeIndexForScopedIdentifier:(id)arg0 ;
-(id)storageDescription;


@end


#endif