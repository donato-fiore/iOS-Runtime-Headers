// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXINFORMATIONHEURISTICREFRESHLOCATIONTRIGGER_H
#define ATXINFORMATIONHEURISTICREFRESHLOCATIONTRIGGER_H

@class CLCircularRegion;
@protocol NSSecureCoding, ATXLocationManagerProtocol;


#import "ATXInformationHeuristicRefreshTrigger.h"

@interface ATXInformationHeuristicRefreshLocationTrigger : ATXInformationHeuristicRefreshTrigger <NSSecureCoding>

 {
    id<ATXLocationManagerProtocol> *_locationManager;
    CLCircularRegion *_regionToMonitor;
    BOOL _previouslyInsideRegion;
    BOOL _previouslyOutsideRegion;
    id *_token;
}




+(BOOL)_locationIsStaleOrNotAccurateEnough:(id)arg0 now:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEnteringLocation:(struct CLLocationCoordinate2D )arg0 radiusInMeters:(CGFloat)arg1 ;
-(id)initWithExitingLocation:(struct CLLocationCoordinate2D )arg0 radiusInMeters:(CGFloat)arg1 ;
-(id)initWithLocation:(struct CLLocationCoordinate2D )arg0 notifyOnEntry:(BOOL)arg1 notifyOnExit:(BOOL)arg2 radiusInMeters:(CGFloat)arg3 ;
-(id)initWithLocationManager:(id)arg0 regionToMonitor:(id)arg1 ;
-(void)_run;
-(void)_start;
-(void)_stop;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateWithInjectedLocationManager:(id)arg0 ;


@end


#endif