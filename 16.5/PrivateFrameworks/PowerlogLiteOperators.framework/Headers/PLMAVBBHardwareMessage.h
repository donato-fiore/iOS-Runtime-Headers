// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLMAVBBHARDWAREMESSAGE_H
#define PLMAVBBHARDWAREMESSAGE_H

@class NSDate, NSNumber, NSData, PLAgent, NSString, NSMutableArray, PBCodable;

#import <Foundation/Foundation.h>


@interface PLMAVBBHardwareMessage : NSObject

@property (retain) NSDate *bbMonotonic; // ivar: _bbMonotonic
@property (retain) NSNumber *bbtimestamp; // ivar: _bbtimestamp
@property (retain) NSData *data; // ivar: _data
@property (retain) PLAgent *logAgent; // ivar: _logAgent
@property (retain) NSString *metricData; // ivar: _metricData
@property (retain) NSMutableArray *metricDataArr; // ivar: _metricDataArr
@property (retain) NSNumber *metricId; // ivar: _metricId
@property (retain) NSMutableArray *metricIdArr; // ivar: _metricIdArr
@property (retain) PBCodable *pbc; // ivar: _pbc
@property (retain) NSNumber *triggerCnt; // ivar: _triggerCnt
@property (retain) NSNumber *triggerId; // ivar: _triggerId


+(id)entryEventBackwardDefinitionBBMavEventMetrics;
+(id)entryEventBackwardDefinitionBBMavPeriodicMetrics;
-(id)decodePayload:(id)arg0 forMetricId:(id)arg1 ;
-(id)init;
-(id)initEntryWithBBTS:(id)arg0 triggerId:(id)arg1 seqnum:(id)arg2 payload:(id)arg3 logAgent:(id)arg4 ;
-(void)addToListMetric:(id)arg0 payload:(id)arg1 ;
-(void)logBBMavAperiodicMetrics;
-(void)logBBMavPeriodicMetrics;
-(void)lteComponentCarrierForClass:(id)arg0 forEntry:(id)arg1 ;
-(void)nrComponentCarrierForClass:(id)arg0 forEntry:(id)arg1 ;
-(void)protocolHistForClass:(id)arg0 forEntry:(id)arg1 ;


@end


#endif