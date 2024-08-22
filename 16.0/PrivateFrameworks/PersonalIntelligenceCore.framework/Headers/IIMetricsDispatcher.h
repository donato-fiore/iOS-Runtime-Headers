// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IIMETRICSDISPATCHER_H
#define IIMETRICSDISPATCHER_H


#import <Foundation/Foundation.h>

#import "IISMetricStore.h"

@interface IIMetricsDispatcher : NSObject {
    IISMetricStore *_store;
}




+(id)sharedInstance;
+(void)registerXPCActivity;
-(id)init;
-(void)logMessage:(id)arg0 messageName:(id)arg1 ;
-(void)registerEnrichmentProvider:(id)arg0 ;
-(void)registerMessagesListener:(id)arg0 ;


@end


#endif