// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AWDCALLHISTORYNILUUID_H
#define AWDCALLHISTORYNILUUID_H

@class PBCodable;
@protocol NSCopying;



@interface AWDCallHistoryNilUuid : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int callStatus; // ivar: _callStatus
@property (nonatomic) unsigned int callType; // ivar: _callType
@property (nonatomic) BOOL hasCallStatus;
@property (nonatomic) BOOL hasCallType;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


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