// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVVCSESSIONFACTORY_H
#define AVVCSESSIONFACTORY_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AVVCSessionManager.h"

@interface AVVCSessionFactory : NSObject

@property (retain, nonatomic) AVVCSessionManager *primarySessionManager; // ivar: _primarySessionManager
@property (retain, nonatomic) NSMutableDictionary *sessionManagerMap; // ivar: _sessionManagerMap
@property (copy, nonatomic) id *sessionWasCreatedBlock; // ivar: _sessionWasCreatedBlock
@property (copy, nonatomic) id *sessionWillBeDestroyedBlock; // ivar: _sessionWillBeDestroyedBlock
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)sharedInstance;
-(id)_wqCreatePrimarySessionManagerIfNeeded:(id)arg0 clientType:(NSInteger)arg1 error:(*id)arg2 ;
-(id)auxSessionManagers;
-(id)init;
-(id)sessionForContext:(id)arg0 clientType:(NSInteger)arg1 error:(*id)arg2 ;
-(id)sessionForContext:(id)arg0 error:(*id)arg1 ;
-(id)sessionManagerForContext:(id)arg0 clientType:(NSInteger)arg1 error:(*id)arg2 ;
-(void)_wqCreateAuxSessionAndManagerForDeviceUID:(id)arg0 clientType:(NSInteger)arg1 session:(*id)arg2 manager:(*id)arg3 error:(*id)arg4 ;
-(void)_wqSessionAndManagerForContext:(id)arg0 clientType:(NSInteger)arg1 session:(*id)arg2 manager:(*id)arg3 error:(*id)arg4 ;
-(void)cleanupContext:(id)arg0 ;
-(void)releasePrimarySessionManager;
-(void)sessionForContext:(id)arg0 clientType:(NSInteger)arg1 completion:(id)arg2 ;
-(void)sessionForContext:(id)arg0 completion:(id)arg1 ;
-(void)sessionManagerForContext:(id)arg0 clientType:(NSInteger)arg1 completion:(id)arg2 ;


@end


#endif