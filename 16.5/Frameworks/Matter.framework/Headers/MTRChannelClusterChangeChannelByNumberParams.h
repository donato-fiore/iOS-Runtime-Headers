// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRCHANNELCLUSTERCHANGECHANNELBYNUMBERPARAMS_H
#define MTRCHANNELCLUSTERCHANGECHANNELBYNUMBERPARAMS_H

@class NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRChannelClusterChangeChannelByNumberParams : NSObject <NSCopying>



@property (copy, nonatomic) NSNumber *majorNumber; // ivar: _majorNumber
@property (copy, nonatomic) NSNumber *minorNumber; // ivar: _minorNumber
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout; // ivar: _serverSideProcessingTimeout
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif