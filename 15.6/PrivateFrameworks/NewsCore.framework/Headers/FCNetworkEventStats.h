// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCNETWORKEVENTSTATS_H
#define FCNETWORKEVENTSTATS_H


#import <Foundation/Foundation.h>


@interface FCNetworkEventStats : NSObject

@property (nonatomic) NSUInteger count; // ivar: _count
@property (nonatomic) NSUInteger max; // ivar: _max
@property (nonatomic) NSUInteger mean; // ivar: _mean
@property (nonatomic) NSUInteger median; // ivar: _median
@property (nonatomic) NSUInteger min; // ivar: _min
@property (nonatomic) NSUInteger percentile95; // ivar: _percentile95


-(id)initWithValues:(id)arg0 ;


@end


#endif