// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EFWATCHDOG_H
#define EFWATCHDOG_H

@class SBSApplicationUserQuitMonitor, NSString;
@protocol EFLoggable, SBSApplicationUserQuitMonitorDelegate;

#import <Foundation/Foundation.h>


@interface EFWatchdog : NSObject <EFLoggable, SBSApplicationUserQuitMonitorDelegate>

 {
    SBSApplicationUserQuitMonitor *_monitor;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *monitoredBundleIdentifier; // ivar: _monitoredBundleIdentifier
@property (readonly) Class superclass;


+(id)log;
-(id)initWithMonitoredBundleIdentifier:(id)arg0 ;
-(void)invalidate;
-(void)quitMonitor:(id)arg0 userClosedLastSceneOfApplicationWithBundleID:(id)arg1 ;
-(void)start;


@end


#endif