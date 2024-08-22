// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARGEOANCHOR_H
#define ARGEOANCHOR_H

@class NSString;
@protocol ARDaemonSecureCoding, ARTrackable;


#import "ARAnchor.h"

@interface ARGeoAnchor : ARAnchor <ARDaemonSecureCoding, ARTrackable>

 {
    ? _locationLLA;
    ? _locationECEF;
}


@property (readonly, nonatomic) CGFloat altitude;
@property (readonly, nonatomic) NSInteger altitudeSource; // ivar: _altitudeSource
@property (readonly, nonatomic) CLLocationCoordinate2D coordinate; // ivar: _coordinate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) ? ecefFromAnchor; // ivar: _ecefFromAnchor
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isAltitudeAvailable; // ivar: _isAltitudeAvailable
@property (nonatomic) BOOL isAltitudeLookupInProgress; // ivar: _isAltitudeLookupInProgress
@property (nonatomic) BOOL isTracked; // ivar: _isTracked
@property ? locationECEF;
@property ? locationLLA;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat undulation; // ivar: _undulation


-(id)initWithAnchor:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCoordinate:(struct CLLocationCoordinate2D )arg0 ;
-(id)initWithCoordinate:(struct CLLocationCoordinate2D )arg0 altitude:(CGFloat)arg1 ;
-(id)initWithName:(id)arg0 coordinate:(struct CLLocationCoordinate2D )arg1 ;
-(id)initWithName:(id)arg0 coordinate:(struct CLLocationCoordinate2D )arg1 altitude:(CGFloat)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)initWithCoordinate:(struct CLLocationCoordinate2D )arg0 altitude:(CGFloat)arg1 altitudeSource:(NSInteger)arg2 isAltitudeAvailable:(BOOL)arg3 undulation:(CGFloat)arg4 ;


@end


#endif