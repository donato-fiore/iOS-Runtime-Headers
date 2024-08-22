// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGGRAPHINGESTBUSINESSITEMCONTAINER_H
#define PGGRAPHINGESTBUSINESSITEMCONTAINER_H

@class NSArray, CLSBusinessItem, NSDateInterval, NSString, CLCircularRegion, CLSLocationOfInterestVisit;
@protocol PGGraphIngestBusiness;

#import <Foundation/Foundation.h>


@interface PGGraphIngestBusinessItemContainer : NSObject <PGGraphIngestBusiness>



@property (readonly, nonatomic) NSArray *businessCategories;
@property (readonly, nonatomic) CLSBusinessItem *businessItem; // ivar: _businessItem
@property (readonly, nonatomic) NSDateInterval *dateInterval; // ivar: _dateInterval
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasRoutineVisit;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger muid;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) CLCircularRegion *region;
@property (readonly, nonatomic) CGFloat routineVisitConfidence;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger venueCapacity;
@property (readonly, nonatomic) CLSLocationOfInterestVisit *visit; // ivar: _visit


-(id)initWithBusinessItem:(id)arg0 dateInterval:(id)arg1 ;
-(id)initWithBusinessItem:(id)arg0 visit:(id)arg1 ;
-(id)initWithBusinessItem:(id)arg0 visit:(id)arg1 dateInterval:(id)arg2 ;
-(void)updateBusinessItem:(id)arg0 ;


@end


#endif