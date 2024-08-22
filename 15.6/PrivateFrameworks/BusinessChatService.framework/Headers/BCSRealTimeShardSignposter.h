// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BCSREALTIMESHARDSIGNPOSTER_H
#define BCSREALTIMESHARDSIGNPOSTER_H



#import "BCSRealTimeSignposter.h"

@interface BCSRealTimeShardSignposter : BCSRealTimeSignposter

@property (readonly, nonatomic) NSInteger shardType; // ivar: _shardType


-(id)_initWithShardType:(NSInteger)arg0 signpostIdentifier:(NSUInteger)arg1 ;


@end


#endif