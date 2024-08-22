// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AWDHOMEKITSOFTWAREUPDATEFETCHED_H
#define AWDHOMEKITSOFTWAREUPDATEFETCHED_H

@class PBCodable;
@protocol NSCopying;



@interface AWDHomeKitSoftwareUpdateFetched : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int duration; // ivar: _duration
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasResultErrorCode;
@property (nonatomic) BOOL hasSource;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasWasNewUpdateFetched;
@property (nonatomic) unsigned int resultErrorCode; // ivar: _resultErrorCode
@property (nonatomic) int source; // ivar: _source
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (nonatomic) BOOL wasNewUpdateFetched; // ivar: _wasNewUpdateFetched


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)sourceAsString:(int)arg0 ;
-(int)StringAsSource:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif