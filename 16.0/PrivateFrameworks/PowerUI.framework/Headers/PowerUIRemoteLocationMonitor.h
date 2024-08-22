// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef POWERUIREMOTELOCATIONMONITOR_H
#define POWERUIREMOTELOCATIONMONITOR_H

@class _CDContextualChangeRegistration;
@protocol _CDContext, OS_os_log, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PowerUILocationSignalMonitor.h"
#import "PowerUISmartChargeManager.h"

@interface PowerUIRemoteLocationMonitor : NSObject

@property (retain, nonatomic) NSObject<_CDContext> *context; // ivar: _context
@property (retain, nonatomic) PowerUILocationSignalMonitor *locationManager; // ivar: _locationManager
@property (retain, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (retain, nonatomic) PowerUISmartChargeManager *manager; // ivar: _manager
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // ivar: _syncQueue
@property (nonatomic) NSUInteger syncing; // ivar: _syncing
@property (retain, nonatomic) _CDContextualChangeRegistration *wakingRegistration; // ivar: _wakingRegistration


-(id)initWithManager:(id)arg0 withLocationManager:(id)arg1 withContext:(id)arg2 withDefaultsDomain:(id)arg3 withTrialManager:(id)arg4 ;


@end


#endif