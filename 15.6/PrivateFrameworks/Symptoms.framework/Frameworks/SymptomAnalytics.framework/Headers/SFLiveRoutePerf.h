// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFLIVEROUTEPERF_H
#define SFLIVEROUTEPERF_H

@class NSManagedObject, NSDate;


#import "SFNetworkAttachment.h"

@interface SFLiveRoutePerf : NSManagedObject

@property (nonatomic) CGFloat adminDisables;
@property (nonatomic) CGFloat bytesIn;
@property (nonatomic) CGFloat bytesOut;
@property (nonatomic) CGFloat captivityRedirects;
@property (nonatomic) CGFloat certErrors;
@property (nonatomic) CGFloat connAttempts;
@property (nonatomic) CGFloat connSuccesses;
@property (nonatomic) CGFloat dataStalls;
@property (nonatomic) CGFloat epochs;
@property (nonatomic) CGFloat faultyStay;
@property (retain, nonatomic) SFNetworkAttachment *hasNetworkAttachment;
@property (nonatomic) short kind;
@property (nonatomic) CGFloat lowLqmStay;
@property (nonatomic) CGFloat lowqStay;
@property (nonatomic) CGFloat lqmTransitionCount;
@property (nonatomic) CGFloat overallStay;
@property (nonatomic) CGFloat overallStayM2;
@property (nonatomic) CGFloat packetsIn;
@property (nonatomic) CGFloat packetsOut;
@property (nonatomic) CGFloat reTxBytes;
@property (nonatomic) CGFloat rttAvg;
@property (nonatomic) CGFloat rttMin;
@property (nonatomic) CGFloat rttVar;
@property (nonatomic) CGFloat rxDupeBytes;
@property (nonatomic) CGFloat rxOOOBytes;
@property (copy, nonatomic) NSDate *timeStamp;
@property (nonatomic) CGFloat topDownloadRate;


+(id)entityName;
+(id)fetchRequest;


@end


#endif