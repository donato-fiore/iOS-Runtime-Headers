// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCORRELATIONQUERYSERVER_H
#define HDCORRELATIONQUERYSERVER_H

@class NSDictionary;


#import "HDBatchedQueryServer.h"

@interface HDCorrelationQueryServer : HDBatchedQueryServer {
    BOOL _permitPartiallyFilteredCorrelations;
    BOOL _suspended;
}


@property (readonly, nonatomic) NSDictionary *dataFilters; // ivar: _dataFilters


+(Class)queryClass;
+(id)requiredEntitlements;
-(id)initWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 ;
-(void)_queue_start;


@end


#endif