// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TAMETRICSVISIT_H
#define TAMETRICSVISIT_H

@class NSData, NSString, NSNumber, NSDateInterval;
@protocol TAMetricsProtocol;

#import <Foundation/Foundation.h>

#import "TASPAdvertisement.h"

@interface TAMetricsVisit : NSObject <TAMetricsProtocol>



@property (readonly, nonatomic) NSData *address; // ivar: _address
@property (readonly, nonatomic) NSUInteger consecutiveAndDistinctFromPrevVisitCount; // ivar: _consecutiveAndDistinctFromPrevVisitCount
@property (readonly, nonatomic) NSUInteger consecutiveVisitCount; // ivar: _consecutiveVisitCount
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSNumber *distanceToPreviousSeenVisit; // ivar: _distanceToPreviousSeenVisit
@property (readonly, nonatomic) CGFloat durationOfVisitEntryConsideration; // ivar: _durationOfVisitEntryConsideration
@property (readonly, nonatomic) CGFloat durationOfVisitExitConsideration; // ivar: _durationOfVisitExitConsideration
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) TASPAdvertisement *latestAdvertisement; // ivar: _latestAdvertisement
@property (readonly, nonatomic) CGFloat latitude; // ivar: _latitude
@property (readonly, nonatomic) CGFloat longitude; // ivar: _longitude
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger totalDistinctVisitCount; // ivar: _totalDistinctVisitCount
@property (readonly, nonatomic) NSUInteger totalVisitCount; // ivar: _totalVisitCount
@property (readonly, nonatomic) NSDateInterval *visitEntryDelay; // ivar: _visitEntryDelay
@property (readonly, nonatomic) NSDateInterval *visitExitDelay; // ivar: _visitExitDelay


-(NSUInteger)getMetricsCollectionType;
-(id)initWithSnapshotHistory:(id)arg0 andAddress:(id)arg1 andVisitFilterSettings:(id)arg2 ;


@end


#endif