// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDBACKINGSTORELOGDROPOPERATIONSWITHUUID_H
#define HMDBACKINGSTORELOGDROPOPERATIONSWITHUUID_H

@class NSUUID;


#import "HMDBackingStoreOperation.h"

@interface HMDBackingStoreLogDropOperationsWithUUID : HMDBackingStoreOperation

@property (nonatomic) NSInteger compareValue; // ivar: _compareValue
@property (nonatomic) NSInteger maskValue; // ivar: _maskValue
@property (retain, nonatomic) NSUUID *uuid; // ivar: _uuid


-(id)initWithUUID:(id)arg0 pushingTo:(NSUInteger)arg1 resultBlock:(id)arg2 ;
-(id)mainReturningError;


@end


#endif