// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ADSEGMENTUPDATERESPONSE_H
#define ADSEGMENTUPDATERESPONSE_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface ADSegmentUpdateResponse : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasIdDebug;
@property (nonatomic) BOOL hasMaxSegmentUpdateIntervalInSeconds;
@property (nonatomic) BOOL hasSegmentRefreshIntervalInSeconds;
@property (retain, nonatomic) NSString *idDebug; // ivar: _idDebug
@property (nonatomic) CGFloat maxSegmentUpdateIntervalInSeconds; // ivar: _maxSegmentUpdateIntervalInSeconds
@property (nonatomic) CGFloat segmentRefreshIntervalInSeconds; // ivar: _segmentRefreshIntervalInSeconds


+(id)options;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif