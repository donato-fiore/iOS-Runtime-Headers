// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AWDHOMEKITPRESENCEREPORT_H
#define AWDHOMEKITPRESENCEREPORT_H

@class PBCodable;
@protocol NSCopying;



@interface AWDHomeKitPresenceReport : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int authStatus; // ivar: _authStatus
@property (nonatomic) int computeStatus; // ivar: _computeStatus
@property (nonatomic) int direction; // ivar: _direction
@property (nonatomic) BOOL hasAuthStatus;
@property (nonatomic) BOOL hasComputeStatus;
@property (nonatomic) BOOL hasDirection;
@property (nonatomic) BOOL hasReason;
@property (nonatomic) BOOL hasResultErrorCode;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) int reason; // ivar: _reason
@property (nonatomic) int resultErrorCode; // ivar: _resultErrorCode
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)authStatusAsString:(int)arg0 ;
-(id)computeStatusAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)directionAsString:(int)arg0 ;
-(id)reasonAsString:(int)arg0 ;
-(int)StringAsAuthStatus:(id)arg0 ;
-(int)StringAsComputeStatus:(id)arg0 ;
-(int)StringAsDirection:(id)arg0 ;
-(int)StringAsReason:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif