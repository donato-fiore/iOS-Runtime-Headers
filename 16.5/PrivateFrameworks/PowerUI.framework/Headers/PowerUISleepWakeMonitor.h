// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef POWERUISLEEPWAKEMONITOR_H
#define POWERUISLEEPWAKEMONITOR_H

@class NSDate;
@protocol _CDUserContext, OS_os_log, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PowerUISmartChargeManager.h"

@interface PowerUISleepWakeMonitor : NSObject

@property (nonatomic) NSUInteger checkpoint; // ivar: _checkpoint
@property (retain, nonatomic) NSObject<_CDUserContext> *context; // ivar: _context
@property (retain, nonatomic) NSDate *desktopTransitionEvaluationDate; // ivar: _desktopTransitionEvaluationDate
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (retain, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (retain, nonatomic) PowerUISmartChargeManager *manager; // ivar: _manager
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(id)initWithManager:(id)arg0 withCheckpoint:(NSUInteger)arg1 withLastDesktopCheck:(id)arg2 ;


@end


#endif