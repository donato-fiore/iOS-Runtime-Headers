// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFAPPLICATIONTERMINATIONMONITOR_H
#define WFAPPLICATIONTERMINATIONMONITOR_H

@class NSString, RBSProcessMonitor;

#import <Foundation/Foundation.h>


@interface WFApplicationTerminationMonitor : NSObject

@property (readonly, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (retain, nonatomic) RBSProcessMonitor *processMonitor; // ivar: _processMonitor


-(id)initWithBundleIdentifier:(id)arg0 ;
-(void)dealloc;
-(void)startMonitoringWithTerminationHandler:(id)arg0 ;


@end


#endif