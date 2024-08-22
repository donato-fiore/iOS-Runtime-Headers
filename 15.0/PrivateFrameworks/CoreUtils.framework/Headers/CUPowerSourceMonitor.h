// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CUPOWERSOURCEMONITOR_H
#define CUPOWERSOURCEMONITOR_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CUPowerSourceMonitor : NSObject {
    BOOL _activateCalled;
    NSMutableDictionary *_aggregateSources;
    NSMutableDictionary *_pendingAggregates;
    NSMutableDictionary *_powerSources;
    int _psNotifyTokenAccessoryAttach;
    int _psNotifyTokenAccessoryPowerSource;
    int _psNotifyTokenAccessoryTimeRemaining;
    int _psNotifyTokenAnyPowerSource;
}


@property (nonatomic) unsigned int changeFlags; // ivar: _changeFlags
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (copy, nonatomic) id *powerSourceChangedHandler; // ivar: _powerSourceChangedHandler
@property (copy, nonatomic) id *powerSourceFoundHandler; // ivar: _powerSourceFoundHandler
@property (copy, nonatomic) id *powerSourceLostHandler; // ivar: _powerSourceLostHandler


-(id)init;
-(void)_aggregatePowerSourceFound:(id)arg0 ;
-(void)_aggregatePowerSourceLost:(id)arg0 ;
-(void)_aggregatePowerSourceUpdate:(id)arg0 changes:(unsigned int)arg1 ;
-(void)_cleanup;
-(void)_handlePowerSourceFound:(id)arg0 desc:(id)arg1 adapterDesc:(id)arg2 ;
-(void)_handlePowerSourceLost:(id)arg0 sourceID:(id)arg1 ;
-(void)_handlePowerSourceUpdate:(id)arg0 desc:(id)arg1 adapterDesc:(id)arg2 ;
-(void)_update;
-(void)_updatePowerSources;
-(void)activateWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif