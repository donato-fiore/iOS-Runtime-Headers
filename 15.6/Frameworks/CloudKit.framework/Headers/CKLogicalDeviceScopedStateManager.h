// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKLOGICALDEVICESCOPEDSTATEMANAGER_H
#define CKLOGICALDEVICESCOPEDSTATEMANAGER_H

@class NSMapTable, NSMutableSet;
@protocol CKXPCLogicalDeviceScopedClient;

#import <Foundation/Foundation.h>

#import "CKLogicalDeviceContext.h"

@interface CKLogicalDeviceScopedStateManager : NSObject <CKXPCLogicalDeviceScopedClient>



@property (retain, nonatomic) NSMapTable *assetsByUUID; // ivar: _assetsByUUID
@property (retain, nonatomic) NSMutableSet *completedLongLivedOperationIDs; // ivar: _completedLongLivedOperationIDs
@property (weak, nonatomic) CKLogicalDeviceContext *deviceContext; // ivar: _deviceContext
@property (retain, nonatomic) NSMutableSet *outstandingOperationIDs; // ivar: _outstandingOperationIDs


-(id)initWithDeviceContext:(id)arg0 ;
-(id)trackedAssetForUUID:(id)arg0 ;
-(void)addThrottle:(id)arg0 ;
-(void)openFileWithOpenInfo:(id)arg0 reply:(id)arg1 ;
-(void)readBytesOfInMemoryAssetContentWithUUID:(id)arg0 offset:(NSUInteger)arg1 length:(NSUInteger)arg2 reply:(id)arg3 ;
-(void)registerCompletedLongLivedOperationWithID:(id)arg0 ;
-(void)registerOutstandingOperationWithID:(id)arg0 ;
-(void)resetThrottles;
-(void)trackAssets:(id)arg0 ;
-(void)unregisterOutstandingOperationWithID:(id)arg0 ;


@end


#endif