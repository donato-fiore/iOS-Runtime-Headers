// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NNMKPROTOFETCHREQUEST_H
#define NNMKPROTOFETCHREQUEST_H

@class PBRequest, NSString, NSData;
@protocol NSCopying;



@interface NNMKProtoFetchRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *conversationId; // ivar: _conversationId
@property (retain, nonatomic) NSData *currentDateForRequestingMoreMessages; // ivar: _currentDateForRequestingMoreMessages
@property (retain, nonatomic) NSData *currentMessageIdsAndStatus; // ivar: _currentMessageIdsAndStatus
@property (nonatomic) unsigned int fullSyncVersion; // ivar: _fullSyncVersion
@property (readonly, nonatomic) BOOL hasConversationId;
@property (readonly, nonatomic) BOOL hasCurrentDateForRequestingMoreMessages;
@property (readonly, nonatomic) BOOL hasCurrentMessageIdsAndStatus;
@property (nonatomic) BOOL hasFullSyncVersion;
@property (readonly, nonatomic) BOOL hasMailboxId;
@property (nonatomic) BOOL hasWantsBatchedResponse;
@property (nonatomic) BOOL hasWillTrimDatabaseAfterResults;
@property (retain, nonatomic) NSString *mailboxId; // ivar: _mailboxId
@property (nonatomic) BOOL wantsBatchedResponse; // ivar: _wantsBatchedResponse
@property (nonatomic) BOOL willTrimDatabaseAfterResults; // ivar: _willTrimDatabaseAfterResults


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