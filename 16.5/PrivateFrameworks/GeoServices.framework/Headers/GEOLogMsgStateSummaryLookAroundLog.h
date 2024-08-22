// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOLOGMSGSTATESUMMARYLOOKAROUNDLOG_H
#define GEOLOGMSGSTATESUMMARYLOOKAROUNDLOG_H

@class PBCodable;
@protocol NSCopying;



@interface GEOLogMsgStateSummaryLookAroundLog : PBCodable <NSCopying>

 {
    unsigned int _durationSec;
    BOOL _hadMoveActions;
    BOOL _hadPanActions;
    BOOL _hadPoiTapActions;
    BOOL _hadShareActions;
    BOOL _hadZoomActions;
    ? _flags;
}


@property (nonatomic) unsigned int durationSec;
@property (nonatomic) BOOL hadMoveActions;
@property (nonatomic) BOOL hadPanActions;
@property (nonatomic) BOOL hadPoiTapActions;
@property (nonatomic) BOOL hadShareActions;
@property (nonatomic) BOOL hadZoomActions;
@property (nonatomic) BOOL hasDurationSec;
@property (nonatomic) BOOL hasHadMoveActions;
@property (nonatomic) BOOL hasHadPanActions;
@property (nonatomic) BOOL hasHadPoiTapActions;
@property (nonatomic) BOOL hasHadShareActions;
@property (nonatomic) BOOL hasHadZoomActions;


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