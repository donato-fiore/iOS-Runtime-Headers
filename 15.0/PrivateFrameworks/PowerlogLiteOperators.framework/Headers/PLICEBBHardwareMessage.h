// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLICEBBHARDWAREMESSAGE_H
#define PLICEBBHARDWAREMESSAGE_H

@class NSDate, NSNumber, NSData, PLAgent, NSString, NSMutableArray, PBCodable;

#import <Foundation/Foundation.h>


@interface PLICEBBHardwareMessage : NSObject

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


+(id)entryEventBackwardDefinitionBBIceEventMetrics;
+(id)entryEventBackwardDefinitionBBIcePeriodicMetrics;
-(id)decodeEventPayload:(id)arg0 forMetricId:(id)arg1 ;
-(id)decodePayload:(id)arg0 forMetricId:(id)arg1 ;
-(id)init;
-(id)initEntryWithBBTS:(id)arg0 triggerId:(id)arg1 seqnum:(id)arg2 payload:(id)arg3 logAgent:(id)arg4 ;
-(void)addToListMetric:(id)arg0 payload:(id)arg1 ;
-(void)componentCarrierForClass:(id)arg0 forEntry:(id)arg1 ;
-(void)cpcStatsForClass:(id)arg0 forEntry:(id)arg1 ;
-(void)duplexModeForClass:(id)arg0 forEntry:(id)arg1 ;
-(void)logBBIceAperiodicMetrics;
-(void)logBBIcePeriodicMetrics;
-(void)pdcchStateStatsFor:(id)arg0 forEntry:(id)arg1 ;
-(void)protocolHist2ForClass:(id)arg0 forEntry:(id)arg1 ;
-(void)protocolHistForClass:(id)arg0 forEntry:(id)arg1 ;
-(void)protocolPerStateForClass:(id)arg0 forEntry:(id)arg1 ;
-(void)rrcModeHistForClass:(id)arg0 forEntry:(id)arg1 ;


@end


#endif