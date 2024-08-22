// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MNTRAFFICINCIDENTALERT_H
#define MNTRAFFICINCIDENTALERT_H

@class GEOTrafficBannerText, NSArray, NSDate, NSData, GEOComposedRoute, NSString, GEOPBTransitArtwork, GEORouteIncident, NSMutableArray, GEONavigabilityInfo;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MNActiveRouteInfo.h"

@interface MNTrafficIncidentAlert : NSObject <NSSecureCoding>

 {
    GEOTrafficBannerText *_geoTrafficBannerText;
    NSArray *_buttonActionTitles;
}


@property (readonly, nonatomic) NSDate *alertDate; // ivar: _alertDate
@property (readonly, nonatomic) NSArray *alertDescriptions;
@property (readonly, nonatomic) CGFloat alertDisplayDuration; // ivar: _alertDisplayDuration
@property (readonly, nonatomic) NSData *alertID; // ivar: _alertID
@property (readonly, nonatomic) NSArray *alertTitles;
@property (readonly, nonatomic) NSUInteger alertType; // ivar: _alertType
@property (readonly, nonatomic) ? alternateEndValidCoordinateRange; // ivar: _alternateEndValidCoordinateRange
@property (readonly, nonatomic) GEOComposedRoute *alternateRoute;
@property (readonly, nonatomic) MNActiveRouteInfo *alternateRouteInfo; // ivar: _alternateRouteInfo
@property (readonly, nonatomic) NSString *analyticsMessage; // ivar: _analyticsMessage
@property (readonly, nonatomic) GEOPBTransitArtwork *artwork;
@property (readonly, nonatomic) NSString *bannerDescription; // ivar: _bannerDescription
@property (readonly, nonatomic) NSString *bannerID; // ivar: _bannerID
@property (readonly, nonatomic) BOOL defaultToNewRoute;
@property (nonatomic) CGFloat distanceToIncident; // ivar: _distanceToIncident
@property (readonly, nonatomic) ? endValidCoordinateRange; // ivar: _endValidCoordinateRange
@property (readonly, nonatomic) NSData *etaResponseID; // ivar: _etaResponseID
@property (readonly, nonatomic) GEORouteIncident *incident;
@property (readonly, nonatomic) ? incidentCoordinate; // ivar: _incidentCoordinate
@property (readonly, nonatomic) BOOL isAutomaticReroute; // ivar: _isAutomaticReroute
@property (readonly, nonatomic) BOOL isReroute;
@property (readonly, nonatomic) MNActiveRouteInfo *mainRouteInfo; // ivar: _mainRouteInfo
@property (readonly, nonatomic) CGFloat newEstimatedTime;
@property (readonly, nonatomic) CGFloat oldEstimatedTime;
@property (readonly, nonatomic) CGFloat oldHistoricTime;
@property (readonly, nonatomic) NSMutableArray *oldRouteIncidents;
@property (readonly, nonatomic) GEOComposedRoute *originalRoute;
@property (readonly, nonatomic) GEONavigabilityInfo *originalRouteNavigability;
@property (readonly, nonatomic) int previousBannerChange;
@property (readonly, nonatomic) NSUInteger secondsSaved;
@property (readonly, nonatomic) BOOL shouldShowTimer; // ivar: _shouldShowTimer
@property (readonly, nonatomic) NSArray *spokenTexts;
@property (readonly, nonatomic) ? startValidCoordinateRange; // ivar: _startValidCoordinateRange


+(BOOL)supportsSecureCoding;
+(id)validTrafficIncidentAlertForMainRouteInfo:(id)arg0 alternateRouteInfo:(id)arg1 ;
-(NSUInteger)_alertTypeForGeoBannerStyle:(int)arg0 ;
-(id)_buttonTitleForAlertAction:(NSUInteger)arg0 ;
-(id)_dynamicStringValues;
-(id)_initWithGeoTrafficBannerText:(id)arg0 mainRouteInfo:(id)arg1 alternateRouteInfo:(id)arg2 ;
-(id)_stringForAlertType:(NSUInteger)arg0 ;
-(id)acceptButtonTitle;
-(id)buttonActionTitles;
-(id)description;
-(id)dismissButtonTitle;
-(id)initWithCoder:(id)arg0 ;
-(int)_buttonDisplayForAlertAction:(NSUInteger)arg0 ;
-(int)acceptButtonDisplay;
-(int)dismissButtonDisplay;
-(void)_initRouteCoordinates;
-(void)_populateButtonActionAndTitles:(id)arg0 ;
-(void)_populateServerFields:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateAlertIDWithAlert:(id)arg0 ;
-(void)updateLocation:(id)arg0 ;


@end


#endif