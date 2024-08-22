// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLPALTIMETERCOLLECTIONREQUEST_H
#define CLPALTIMETERCOLLECTIONREQUEST_H

@class PBRequest, NSMutableArray;
@protocol NSCopying;


#import "CLPContext.h"
#import "CLPLocation.h"
#import "CLPMeta.h"

@interface CLPAltimeterCollectionRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int collectionType; // ivar: _collectionType
@property (retain, nonatomic) CLPContext *context; // ivar: _context
@property (nonatomic) BOOL hasCollectionType;
@property (readonly, nonatomic) BOOL hasContext;
@property (readonly, nonatomic) BOOL hasLocation;
@property (readonly, nonatomic) BOOL hasMeta;
@property (nonatomic) BOOL hasStartTimestamp;
@property (nonatomic) BOOL hasStopTimestamp;
@property (retain, nonatomic) CLPLocation *location; // ivar: _location
@property (retain, nonatomic) NSMutableArray *locations; // ivar: _locations
@property (retain, nonatomic) CLPMeta *meta; // ivar: _meta
@property (retain, nonatomic) NSMutableArray *pressures; // ivar: _pressures
@property (nonatomic) CGFloat startTimestamp; // ivar: _startTimestamp
@property (nonatomic) CGFloat stopTimestamp; // ivar: _stopTimestamp
@property (retain, nonatomic) NSMutableArray *wifiScans; // ivar: _wifiScans


+(Class)pressureType;
+(Class)wifiScanType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)collectionTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)locationsAtIndex:(NSUInteger)arg0 ;
-(id)pressureAtIndex:(NSUInteger)arg0 ;
-(id)wifiScanAtIndex:(NSUInteger)arg0 ;
-(int)StringAsCollectionType:(id)arg0 ;
-(void)addLocations:(id)arg0 ;
-(void)addPressure:(id)arg0 ;
-(void)addWifiScan:(id)arg0 ;
-(void)clearLocations;
-(void)clearPressures;
-(void)clearWifiScans;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif