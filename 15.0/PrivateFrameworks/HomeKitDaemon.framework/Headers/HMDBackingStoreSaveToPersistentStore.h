// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDBACKINGSTORESAVETOPERSISTENTSTORE_H
#define HMDBACKINGSTORESAVETOPERSISTENTSTORE_H

@class NSString;


#import "HMDBackingStoreOperation.h"
#import "HMDHomeManager.h"

@interface HMDBackingStoreSaveToPersistentStore : HMDBackingStoreOperation

@property (readonly, nonatomic) HMDHomeManager *homeManager; // ivar: _homeManager
@property (readonly, nonatomic) BOOL incrementGeneration; // ivar: _incrementGeneration
@property (readonly, nonatomic) NSString *reason; // ivar: _reason


-(id)initWithHomeManager:(id)arg0 reason:(id)arg1 incrementGeneration:(BOOL)arg2 ;
-(id)mainReturningError;


@end


#endif