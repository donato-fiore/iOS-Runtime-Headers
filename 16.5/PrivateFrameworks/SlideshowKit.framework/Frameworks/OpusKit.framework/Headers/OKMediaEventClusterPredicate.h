// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OKMEDIAEVENTCLUSTERPREDICATE_H
#define OKMEDIAEVENTCLUSTERPREDICATE_H

@class NSDictionary, NSString;


#import "OKMediaClusterPredicate.h"

@interface OKMediaEventClusterPredicate : OKMediaClusterPredicate

@property (retain) NSDictionary *calendarEventsDictionary; // ivar: _calendarEventsDictionary
@property (retain) NSString *countryName; // ivar: _countryName
@property (readonly) NSUInteger type; // ivar: _type


-(CGFloat)floatingAverageDistanceDeltaForItem:(id)arg0 inArray:(id)arg1 ;
-(CGFloat)floatingAverageTimeDeltaForItem:(id)arg0 inArray:(id)arg1 ;
-(CGFloat)maximumDistanceBetweenLocations:(id)arg0 ;
-(float)efficiencyForItems:(id)arg0 ;
-(id)barycenterOfLocations:(id)arg0 ;
-(id)clusterDateStringForPeriodFrom:(id)arg0 to:(id)arg1 ;
-(id)clusterLocationStringForLocations:(id)arg0 ;
-(id)evaluateItems:(id)arg0 progressBlock:(id)arg1 ;
-(id)eventNameForDate:(id)arg0 ;
-(id)initWithType:(NSUInteger)arg0 ;
-(id)title;
-(void)dealloc;


@end


#endif