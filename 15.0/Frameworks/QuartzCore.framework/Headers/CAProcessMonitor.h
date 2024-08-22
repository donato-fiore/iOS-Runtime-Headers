// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAPROCESSMONITOR_H
#define CAPROCESSMONITOR_H

@class RBSProcessMonitor, NSMutableSet;

#import <Foundation/Foundation.h>


@interface CAProcessMonitor : NSObject {
    id *_callback;
    RBSProcessMonitor *_processMonitor;
    NSMutableSet *_processIdentifiers;
}




-(id)initWithCallback:(id)arg0 ;
-(void)addMonitoringProcess:(int)arg0 isRunning:(*BOOL)arg1 isSuspended:(*BOOL)arg2 ;
-(void)dealloc;
-(void)removeMonitoringProcess:(int)arg0 ;
-(void)updateConfiguration;


@end


#endif