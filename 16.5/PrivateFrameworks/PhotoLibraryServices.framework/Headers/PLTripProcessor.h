// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLTRIPPROCESSOR_H
#define PLTRIPPROCESSOR_H


#import <Foundation/Foundation.h>


@interface PLTripProcessor : NSObject



+(CGFloat)_minimumDistanceBetweenFrequentLocations:(id)arg0 andItem:(id)arg1 ;
+(CGFloat)_timeIntervalBetweenItem:(id)arg0 andItem:(id)arg1 ;
+(NSUInteger)_numberOfAssetsInItems:(id)arg0 ;
+(id)_filterFrequentLocations:(id)arg0 forDateInterval:(id)arg1 ;
+(id)_generateTripFromTripsMoments:(id)arg0 withLastHomeVisitDate:(id)arg1 andLastItem:(id)arg2 ;
+(id)processTripsWithItems:(id)arg0 frequentLocations:(id)arg1 lastHomeVisitDate:(id)arg2 progressBlock:(id)arg3 ;


@end


#endif