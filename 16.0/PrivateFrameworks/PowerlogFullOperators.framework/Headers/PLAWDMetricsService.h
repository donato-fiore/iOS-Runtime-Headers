// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLAWDMETRICSSERVICE_H
#define PLAWDMETRICSSERVICE_H

@class PLService, AWDServerConnection, NSMutableDictionary, NSMutableSet;



@interface PLAWDMetricsService : PLService

@property (retain) AWDServerConnection *awdServerConn; // ivar: _awdServerConn
@property (retain) NSMutableDictionary *classDictionary; // ivar: _classDictionary
@property (retain) NSMutableSet *currRunningMetrics; // ivar: _currRunningMetrics
@property (retain) NSMutableSet *updateRunningMetrics; // ivar: _updateRunningMetrics


+(id)entryAggregateDefinitions;
+(id)entryEventNoneDefinitions;
+(id)entryEventPointDefinitions;
+(void)load;
-(BOOL)connectToAWDServer;
-(BOOL)initAWDInterface;
-(id)init;
-(void)auxClassWrapper:(id)arg0 withAction:(NSInteger)arg1 ;
-(void)initOperatorDependancies;
-(void)threadFunc;


@end


#endif