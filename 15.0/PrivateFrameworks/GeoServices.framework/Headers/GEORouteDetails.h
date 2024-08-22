// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOROUTEDETAILS_H
#define GEOROUTEDETAILS_H

@class PBCodable;
@protocol NSCopying;



@interface GEORouteDetails : PBCodable <NSCopying>

 {
    CGFloat _timeSinceRouteResponse;
    int _resultIndex;
    unsigned int _stepID;
    BOOL _isNearCurrentlyDisplayedStep;
    BOOL _isNearRoute;
    BOOL _isUserTrackingOn;
    ? _flags;
}


@property (nonatomic) BOOL hasIsNearCurrentlyDisplayedStep;
@property (nonatomic) BOOL hasIsNearRoute;
@property (nonatomic) BOOL hasIsUserTrackingOn;
@property (nonatomic) BOOL hasResultIndex;
@property (nonatomic) BOOL hasStepID;
@property (nonatomic) BOOL hasTimeSinceRouteResponse;
@property (nonatomic) BOOL isNearCurrentlyDisplayedStep;
@property (nonatomic) BOOL isNearRoute;
@property (nonatomic) BOOL isUserTrackingOn;
@property (nonatomic) int resultIndex;
@property (nonatomic) unsigned int stepID;
@property (nonatomic) CGFloat timeSinceRouteResponse;


+(BOOL)isValid:(id)arg0 ;
+(id)routeDetailsWithResultIndex:(int)arg0 ;
+(id)routeDetailsWithResultIndex:(int)arg0 stepID:(int)arg1 ;
+(id)routeDetailsWithResultIndex:(int)arg0 stepID:(int)arg1 nearRoute:(BOOL)arg2 nearCurrentlyDisplayedStep:(BOOL)arg3 userTrackingOn:(BOOL)arg4 timeSinceResponse:(CGFloat)arg5 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)initWithResultIndex:(int)arg0 ;
-(id)jsonRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif