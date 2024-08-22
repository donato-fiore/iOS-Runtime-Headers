// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLAWDNETWORKUSAGE_H
#define PLAWDNETWORKUSAGE_H

@class PLEntryNotificationOperatorComposition, NSTimer;


#import "PLAWDAuxMetrics.h"

@interface PLAWDNetworkUsage : PLAWDAuxMetrics

@property (retain) PLEntryNotificationOperatorComposition *nameConnectionCallback; // ivar: _nameConnectionCallback
@property (retain) PLEntryNotificationOperatorComposition *netEventCallback; // ivar: _netEventCallback
@property unsigned int netState; // ivar: _netState
@property (retain) NSTimer *snapshotTimer; // ivar: _snapshotTimer


+(id)entryAggregateDefinitionNetUsage;
+(id)entryAggregateDefinitions;
+(id)getSharedObjWithOperator:(id)arg0 ;
-(BOOL)submitDataToAWDServer:(id)arg0 withAwdConn:(id)arg1 ;
-(void)handleNameConnectionCallback:(id)arg0 ;
-(void)handleNetCallback:(id)arg0 ;
-(void)resetNetUsageTable;
-(void)startMetricCollection:(id)arg0 ;
-(void)stopMetricCollection:(id)arg0 ;


@end


#endif