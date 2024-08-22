// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDBACKINGSTOREOPERATION_H
#define HMDBACKINGSTOREOPERATION_H

@class NSOperation, NSString, NSUUID;
@protocol HMFLogging;


#import "HMDBackingStore.h"

@interface HMDBackingStoreOperation : NSOperation <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy) id *operationFinishBlock; // ivar: _operationFinishBlock
@property (readonly, nonatomic) NSUUID *operationUUID; // ivar: _operationUUID
@property (copy, nonatomic) id *resultBlock; // ivar: _resultBlock
@property (retain, nonatomic) HMDBackingStore *store; // ivar: _store
@property (readonly) Class superclass;


+(id)logCategory;
-(id)init;
-(id)initWithResultBlock:(id)arg0 ;
-(id)logIdentifier;
-(id)mainReturningError;
-(void)main;


@end


#endif