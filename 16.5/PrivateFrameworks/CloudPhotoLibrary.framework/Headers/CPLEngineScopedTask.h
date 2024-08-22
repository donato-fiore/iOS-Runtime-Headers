// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPLENGINESCOPEDTASK_H
#define CPLENGINESCOPEDTASK_H

@class NSString, NSData;


#import "CPLEngineSyncTask.h"
#import "CPLEngineScope.h"
#import "CPLEngineStore.h"

@interface CPLEngineScopedTask : CPLEngineSyncTask

@property (readonly, nonatomic) NSString *clientCacheIdentifier; // ivar: _clientCacheIdentifier
@property (readonly, nonatomic) CPLEngineScope *scope; // ivar: _scope
@property (readonly, nonatomic) CPLEngineStore *store; // ivar: _store
@property (readonly, nonatomic) NSData *transportScope; // ivar: _transportScope


-(BOOL)checkScopeIsValidInTransaction:(id)arg0 ;
-(BOOL)isScopeValidInTransaction:(id)arg0 ;
-(id)initWithEngineLibrary:(id)arg0 session:(id)arg1 clientCacheIdentifier:(id)arg2 scope:(id)arg3 transportScope:(id)arg4 ;


@end


#endif