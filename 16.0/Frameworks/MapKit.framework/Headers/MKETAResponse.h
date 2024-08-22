// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKETARESPONSE_H
#define MKETARESPONSE_H

@class NSDate, NSArray;

#import <Foundation/Foundation.h>

#import "MKMapItem.h"

@interface MKETAResponse : NSObject

@property (readonly, nonatomic) MKMapItem *destination; // ivar: _destination
@property (readonly, nonatomic) CGFloat distance; // ivar: _distance
@property (retain, nonatomic) NSDate *expectedArrivalDate; // ivar: _expectedArrivalDate
@property (retain, nonatomic) NSDate *expectedDepartureDate; // ivar: _expectedDepartureDate
@property (readonly, nonatomic) CGFloat expectedTravelTime; // ivar: _expectedTravelTime
@property (readonly, nonatomic, getter=_sortedETAs) NSArray *sortedETAs; // ivar: _sortedETAs
@property (readonly, nonatomic) MKMapItem *source; // ivar: _source
@property (readonly, nonatomic) NSUInteger transportType; // ivar: _transportType


-(NSUInteger)_transportType:(int)arg0 ;
-(id)description;
-(id)initWithSource:(id)arg0 destination:(id)arg1 expectedTravelTime:(CGFloat)arg2 distance:(CGFloat)arg3 sortedETAs:(id)arg4 ;


@end


#endif