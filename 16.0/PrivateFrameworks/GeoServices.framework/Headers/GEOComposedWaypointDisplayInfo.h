// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOCOMPOSEDWAYPOINTDISPLAYINFO_H
#define GEOCOMPOSEDWAYPOINTDISPLAYINFO_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "GEOARInfo.h"
#import "GEOPBTransitArtwork.h"
#import "GEOEVChargingInfo.h"
#import "GEOStyleAttributes.h"

@interface GEOComposedWaypointDisplayInfo : NSObject <NSSecureCoding>



@property (readonly, nonatomic) GEOARInfo *arInfo; // ivar: _arInfo
@property (readonly, nonatomic) GEOPBTransitArtwork *artwork; // ivar: _artwork
@property (readonly, nonatomic) GEOEVChargingInfo *evChargingInfo; // ivar: _evChargingInfo
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) ? position; // ivar: _position
@property (readonly, nonatomic) GEOStyleAttributes *styleAttributes; // ivar: _styleAttributes


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithGeoWaypointInfo:(id)arg0 waypoint:(id)arg1 ;
-(void)_initPositionWithGeoWaypointInfo:(id)arg0 waypoint:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif