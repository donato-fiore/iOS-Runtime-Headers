// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEODIRECTIONSSERVICE_H
#define GEODIRECTIONSSERVICE_H

@class NSURL;

#import <Foundation/Foundation.h>

#import "GEODirectionsRequester.h"

@interface GEODirectionsService : NSObject {
    GEODirectionsRequester *_directionsRequester;
}


@property (readonly, nonatomic) NSURL *directionsURL;


+(BOOL)_canCurrentVoiceLanguageHandleWrittenText;
+(BOOL)canSpeakWrittenAddresses;
+(BOOL)canSpeakWrittenPlaceNames;
+(id)sharedService;
-(BOOL)_shouldAllowTimepointForRequestType:(NSUInteger)arg0 ;
-(id)_directionsRequestForRequestParameters:(id)arg0 waypoints:(id)arg1 ;
-(id)_feedbackForRequestParameters:(id)arg0 ;
-(id)_geoOriginalWaypointRouteForRequestParameters:(id)arg0 waypoints:(id)arg1 ;
-(id)_geoOriginalWaypointRouteForResumeAfterPause:(id)arg0 waypoints:(id)arg1 ;
-(id)_geoWaypointTypedForWaypoint:(id)arg0 voiceLanguage:(id)arg1 ;
-(id)_waypointsForModifyWaypointsRequest:(id)arg0 ;
-(id)_waypointsForRequestParameters:(id)arg0 ;
-(id)_waypointsForRerouteWithWaypointsRequest:(id)arg0 ;
-(id)init;
-(id)requestDirections:(id)arg0 handler:(id)arg1 ;
-(int)_routePurposeForRequestParameters:(id)arg0 ;
-(void)_setMiscFieldsOnDirectionsRequest:(id)arg0 forRequestParameters:(id)arg1 ;
-(void)_submitDirectionsRequest:(id)arg0 waypoints:(id)arg1 auditToken:(id)arg2 useBackgroundURL:(BOOL)arg3 requestPriority:(NSInteger)arg4 allowRetry:(BOOL)arg5 handler:(id)arg6 ;


@end


#endif