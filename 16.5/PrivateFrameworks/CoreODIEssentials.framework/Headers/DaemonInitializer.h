// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DAEMONINITIALIZER_H
#define DAEMONINITIALIZER_H

@protocol OS_os_log;

#import <Foundation/Foundation.h>

#import "_TtC17CoreODIEssentials29ODISystemNotificationListener.h"
#import "_TtC17CoreODIEssentials20ODIXPCStreamListener.h"

@interface DaemonInitializer : NSObject {
    NSObject<OS_os_log> *_defaultLog;
}


@property (copy, nonatomic) _TtC17CoreODIEssentials29ODISystemNotificationListener *systemNotificationListener; // ivar: _systemNotificationListener
@property (copy, nonatomic) _TtC17CoreODIEssentials20ODIXPCStreamListener *xpcStreamListener; // ivar: _xpcStreamListener


-(id)init;
-(void)performLaunchTasks;
-(void)registerBackgroundActivities;
-(void)setupListeners;
-(void)startManagersWithDelegates;


@end


#endif