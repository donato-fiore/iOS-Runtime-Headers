// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NNMKPROTOMOREMESSAGESFORCONVERSATIONREQUEST_H
#define NNMKPROTOMOREMESSAGESFORCONVERSATIONREQUEST_H

@class PBRequest, NSData, NSString;
@protocol NSCopying;



@interface NNMKProtoMoreMessagesForConversationRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSData *beforeDateReceived; // ivar: _beforeDateReceived
@property (retain, nonatomic) NSString *conversationId; // ivar: _conversationId
@property (nonatomic) unsigned int fullSyncVersion; // ivar: _fullSyncVersion
@property (readonly, nonatomic) BOOL hasBeforeDateReceived;
@property (readonly, nonatomic) BOOL hasConversationId;
@property (nonatomic) BOOL hasFullSyncVersion;
@property (readonly, nonatomic) BOOL hasMailboxId;
@property (retain, nonatomic) NSString *mailboxId; // ivar: _mailboxId


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