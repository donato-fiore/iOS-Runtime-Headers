// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDBACKINGSTORELOGFETCHOPERATION_H
#define HMDBACKINGSTORELOGFETCHOPERATION_H



#import "HMDBackingStoreOperation.h"

@interface HMDBackingStoreLogFetchOperation : HMDBackingStoreOperation

@property (nonatomic) NSInteger compareValue; // ivar: _compareValue
@property (copy, nonatomic) id *fetchBlock; // ivar: _fetchBlock
@property (nonatomic) NSInteger maskValue; // ivar: _maskValue
@property (retain, nonatomic) id *sentinel; // ivar: _sentinel


-(id)initWithAlreadyPushedTo:(NSUInteger)arg0 result:(id)arg1 ;
-(id)initWithNeedsPushTo:(NSUInteger)arg0 result:(id)arg1 ;
-(id)initWithSentinel:(id)arg0 alreadyPushedTo:(NSUInteger)arg1 fetchResult:(id)arg2 ;
-(id)initWithSentinel:(id)arg0 mask:(NSInteger)arg1 compare:(NSInteger)arg2 fetchResult:(id)arg3 ;
-(id)initWithSentinel:(id)arg0 needsPushTo:(NSUInteger)arg1 fetchResult:(id)arg2 ;
-(id)mainReturningError;


@end


#endif