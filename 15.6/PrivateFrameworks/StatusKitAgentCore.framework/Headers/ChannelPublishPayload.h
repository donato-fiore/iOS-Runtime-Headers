// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHANNELPUBLISHPAYLOAD_H
#define CHANNELPUBLISHPAYLOAD_H

@class PBCodable, NSData;
@protocol NSCopying;


#import "ChannelIdentity.h"

@interface ChannelPublishPayload : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) ChannelIdentity *channelIdentity; // ivar: _channelIdentity
@property (readonly, nonatomic) BOOL hasChannelIdentity;
@property (nonatomic) BOOL hasPendingPublishHint;
@property (nonatomic) BOOL hasPublishInitiateTimestampMillis;
@property (readonly, nonatomic) BOOL hasPublishPayload;
@property (nonatomic) BOOL hasPublishPayloadExpiryTtlMillis;
@property (nonatomic) BOOL hasPushPriority;
@property (nonatomic) BOOL hasRetryCount;
@property (nonatomic) BOOL hasScheduledPublishHint;
@property (nonatomic) BOOL pendingPublishHint; // ivar: _pendingPublishHint
@property (nonatomic) NSUInteger publishInitiateTimestampMillis; // ivar: _publishInitiateTimestampMillis
@property (retain, nonatomic) NSData *publishPayload; // ivar: _publishPayload
@property (nonatomic) NSUInteger publishPayloadExpiryTtlMillis; // ivar: _publishPayloadExpiryTtlMillis
@property (nonatomic) int pushPriority; // ivar: _pushPriority
@property (nonatomic) unsigned int retryCount; // ivar: _retryCount
@property (nonatomic) BOOL scheduledPublishHint; // ivar: _scheduledPublishHint


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)pushPriorityAsString:(int)arg0 ;
-(int)StringAsPushPriority:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif