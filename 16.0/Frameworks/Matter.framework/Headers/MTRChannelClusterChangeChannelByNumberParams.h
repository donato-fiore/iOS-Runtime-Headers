// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRCHANNELCLUSTERCHANGECHANNELBYNUMBERPARAMS_H
#define MTRCHANNELCLUSTERCHANGECHANNELBYNUMBERPARAMS_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface MTRChannelClusterChangeChannelByNumberParams : NSObject

@property (retain, nonatomic) NSNumber *majorNumber; // ivar: _majorNumber
@property (retain, nonatomic) NSNumber *minorNumber; // ivar: _minorNumber
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)description;
-(id)init;


@end


#endif