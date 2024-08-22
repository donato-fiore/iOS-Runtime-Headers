// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVDEPARTUREANNOUNCINGOBJECTMONITOR_H
#define AVDEPARTUREANNOUNCINGOBJECTMONITOR_H


#import <Foundation/Foundation.h>

#import "AVWeakReference.h"

@interface AVDepartureAnnouncingObjectMonitor : NSObject {
    AVWeakReference *_weakReferenceToMonitoringObject;
}




+(void)attachDepartureAnnouncingObjectMonitorToObject:(id)arg0 monitoringObject:(id)arg1 ;
-(id)initWithMonitoringObject:(id)arg0 ;
-(void)dealloc;


@end


#endif