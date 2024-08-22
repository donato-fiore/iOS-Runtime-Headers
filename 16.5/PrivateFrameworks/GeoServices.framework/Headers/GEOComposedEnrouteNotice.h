// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOCOMPOSEDENROUTENOTICE_H
#define GEOCOMPOSEDENROUTENOTICE_H

@class NSArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "GEOEnrouteNotice.h"
#import "GEOLatLng.h"
#import "GEOComposedRouteAnnotation.h"
#import "GEOComposedTrafficCamera.h"
#import "GEOComposedTrafficSignal.h"

@interface GEOComposedEnrouteNotice : NSObject <NSSecureCoding>

 {
    GEOEnrouteNotice *_enrouteNotice;
}


@property (readonly, nonatomic) unsigned int groupIdentifier;
@property (readonly, nonatomic) unsigned int groupItemHorizontalDisplayOrder;
@property (readonly, nonatomic) unsigned int groupItemVerticalDisplayOrder;
@property (readonly, nonatomic) NSArray *guidanceEvents; // ivar: _guidanceEvents
@property (readonly, nonatomic) BOOL hasGroupIdentifier;
@property (readonly, nonatomic) BOOL hasGroupItemHorizontalDisplayOrder;
@property (readonly, nonatomic) BOOL hasGroupItemVerticalDisplayOrder;
@property (readonly, nonatomic) BOOL hasHighlightDistance;
@property (readonly, nonatomic) BOOL hasPriority;
@property (readonly, nonatomic) unsigned int highlightDistance;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) int noticeType;
@property (readonly, nonatomic) GEOLatLng *position;
@property (readonly, nonatomic) unsigned int priority;
@property (readonly, nonatomic) GEOComposedRouteAnnotation *routeAnnotation;
@property (readonly, nonatomic) ? routeCoordinate; // ivar: _routeCoordinate
@property (readonly, nonatomic) GEOComposedTrafficCamera *trafficCamera;
@property (readonly, nonatomic) GEOComposedTrafficSignal *trafficSignal;


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)detailFormatForLocation:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEnrouteNotice:(id)arg0 enrouteNoticeIndex:(NSUInteger)arg1 legIndex:(NSUInteger)arg2 onRoute:(id)arg3 ;
-(id)initWithEnrouteNotice:(id)arg0 enrouteNoticeIndex:(NSUInteger)arg1 legIndex:(NSUInteger)arg2 onRoute:(id)arg3 withPolylineCoordinate:(struct ? )arg4 ;
-(id)initWithEnrouteNotice:(id)arg0 enrouteNoticeIndex:(NSUInteger)arg1 legIndex:(NSUInteger)arg2 onRoute:(id)arg3 withPosition:(id)arg4 ;
-(id)titleFormatForLocation:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif