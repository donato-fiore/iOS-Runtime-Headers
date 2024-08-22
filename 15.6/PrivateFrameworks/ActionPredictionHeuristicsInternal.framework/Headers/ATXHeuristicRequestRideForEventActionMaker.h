// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXHEURISTICREQUESTRIDEFOREVENTACTIONMAKER_H
#define ATXHEURISTICREQUESTRIDEFOREVENTACTIONMAKER_H

@class CLLocation, NSString;


#import "ATXHeuristicActionMaker.h"
#import "ATXHeuristicObjectHandle.h"

@interface ATXHeuristicRequestRideForEventActionMaker : ATXHeuristicActionMaker {
    CLLocation *_pickupLocation;
    ATXHeuristicObjectHandle *_dropoffEvent;
    NSString *_preferredAppBundleID;
}




+(BOOL)supportsSecureCoding;
-(BOOL)shouldPredictDropOffLocationGivenPickupLocation:(id)arg0 andDropOffLocation:(id)arg1 ;
-(id)_makeAction;
-(id)actionTypeName;
-(id)dropOffLocationFromEKEvent:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTitle:(id)arg0 subtitle:(id)arg1 pickupLocation:(id)arg2 dropoffEvent:(id)arg3 preferredAppBundleID:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif