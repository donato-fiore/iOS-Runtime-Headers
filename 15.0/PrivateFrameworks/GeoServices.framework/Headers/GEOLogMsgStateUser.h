// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOLOGMSGSTATEUSER_H
#define GEOLOGMSGSTATEUSER_H

@class PBCodable, PBDataReader, NSString;
@protocol NSCopying;



@interface GEOLogMsgStateUser : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    GEOSessionID _preSyncSessionId;
    NSString *_homeCountryCode;
    NSString *_homeMetroRegion;
    CGFloat _mapsUseLastDate;
    CGFloat _mapsUseStartDate;
    CGFloat _syncFirstTimestamp;
    CGFloat _syncLastTimestamp;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    BOOL _isTourist;
    ? _flags;
}


@property (readonly, nonatomic) BOOL hasHomeCountryCode;
@property (readonly, nonatomic) BOOL hasHomeMetroRegion;
@property (nonatomic) BOOL hasIsTourist;
@property (nonatomic) BOOL hasMapsUseLastDate;
@property (nonatomic) BOOL hasMapsUseStartDate;
@property (nonatomic) BOOL hasPreSyncSessionId;
@property (nonatomic) BOOL hasSyncFirstTimestamp;
@property (nonatomic) BOOL hasSyncLastTimestamp;
@property (retain, nonatomic) NSString *homeCountryCode;
@property (retain, nonatomic) NSString *homeMetroRegion;
@property (nonatomic) BOOL isTourist;
@property (nonatomic) CGFloat mapsUseLastDate;
@property (nonatomic) CGFloat mapsUseStartDate;
@property (nonatomic) GEOSessionID preSyncSessionId;
@property (nonatomic) CGFloat syncFirstTimestamp;
@property (nonatomic) CGFloat syncLastTimestamp;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif