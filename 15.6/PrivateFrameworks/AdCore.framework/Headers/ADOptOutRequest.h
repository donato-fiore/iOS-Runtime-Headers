// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ADOPTOUTREQUEST_H
#define ADOPTOUTREQUEST_H

@class PBRequest, NSData;
@protocol NSCopying;



@interface ADOptOutRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSData *dPID; // ivar: _dPID
@property (readonly, nonatomic) BOOL hasDPID;
@property (readonly, nonatomic) BOOL hasIAdID;
@property (nonatomic) BOOL hasOptedOutStatus;
@property (nonatomic) BOOL hasStatusChangeTimestamp;
@property (nonatomic) BOOL hasTimezone;
@property (nonatomic) BOOL hasTransmitTimestamp;
@property (retain, nonatomic) NSData *iAdID; // ivar: _iAdID
@property (nonatomic) BOOL optedOutStatus; // ivar: _optedOutStatus
@property (nonatomic) CGFloat statusChangeTimestamp; // ivar: _statusChangeTimestamp
@property (nonatomic) float timezone; // ivar: _timezone
@property (nonatomic) CGFloat transmitTimestamp; // ivar: _transmitTimestamp


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