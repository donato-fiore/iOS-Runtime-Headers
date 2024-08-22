// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTPBEXTERNALANALYTICSEVENTSEND_H
#define NTPBEXTERNALANALYTICSEVENTSEND_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NTPBExternalAnalyticsEventSend : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *contentViewedId; // ivar: _contentViewedId
@property (retain, nonatomic) NSString *eventUdid; // ivar: _eventUdid
@property (nonatomic) int externalAnalyticsEventType; // ivar: _externalAnalyticsEventType
@property (retain, nonatomic) NSString *externalAnalyticsId; // ivar: _externalAnalyticsId
@property (retain, nonatomic) NSString *failureReasonCode; // ivar: _failureReasonCode
@property (readonly, nonatomic) BOOL hasContentViewedId;
@property (readonly, nonatomic) BOOL hasEventUdid;
@property (nonatomic) BOOL hasExternalAnalyticsEventType;
@property (readonly, nonatomic) BOOL hasExternalAnalyticsId;
@property (readonly, nonatomic) BOOL hasFailureReasonCode;
@property (nonatomic) BOOL hasResultType;
@property (readonly, nonatomic) BOOL hasSourceChannelId;
@property (nonatomic) int resultType; // ivar: _resultType
@property (retain, nonatomic) NSString *sourceChannelId; // ivar: _sourceChannelId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif