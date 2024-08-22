// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGCONSOLIDATEDADDRESS_H
#define PGCONSOLIDATEDADDRESS_H

@class NSArray, NSString, NSDate;
@protocol CLSTimeLocationTuple;

#import <Foundation/Foundation.h>

#import "PGGraphAddressNode.h"

@interface PGConsolidatedAddress : NSObject <CLSTimeLocationTuple>



@property (readonly, nonatomic) NSArray *addressEdgesSortedByTime; // ivar: _addressEdgesSortedByTime
@property (readonly, nonatomic) PGGraphAddressNode *addressNode; // ivar: _addressNode
@property (readonly, nonatomic) CLLocationCoordinate2D centerCoordinates; // ivar: _centerCoordinates
@property (readonly, nonatomic) CLLocationCoordinate2D coordinates;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSDate *expandedEndDate; // ivar: _expandedEndDate
@property (readonly, nonatomic) NSDate *expandedStartDate; // ivar: _expandedStartDate
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *timeLocationIdentifier; // ivar: _timeLocationIdentifier


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithAddressNode:(id)arg0 addressEdgesSortedByTime:(id)arg1 centerCoordinates:(struct CLLocationCoordinate2D )arg2 ;


@end


#endif