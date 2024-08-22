// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AWDDEDBUGSESSIONENDED_H
#define AWDDEDBUGSESSIONENDED_H

@class PBCodable;
@protocol NSCopying;



@interface AWDDEDBugSessionEnded : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasSessionState;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) int sessionState; // ivar: _sessionState
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)sessionStateAsString:(int)arg0 ;
-(int)StringAsSessionState:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif