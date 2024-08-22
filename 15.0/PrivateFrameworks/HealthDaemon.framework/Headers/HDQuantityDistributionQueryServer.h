// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDQUANTITYDISTRIBUTIONQUERYSERVER_H
#define HDQUANTITYDISTRIBUTIONQUERYSERVER_H

@class _HKQuantityDistributionQueryServerConfiguration;


#import "HDQueryServer.h"

@interface HDQuantityDistributionQueryServer : HDQueryServer {
    _HKQuantityDistributionQueryServerConfiguration *_quantityDistributionQueryServerConfiguration;
}




+(Class)queryClass;
-(id)initWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 ;
-(void)_queue_start;


@end


#endif