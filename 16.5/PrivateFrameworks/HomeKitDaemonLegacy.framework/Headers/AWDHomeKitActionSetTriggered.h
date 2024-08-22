// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AWDHOMEKITACTIONSETTRIGGERED_H
#define AWDHOMEKITACTIONSETTRIGGERED_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface AWDHomeKitActionSetTriggered : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *clientMetricIdentifier; // ivar: _clientMetricIdentifier
@property (nonatomic) unsigned int duration; // ivar: _duration
@property (nonatomic) int errorCode; // ivar: _errorCode
@property (readonly, nonatomic) BOOL hasClientMetricIdentifier;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) BOOL hasNumAccessories;
@property (nonatomic) BOOL hasTimestamp;
@property (readonly, nonatomic) BOOL hasTransaction;
@property (nonatomic) BOOL hasTriggerSource;
@property (nonatomic) unsigned int numAccessories; // ivar: _numAccessories
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (retain, nonatomic) NSString *transaction; // ivar: _transaction
@property (nonatomic) int triggerSource; // ivar: _triggerSource


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)triggerSourceAsString:(int)arg0 ;
-(int)StringAsTriggerSource:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif