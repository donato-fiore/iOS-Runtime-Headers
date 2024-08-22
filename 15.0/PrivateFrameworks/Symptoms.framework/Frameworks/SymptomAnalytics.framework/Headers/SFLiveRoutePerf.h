// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFLIVEROUTEPERF_H
#define SFLIVEROUTEPERF_H

@class NSManagedObject, NSNumber, NSDate;


#import "SFNetworkAttachment.h"

@interface SFLiveRoutePerf : NSManagedObject

@property (copy, nonatomic) NSNumber *adminDisables;
@property (copy, nonatomic) NSNumber *bytesIn;
@property (copy, nonatomic) NSNumber *bytesOut;
@property (copy, nonatomic) NSNumber *captivityRedirects;
@property (copy, nonatomic) NSNumber *certErrors;
@property (copy, nonatomic) NSNumber *connAttempts;
@property (copy, nonatomic) NSNumber *connSuccesses;
@property (copy, nonatomic) NSNumber *dataStalls;
@property (copy, nonatomic) NSNumber *epochs;
@property (copy, nonatomic) NSNumber *faultyStay;
@property (retain, nonatomic) SFNetworkAttachment *hasNetworkAttachment;
@property (copy, nonatomic) NSNumber *kind;
@property (copy, nonatomic) NSNumber *lowLqmStay;
@property (copy, nonatomic) NSNumber *lowqStay;
@property (copy, nonatomic) NSNumber *lqmTransitionCount;
@property (copy, nonatomic) NSNumber *overallStay;
@property (copy, nonatomic) NSNumber *overallStayM2;
@property (copy, nonatomic) NSNumber *packetsIn;
@property (copy, nonatomic) NSNumber *packetsOut;
@property (copy, nonatomic) NSNumber *reTxBytes;
@property (copy, nonatomic) NSNumber *rttAvg;
@property (copy, nonatomic) NSNumber *rttMin;
@property (copy, nonatomic) NSNumber *rttVar;
@property (copy, nonatomic) NSNumber *rxDupeBytes;
@property (copy, nonatomic) NSNumber *rxOOOBytes;
@property (copy, nonatomic) NSDate *timeStamp;
@property (copy, nonatomic) NSNumber *topDownloadRate;


+(id)entityName;
+(id)fetchRequest;


@end


#endif