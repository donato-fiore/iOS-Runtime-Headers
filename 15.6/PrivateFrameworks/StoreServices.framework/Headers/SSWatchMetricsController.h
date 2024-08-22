// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSWATCHMETRICSCONTROLLER_H
#define SSWATCHMETRICSCONTROLLER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SSXPCConnection.h"
#import "SSWatchMetricsConfiguration.h"

@interface SSWatchMetricsController : NSObject {
    SSXPCConnection *_connection;
}


@property (copy, nonatomic) SSWatchMetricsConfiguration *metricsConfiguration; // ivar: _metricsConfiguration
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue


-(BOOL)isEnabled;
-(id)_connection;
-(id)init;
-(void)insertEvent:(id)arg0 withCompletionHandler:(id)arg1 ;


@end


#endif