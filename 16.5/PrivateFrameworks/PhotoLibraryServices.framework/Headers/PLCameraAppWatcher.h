// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLCAMERAAPPWATCHER_H
#define PLCAMERAAPPWATCHER_H

@class NSString;
@protocol PLForegroundMonitorDelegate;

#import <Foundation/Foundation.h>

#import "PLForegroundMonitor.h"

@interface PLCameraAppWatcher : NSObject <PLForegroundMonitorDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PLForegroundMonitor *foregroundMonitor; // ivar: _foregroundMonitor
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isCameraRunning; // ivar: _isCameraRunning
@property (readonly) Class superclass;


-(id)init;
-(void)foregroundMonitor:(id)arg0 changedStateToForeground:(BOOL)arg1 forBundleIdentifier:(id)arg2 ;


@end


#endif