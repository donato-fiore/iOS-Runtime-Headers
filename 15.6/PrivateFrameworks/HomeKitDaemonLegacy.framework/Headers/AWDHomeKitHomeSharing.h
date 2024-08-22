// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AWDHOMEKITHOMESHARING_H
#define AWDHOMEKITHOMESHARING_H

@class PBCodable;
@protocol NSCopying;



@interface AWDHomeKitHomeSharing : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int errorCode; // ivar: _errorCode
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) BOOL hasResponseType;
@property (nonatomic) BOOL hasStage;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) int responseType; // ivar: _responseType
@property (nonatomic) int stage; // ivar: _stage
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)responseTypeAsString:(int)arg0 ;
-(id)stageAsString:(int)arg0 ;
-(int)StringAsResponseType:(id)arg0 ;
-(int)StringAsStage:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif