// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOLOGMSGSTATEUSERSESSION_H
#define GEOLOGMSGSTATEUSERSESSION_H

@class PBCodable;
@protocol NSCopying;


#import "GEOLocalTime.h"

@interface GEOLogMsgStateUserSession : PBCodable <NSCopying>

 {
    GEOSessionID _initialDeviceSessionId;
    GEOSessionID _navSessionId;
    GEOSessionID _preSyncSessionId;
    GEOSessionID _sessionId;
    CGFloat _ageOfSessionIdInSeconds;
    GEOLocalTime *_eventTime;
    CGFloat _lastIcloudSyncDate;
    CGFloat _navSessionRelativeTimestamp;
    CGFloat _relativeTimestamp;
    NSUInteger _sessionEpoch;
    unsigned int _sequenceNumber;
    BOOL _didPreviouslyRotate;
    ? _flags;
}


@property (nonatomic) CGFloat ageOfSessionIdInSeconds;
@property (nonatomic) BOOL didPreviouslyRotate;
@property (retain, nonatomic) GEOLocalTime *eventTime;
@property (nonatomic) BOOL hasAgeOfSessionIdInSeconds;
@property (nonatomic) BOOL hasDidPreviouslyRotate;
@property (readonly, nonatomic) BOOL hasEventTime;
@property (nonatomic) BOOL hasInitialDeviceSessionId;
@property (nonatomic) BOOL hasLastIcloudSyncDate;
@property (nonatomic) BOOL hasNavSessionId;
@property (nonatomic) BOOL hasNavSessionRelativeTimestamp;
@property (nonatomic) BOOL hasPreSyncSessionId;
@property (nonatomic) BOOL hasRelativeTimestamp;
@property (nonatomic) BOOL hasSequenceNumber;
@property (nonatomic) BOOL hasSessionEpoch;
@property (nonatomic) BOOL hasSessionId;
@property (nonatomic) GEOSessionID initialDeviceSessionId;
@property (nonatomic) CGFloat lastIcloudSyncDate;
@property (nonatomic) GEOSessionID navSessionId;
@property (nonatomic) CGFloat navSessionRelativeTimestamp;
@property (nonatomic) GEOSessionID preSyncSessionId;
@property (nonatomic) CGFloat relativeTimestamp;
@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic) NSUInteger sessionEpoch;
@property (nonatomic) GEOSessionID sessionId;


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