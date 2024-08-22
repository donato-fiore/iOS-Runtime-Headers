// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASDCLIPMETRICSCOORDINATOR_H
#define ASDCLIPMETRICSCOORDINATOR_H

@protocol ASDClipServiceBroker;

#import <Foundation/Foundation.h>


@interface ASDClipMetricsCoordinator : NSObject {
    id<ASDClipServiceBroker> *_broker;
}




-(id)init;
-(void)sendClipCardMetricsEvent:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif