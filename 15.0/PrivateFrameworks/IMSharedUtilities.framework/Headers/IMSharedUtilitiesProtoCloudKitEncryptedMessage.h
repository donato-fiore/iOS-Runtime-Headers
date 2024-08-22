// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMSHAREDUTILITIESPROTOCLOUDKITENCRYPTEDMESSAGE_H
#define IMSHAREDUTILITIESPROTOCLOUDKITENCRYPTEDMESSAGE_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;



@interface IMSharedUtilitiesProtoCloudKitEncryptedMessage : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *associatedMessageGuid; // ivar: _associatedMessageGuid
@property (nonatomic) unsigned int associatedMessageRangeLength; // ivar: _associatedMessageRangeLength
@property (nonatomic) unsigned int associatedMessageRangeLocation; // ivar: _associatedMessageRangeLocation
@property (nonatomic) NSInteger associatedMessageType; // ivar: _associatedMessageType
@property (retain, nonatomic) NSString *baloonBundleId; // ivar: _baloonBundleId
@property (nonatomic) NSUInteger expireState; // ivar: _expireState
@property (retain, nonatomic) NSString *expressiveSendId; // ivar: _expressiveSendId
@property (readonly, nonatomic) BOOL hasAssociatedMessageGuid;
@property (nonatomic) BOOL hasAssociatedMessageRangeLength;
@property (nonatomic) BOOL hasAssociatedMessageRangeLocation;
@property (nonatomic) BOOL hasAssociatedMessageType;
@property (readonly, nonatomic) BOOL hasBaloonBundleId;
@property (nonatomic) BOOL hasExpireState;
@property (readonly, nonatomic) BOOL hasExpressiveSendId;
@property (readonly, nonatomic) BOOL hasMessageBody;
@property (readonly, nonatomic) BOOL hasMessageBodyData;
@property (readonly, nonatomic) BOOL hasMessageSubject;
@property (readonly, nonatomic) BOOL hasMessageSummaryInfo;
@property (readonly, nonatomic) BOOL hasPadding;
@property (readonly, nonatomic) BOOL hasPayloadData;
@property (nonatomic) BOOL hasTimeDelivered;
@property (nonatomic) BOOL hasTimeExpressiveSentPlayed;
@property (nonatomic) BOOL hasTimePlayed;
@property (nonatomic) BOOL hasTimeRead;
@property (nonatomic) BOOL hasVersion;
@property (retain, nonatomic) NSString *messageBody; // ivar: _messageBody
@property (retain, nonatomic) NSData *messageBodyData; // ivar: _messageBodyData
@property (retain, nonatomic) NSString *messageSubject; // ivar: _messageSubject
@property (retain, nonatomic) NSData *messageSummaryInfo; // ivar: _messageSummaryInfo
@property (retain, nonatomic) NSData *padding; // ivar: _padding
@property (retain, nonatomic) NSData *payloadData; // ivar: _payloadData
@property (nonatomic) NSUInteger timeDelivered; // ivar: _timeDelivered
@property (nonatomic) NSUInteger timeExpressiveSentPlayed; // ivar: _timeExpressiveSentPlayed
@property (nonatomic) NSUInteger timePlayed; // ivar: _timePlayed
@property (nonatomic) NSUInteger timeRead; // ivar: _timeRead
@property (nonatomic) unsigned int version; // ivar: _version


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif