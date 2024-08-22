// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TAMETRICSINTERVISIT_H
#define TAMETRICSINTERVISIT_H

@class NSString;
@protocol TAMetricsProtocol;

#import <Foundation/Foundation.h>

#import "TAInterVisitMetricPerDevice.h"
#import "TASPAdvertisement.h"

@interface TAMetricsInterVisit : NSObject <TAMetricsProtocol>



@property (readonly, nonatomic) TAInterVisitMetricPerDevice *currentInterVisitMetric; // ivar: _currentInterVisitMetric
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) TASPAdvertisement *latestAdvertisement;
@property (readonly) Class superclass;
@property (readonly, nonatomic) TAInterVisitMetricPerDevice *totalInterVisitMetric; // ivar: _totalInterVisitMetric


-(NSUInteger)getMetricsCollectionType;
-(id)init;


@end


#endif