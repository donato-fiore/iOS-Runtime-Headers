// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOCOMPOSEDROUTEADVISORY_H
#define GEOCOMPOSEDROUTEADVISORY_H

@class NSArray;
@protocol NSSecureCoding, NSCopying, GEOServerFormattedString;

#import <Foundation/Foundation.h>

#import "GEOPBTransitArtwork.h"

@interface GEOComposedRouteAdvisory : NSObject <NSSecureCoding, NSCopying>

 {
    NSArray *routeAdvisoryCards;
    BOOL _initialisedForTransit;
}


@property (readonly, nonatomic) NSArray *advisoryItems; // ivar: _advisoryItems
@property (nonatomic) BOOL alwaysClickable; // ivar: _alwaysClickable
@property (readonly, nonatomic) NSArray *analyticsMessageValues; // ivar: _analyticsMessageValues
@property (readonly, nonatomic) GEOPBTransitArtwork *artwork; // ivar: _artwork
@property (retain, nonatomic) NSObject<GEOServerFormattedString> *inlineTitle; // ivar: _inlineTitle
@property (readonly, nonatomic) BOOL isClickable; // ivar: _isClickable
@property (retain, nonatomic) NSArray *routeAdvisoryCards; // ivar: _routeAdvisoryCards
@property (retain, nonatomic) NSArray *routeIncidents; // ivar: _routeIncidents
@property (readonly, nonatomic) NSObject<GEOServerFormattedString> *title; // ivar: _title


+(BOOL)supportsSecureCoding;
+(id)_fallbackAdvisoryArtwork;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithGeoAdvisoryNotice:(id)arg0 ;
-(id)initWithGeoAdvisoryNotice:(id)arg0 incidents:(id)arg1 ;
-(id)initWithGeoAdvisoryNotice:(id)arg0 transitIncidents:(id)arg1 ;
-(id)initWithMessage:(id)arg0 incidents:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif