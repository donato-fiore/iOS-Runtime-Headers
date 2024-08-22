// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NNMKPROTOSENDMESSAGEREQUEST_H
#define NNMKPROTOSENDMESSAGEREQUEST_H

@class PBRequest, NSString, NSMutableArray;
@protocol NSCopying;



@interface NNMKProtoSendMessageRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *accountId; // ivar: _accountId
@property (retain, nonatomic) NSString *body; // ivar: _body
@property (retain, nonatomic) NSMutableArray *ccs; // ivar: _ccs
@property (retain, nonatomic) NSString *composedMessageId; // ivar: _composedMessageId
@property (readonly, nonatomic) BOOL hasAccountId;
@property (readonly, nonatomic) BOOL hasBody;
@property (readonly, nonatomic) BOOL hasComposedMessageId;
@property (nonatomic) BOOL hasIncludeAttachments;
@property (readonly, nonatomic) BOOL hasReferenceMessageId;
@property (nonatomic) BOOL hasSendingType;
@property (readonly, nonatomic) BOOL hasSubject;
@property (nonatomic) BOOL includeAttachments; // ivar: _includeAttachments
@property (retain, nonatomic) NSString *referenceMessageId; // ivar: _referenceMessageId
@property (nonatomic) unsigned int sendingType; // ivar: _sendingType
@property (retain, nonatomic) NSString *subject; // ivar: _subject
@property (retain, nonatomic) NSMutableArray *tos; // ivar: _tos


+(Class)ccType;
+(Class)toType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)ccAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)toAtIndex:(NSUInteger)arg0 ;
-(void)addCc:(id)arg0 ;
-(void)addTo:(id)arg0 ;
-(void)clearCcs;
-(void)clearTos;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif