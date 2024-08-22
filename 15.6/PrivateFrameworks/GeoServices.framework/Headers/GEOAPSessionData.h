// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOAPSESSIONDATA_H
#define GEOAPSESSIONDATA_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface GEOAPSessionData : PBCodable <NSCopying>

 {
    GEOSessionID _sessionId;
    CGFloat _createTimeInUse;
    CGFloat _createTime;
    CGFloat _mapsUserStartDate;
    NSString *_originHardwareClass;
    NSUInteger _sessionEpoch;
    unsigned int _opaqueAppId;
    ? _flags;
}


@property (nonatomic) CGFloat createTime;
@property (nonatomic) CGFloat createTimeInUse;
@property (nonatomic) BOOL hasCreateTime;
@property (nonatomic) BOOL hasCreateTimeInUse;
@property (nonatomic) BOOL hasMapsUserStartDate;
@property (nonatomic) BOOL hasOpaqueAppId;
@property (readonly, nonatomic) BOOL hasOriginHardwareClass;
@property (nonatomic) BOOL hasSessionEpoch;
@property (nonatomic) BOOL hasSessionId;
@property (nonatomic) CGFloat mapsUserStartDate;
@property (nonatomic) unsigned int opaqueAppId;
@property (retain, nonatomic) NSString *originHardwareClass;
@property (nonatomic) NSUInteger sessionEpoch;
@property (nonatomic) GEOSessionID sessionId;


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