// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DKWIFICONNECTIONMONITOR_H
#define _DKWIFICONNECTIONMONITOR_H

@class DKMonitor, NSString, NWPathEvaluator;
@protocol _DKHistoricalDeletingMonitor;



@interface _DKWiFiConnectionMonitor : DKMonitor <_DKHistoricalDeletingMonitor>



@property (copy, nonatomic) NSString *currentWirelessSSID; // ivar: _currentWirelessSSID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *historicalDeletingHandler; // ivar: historicalDeletingHandler
@property (retain, nonatomic) NWPathEvaluator *pathEvaluator; // ivar: _pathEvaluator
@property (readonly) Class superclass;
@property (nonatomic) *__WiFiManagerClient wifiManager; // ivar: _wifiManager


+(id)_eventWithSSID:(id)arg0 date:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)start;
-(void)stop;


@end


#endif