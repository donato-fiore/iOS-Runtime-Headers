// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOMAPITEMIDENTIFIER_H
#define GEOMAPITEMIDENTIFIER_H

@class NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "GEOPDMapsIdentifier.h"

@interface GEOMapItemIdentifier : NSObject <NSCopying, NSSecureCoding>

 {
    GEOPDMapsIdentifier *_mapsIdentifier;
}


@property (readonly, nonatomic) NSData *comparableRepresentation;
@property (readonly, nonatomic) ? coordinate;
@property (readonly, nonatomic, getter=hasCoordinate) BOOL hasCoordinate;
@property (readonly, nonatomic) NSUInteger muid;
@property (readonly, nonatomic) int resultProviderID;


+(BOOL)supportsSecureCoding;
+(id)mapItemIdentifiersFromMapsIdentifiers:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToGEOMapItemIdentifier:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(id)initWithBasemapId:(NSUInteger)arg0 resultProviderID:(int)arg1 coordinate:(struct ? )arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMUID:(NSUInteger)arg0 ;
-(id)initWithMUID:(NSUInteger)arg0 coordinate:(struct ? )arg1 ;
-(id)initWithMUID:(NSUInteger)arg0 resultProviderID:(int)arg1 coordinate:(struct ? )arg2 ;
-(id)initWithMapItem:(id)arg0 ;
-(id)initWithMapsIdentifier:(id)arg0 ;
-(id)initWithPlace:(id)arg0 ;
-(id)mapsIdentifier;
-(id)shortDebugDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif