// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFPOWERSOURCEMONITOR_H
#define SFPOWERSOURCEMONITOR_H

@class CUCoalescer, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SFPowerSourceMonitor : NSObject {
    *LogCategory _ucat;
    BOOL _activateCalled;
    NSInteger _previousSourcesCount;
    unsigned short _powerSourcesUpdateIndex;
    CUCoalescer *_updateCoalescer;
    NSMutableDictionary *_powerSources;
    int _psNotifyTokenAccessoryAttach;
    int _psNotifyTokenAccessoryPowerSource;
    int _psNotifyTokenAccessoryTimeRemaining;
    int _psNotifyTokenAnyPowerSource;
}


@property (nonatomic) unsigned int changeFlags; // ivar: _changeFlags
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (copy, nonatomic) id *powerSourcesChangedHandler; // ivar: _powerSourcesChangedHandler
@property (copy, nonatomic) id *powerSourcesFoundHandler; // ivar: _powerSourcesFoundHandler
@property (copy, nonatomic) id *powerSourcesLostHandler; // ivar: _powerSourcesLostHandler
@property (nonatomic) BOOL skipCoalescing; // ivar: _skipCoalescing


-(?)powerSourcesListWithOutInfo:(?)arg0 outSourcesoutSourcesCount;
-(id)init;
-(void)_cleanup;
-(void)_foundPowerSource:(id)arg0 desc:(id)arg1 adapterDesc:(id)arg2 ;
-(void)_handlePowerSourcesChanged:(id)arg0 changes:(unsigned int)arg1 ;
-(void)_handlePowerSourcesFound:(id)arg0 ;
-(void)_handlePowerSourcesLost:(id)arg0 ;
-(void)_removePowerSources:(id)arg0 ;
-(void)_triggerUpdatePowerSources;
-(void)_update;
-(void)_updatePowerSource:(id)arg0 desc:(id)arg1 adapterDesc:(id)arg2 ;
-(void)_updatePowerSources;
-(void)_updatePowerSourcesWithInfo:(*void)arg0 sources:(struct __CFArray *)arg1 sourcesCount:(NSInteger)arg2 ;
-(void)activateWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif