// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STUIDATAACCESSSTATUSDOMAIN_H
#define STUIDATAACCESSSTATUSDOMAIN_H

@class STStatusDomain, STLocationStatusDomain, STMediaStatusDomain, NSSet, NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue, BSInvalidatable;


#import "STUIDataAccessStatusDomainData.h"

@interface STUIDataAccessStatusDomain : STStatusDomain {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_clientQueue;
    id<BSInvalidatable> *_stateCaptureHandle;
    STLocationStatusDomain *_locationDomain;
    STMediaStatusDomain *_mediaDomain;
    STUIDataAccessStatusDomainData *_currentData;
    NSSet *_activeAttributions;
    NSMutableArray *_attributionsWaitingForMinimumDisplayTime;
    NSMutableDictionary *_activeAttributionMinimumDisplayTimers;
    NSMutableArray *_recentAttributions;
    NSMutableDictionary *_recentAttributionExpirationTimers;
}




+(NSUInteger)statusDomainName;
-(id)data;
-(id)initWithServerHandle:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif