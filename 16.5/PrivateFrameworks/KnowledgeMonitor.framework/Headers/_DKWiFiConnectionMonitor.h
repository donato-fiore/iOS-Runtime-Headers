// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _DKWIFICONNECTIONMONITOR_H
#define _DKWIFICONNECTIONMONITOR_H

@class DKMonitor, BMSource, NSString, NWPathEvaluator, BMPruner;
@protocol _DKHistoricalDeletingMonitor;



@interface _DKWiFiConnectionMonitor : DKMonitor <_DKHistoricalDeletingMonitor>

 {
    BMSource *_source;
}


@property (copy, nonatomic) NSString *currentWirelessSSID; // ivar: _currentWirelessSSID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *historicalDeletingHandler; // ivar: historicalDeletingHandler
@property (retain, nonatomic) NWPathEvaluator *pathEvaluator; // ivar: _pathEvaluator
@property (retain, nonatomic) BMPruner *pruner; // ivar: _pruner
@property (readonly) Class superclass;
@property (nonatomic) *__WiFiManagerClient wifiManager; // ivar: _wifiManager


+(id)_BMEventWithSSID:(id)arg0 starting:(BOOL)arg1 ;
+(id)_eventWithSSID:(id)arg0 date:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)start;
-(void)stop;


@end


#endif