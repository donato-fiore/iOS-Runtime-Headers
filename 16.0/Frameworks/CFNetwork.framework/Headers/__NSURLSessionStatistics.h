// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef __NSURLSESSIONSTATISTICS_H
#define __NSURLSESSIONSTATISTICS_H

@class PBCodable, NSArray, NSUUID;

#import <Foundation/Foundation.h>


@interface __NSURLSessionStatistics : NSObject {
    *void report;
    PBCodable *_awdReport;
}


@property (readonly, nonatomic) unsigned int awdMetricID;
@property (readonly, nonatomic) PBCodable *awdReport;
@property (readonly, nonatomic) NSArray *connectionUUIDS;
@property (retain) NSArray *externallyVisibleConnectionUUIDs; // ivar: _externallyVisibleConnectionUUIDs
@property (retain) NSUUID *externallyVisibleNwActivity; // ivar: _externallyVisibleNwActivity
@property (readonly, nonatomic) NSUUID *nwActivity;
@property (readonly, nonatomic) NSUUID *taskUUID;


+(struct CFNetworkTaskMetrics_s *)createCFNetworkTaskMetrics_s:(id)arg0 ;
+(void)reportMetricsToSymptoms:(id)arg0 ;
-(id)initWithCFNetworkReport:(*void)arg0 length:(NSInteger)arg1 ;
-(id)initWithPBCodableData:(id)arg0 ;
-(void)dealloc;


@end


#endif