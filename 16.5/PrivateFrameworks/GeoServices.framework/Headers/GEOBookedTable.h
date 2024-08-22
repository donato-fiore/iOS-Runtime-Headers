// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOBOOKEDTABLE_H
#define GEOBOOKEDTABLE_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface GEOBookedTable : PBCodable <NSCopying>

 {
    NSString *_appId;
    NSUInteger _muid;
    BOOL _bookedUsingMaps;
    BOOL _called;
    BOOL _cancelled;
    BOOL _isAsync;
    BOOL _routed;
    BOOL _shared;
    BOOL _tappedCancelReservation;
    BOOL _tappedChangeReservation;
    BOOL _tappedProactiveTrayItem;
    BOOL _viewedDetailsFromPlacecard;
    BOOL _viewedInPlacecard;
    BOOL _viewedInProactiveTray;
    ? _flags;
}


@property (retain, nonatomic) NSString *appId;
@property (nonatomic) BOOL bookedUsingMaps;
@property (nonatomic) BOOL called;
@property (nonatomic) BOOL cancelled;
@property (readonly, nonatomic) BOOL hasAppId;
@property (nonatomic) BOOL hasBookedUsingMaps;
@property (nonatomic) BOOL hasCalled;
@property (nonatomic) BOOL hasCancelled;
@property (nonatomic) BOOL hasIsAsync;
@property (nonatomic) BOOL hasMuid;
@property (nonatomic) BOOL hasRouted;
@property (nonatomic) BOOL hasShared;
@property (nonatomic) BOOL hasTappedCancelReservation;
@property (nonatomic) BOOL hasTappedChangeReservation;
@property (nonatomic) BOOL hasTappedProactiveTrayItem;
@property (nonatomic) BOOL hasViewedDetailsFromPlacecard;
@property (nonatomic) BOOL hasViewedInPlacecard;
@property (nonatomic) BOOL hasViewedInProactiveTray;
@property (nonatomic) BOOL isAsync;
@property (nonatomic) NSUInteger muid;
@property (nonatomic) BOOL routed;
@property (nonatomic) BOOL shared;
@property (nonatomic) BOOL tappedCancelReservation;
@property (nonatomic) BOOL tappedChangeReservation;
@property (nonatomic) BOOL tappedProactiveTrayItem;
@property (nonatomic) BOOL viewedDetailsFromPlacecard;
@property (nonatomic) BOOL viewedInPlacecard;
@property (nonatomic) BOOL viewedInProactiveTray;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif