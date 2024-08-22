// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _GEOTRANSITLINE_H
#define _GEOTRANSITLINE_H

@class NSString, NSArray;
@protocol GEOTransitLine, NSSecureCoding, GEOTransitSystem, GEOTransitArtworkDataSource;

#import <Foundation/Foundation.h>

#import "GEOPBTransitLine.h"
#import "GEOMapItemIdentifier.h"
#import "GEOStyleAttributes.h"

@interface _GEOTransitLine : NSObject <GEOTransitLine, NSSecureCoding>

 {
    GEOPBTransitLine *_line;
    id<GEOTransitSystem> *_system;
    ? _locationHint;
}


@property (readonly, nonatomic) NSObject<GEOTransitArtworkDataSource> *alternateArtwork;
@property (readonly, nonatomic) NSObject<GEOTransitArtworkDataSource> *artwork;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUInteger departureTimeDisplayStyle;
@property (readonly, nonatomic) BOOL departuresAreVehicleSpecific;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasLineColorString;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<GEOTransitArtworkDataSource> *headerArtwork;
@property (readonly, nonatomic) GEOMapItemIdentifier *identifier;
@property (readonly, nonatomic) BOOL isBus;
@property (readonly, nonatomic) NSString *lineColorString;
@property (readonly, nonatomic) NSObject<GEOTransitArtworkDataSource> *modeArtwork;
@property (readonly, nonatomic) NSUInteger muid;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSArray *operatingHours;
@property (readonly, nonatomic) BOOL showVehicleNumber;
@property (readonly, nonatomic) GEOStyleAttributes *styleAttributes;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<GEOTransitSystem> *system;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLine:(id)arg0 system:(id)arg1 locationHint:(struct ? )arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif