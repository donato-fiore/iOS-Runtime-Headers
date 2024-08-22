// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDBACKINGSTORELOGCHANGESEXISTFETCHOPERATION_H
#define HMDBACKINGSTORELOGCHANGESEXISTFETCHOPERATION_H



#import "HMDBackingStoreOperation.h"

@interface HMDBackingStoreLogChangesExistFetchOperation : HMDBackingStoreOperation

@property (nonatomic) NSInteger compareValue; // ivar: _compareValue
@property (copy, nonatomic) id *fetchBlock; // ivar: _fetchBlock
@property (nonatomic) NSInteger maskValue; // ivar: _maskValue


-(id)initWithNeedsPushTo:(NSUInteger)arg0 result:(id)arg1 ;
-(id)mainReturningError;


@end


#endif