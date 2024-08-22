// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRTIMESYNCHRONIZATIONCLUSTERSETUTCTIMEPARAMS_H
#define MTRTIMESYNCHRONIZATIONCLUSTERSETUTCTIMEPARAMS_H

@class NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRTimeSynchronizationClusterSetUtcTimeParams : NSObject <NSCopying>



@property (copy, nonatomic) NSNumber *granularity; // ivar: _granularity
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout; // ivar: _serverSideProcessingTimeout
@property (copy, nonatomic) NSNumber *timeSource; // ivar: _timeSource
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs
@property (copy, nonatomic) NSNumber *utcTime; // ivar: _utcTime


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif