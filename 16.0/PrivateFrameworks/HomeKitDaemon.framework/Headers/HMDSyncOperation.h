// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDSYNCOPERATION_H
#define HMDSYNCOPERATION_H

@class HMFObject, HMFTimer, NSUUID, NSString;


#import "HMDSyncOperationOptions.h"

@interface HMDSyncOperation : HMFObject

@property (retain, nonatomic) HMFTimer *delayTimer; // ivar: _delayTimer
@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (copy, nonatomic) id *operationBlock; // ivar: _operationBlock
@property (readonly, nonatomic) NSUInteger operationType;
@property (readonly, nonatomic) HMDSyncOperationOptions *options; // ivar: _options
@property (readonly, nonatomic) NSString *zoneName;


+(id)cancelOperationWithBlock:(id)arg0 ;
+(id)cloudFetchSyncOperationWithCloudConflict:(BOOL)arg0 block:(id)arg1 ;
+(id)cloudForcePushSyncOperationWithBlock:(id)arg0 ;
+(id)cloudOperation:(id)arg0 withBlock:(id)arg1 ;
+(id)cloudPushSyncOperationWithBlock:(id)arg0 ;
+(id)cloudVerifyAccountSyncOperationWithBlock:(id)arg0 ;
+(id)cloudZoneFetchSyncOperation:(id)arg0 cloudConflict:(BOOL)arg1 block:(id)arg2 ;
+(id)cloudZonePushSyncOperation:(id)arg0 block:(id)arg1 ;
+(id)postFetchOperationWithBlock:(id)arg0 ;
+(id)queryDatabaseOperationWithBlock:(id)arg0 ;
-(id)_initWithOptions:(id)arg0 syncBlock:(id)arg1 ;
-(id)description;


@end


#endif