// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKHEARTBEATSERIESQUERY_H
#define HKHEARTBEATSERIESQUERY_H

@class NSString;
@protocol HKHeartbeatSeriesQueryClientInterface;


#import "HKQuery.h"
#import "HKHeartbeatSeriesSample.h"

@interface HKHeartbeatSeriesQuery : HKQuery <HKHeartbeatSeriesQueryClientInterface>

 {
    id *_bufferHandler;
    HKHeartbeatSeriesSample *_heartbeatSeries;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)clientInterfaceProtocol;
-(id)initWithHeartbeatSeries:(id)arg0 bufferHandler:(id)arg1 ;
-(id)initWithHeartbeatSeries:(id)arg0 dataHandler:(id)arg1 ;
-(void)_enumerateHeartbeatData:(id)arg0 final:(BOOL)arg1 handler:(id)arg2 ;
-(void)client_deliverHeartbeats;
-(void)queue_deliverError:(id)arg0 ;
-(void)queue_queryDidDeactivate:(id)arg0 ;


@end


#endif