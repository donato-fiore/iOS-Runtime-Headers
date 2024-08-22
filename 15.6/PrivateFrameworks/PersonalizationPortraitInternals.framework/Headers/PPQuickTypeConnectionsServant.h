// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPQUICKTYPECONNECTIONSSERVANT_H
#define PPQUICKTYPECONNECTIONSSERVANT_H

@protocol PPQuickTypeServantProtocol;

#import <Foundation/Foundation.h>

#import "PPConnectionsMetricsTracker.h"

@interface PPQuickTypeConnectionsServant : NSObject <PPQuickTypeServantProtocol>

 {
    PPConnectionsMetricsTracker *_metricsTracker;
}




-(id)init;
-(id)quickTypeItemsWithQuery:(id)arg0 limit:(NSUInteger)arg1 explanationSet:(id)arg2 ;


@end


#endif