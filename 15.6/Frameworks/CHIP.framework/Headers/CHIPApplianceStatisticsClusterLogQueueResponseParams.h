// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPAPPLIANCESTATISTICSCLUSTERLOGQUEUERESPONSEPARAMS_H
#define CHIPAPPLIANCESTATISTICSCLUSTERLOGQUEUERESPONSEPARAMS_H

@class NSArray, NSNumber;

#import <Foundation/Foundation.h>


@interface CHIPApplianceStatisticsClusterLogQueueResponseParams : NSObject

@property (retain, nonatomic) NSArray *logIds; // ivar: _logIds
@property (retain, nonatomic) NSNumber *logQueueSize; // ivar: _logQueueSize


-(id)init;


@end


#endif