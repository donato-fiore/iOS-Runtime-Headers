// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PAPROCESSSTATEMONITOR_H
#define PAPROCESSSTATEMONITOR_H

@class NSString;
@protocol PAProcessStateMonitoring;

#import <Foundation/Foundation.h>


@interface PAProcessStateMonitor : NSObject <PAProcessStateMonitoring>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)startMonitoringVisibilityStateForBundleIdentifiers:(id)arg0 onQueue:(id)arg1 withDelegate:(id)arg2 ;


@end


#endif