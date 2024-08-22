// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSPOWERMONITOR_H
#define SBSPOWERMONITOR_H

@class NSXPCConnection;
@protocol SBSPowerMonitorImplementer;

#import <Foundation/Foundation.h>


@interface SBSPowerMonitor : NSObject {
    NSXPCConnection *_sbConnection;
    id<SBSPowerMonitorImplementer> *_sbProxy;
}




-(id)init;
-(id)initWithTarget:(id)arg0 ;
-(void)getPowerEstimateForInterval:(float)arg0 reply:(id)arg1 ;


@end


#endif