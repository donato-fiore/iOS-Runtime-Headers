// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NNMKPROTOMAILBOX_H
#define NNMKPROTOMAILBOX_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NNMKProtoMailbox : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *accountId; // ivar: _accountId
@property (retain, nonatomic) NSString *customName; // ivar: _customName
@property (nonatomic) unsigned int filterType; // ivar: _filterType
@property (readonly, nonatomic) BOOL hasAccountId;
@property (readonly, nonatomic) BOOL hasCustomName;
@property (nonatomic) BOOL hasFilterType;
@property (readonly, nonatomic) BOOL hasMailboxId;
@property (nonatomic) BOOL hasSyncEnabled;
@property (nonatomic) BOOL hasSyncRequested;
@property (nonatomic) BOOL hasType;
@property (readonly, nonatomic) BOOL hasUrl;
@property (retain, nonatomic) NSString *mailboxId; // ivar: _mailboxId
@property (nonatomic) BOOL syncEnabled; // ivar: _syncEnabled
@property (nonatomic) BOOL syncRequested; // ivar: _syncRequested
@property (nonatomic) unsigned int type; // ivar: _type
@property (retain, nonatomic) NSString *url; // ivar: _url


+(id)protoMailboxFromMailbox:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)mailbox;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif