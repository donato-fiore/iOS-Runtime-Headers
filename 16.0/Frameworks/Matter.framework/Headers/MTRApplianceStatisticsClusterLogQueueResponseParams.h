// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRAPPLIANCESTATISTICSCLUSTERLOGQUEUERESPONSEPARAMS_H
#define MTRAPPLIANCESTATISTICSCLUSTERLOGQUEUERESPONSEPARAMS_H

@class NSArray, NSNumber;

#import <Foundation/Foundation.h>


@interface MTRApplianceStatisticsClusterLogQueueResponseParams : NSObject

@property (retain, nonatomic) NSArray *logIds; // ivar: _logIds
@property (retain, nonatomic) NSNumber *logQueueSize; // ivar: _logQueueSize
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)description;
-(id)init;


@end


#endif