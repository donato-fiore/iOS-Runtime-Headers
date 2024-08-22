// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MNSTEPPINGLOCATIONTRACKER_H
#define MNSTEPPINGLOCATIONTRACKER_H

@class GEORouteMatcher, NSString;
@protocol MNArrivalUpdaterDelegate;


#import "MNLocationTracker.h"
#import "MNArrivalUpdater.h"

@interface MNSteppingLocationTracker : MNLocationTracker <MNArrivalUpdaterDelegate>

 {
    GEORouteMatcher *_routeMatcher;
    MNArrivalUpdater *_arrivalUpdater;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_matchedLocationForLocation:(id)arg0 ;
-(id)initWithNavigationSession:(id)arg0 ;
-(id)matchedLocationForLocation:(id)arg0 ;
-(int)transportType;
-(void)arrivalUpdaterDidArrive:(id)arg0 atEndOfLegAtIndex:(NSUInteger)arg1 ;
-(void)resetForTracePlayerAtLocation:(id)arg0 ;
-(void)startTracking;
-(void)stopTracking;
-(void)updateLocation:(id)arg0 ;


@end


#endif