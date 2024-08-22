// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NNMKPROTOACCOUNTADDITIONORUPDATE_H
#define NNMKPROTOACCOUNTADDITIONORUPDATE_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface NNMKProtoAccountAdditionOrUpdate : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *accountId; // ivar: _accountId
@property (retain, nonatomic) NSString *defaultEmail; // ivar: _defaultEmail
@property (retain, nonatomic) NSString *displayName; // ivar: _displayName
@property (retain, nonatomic) NSString *emailAddressToken; // ivar: _emailAddressToken
@property (retain, nonatomic) NSMutableArray *emails; // ivar: _emails
@property (nonatomic) unsigned int fullSyncVersion; // ivar: _fullSyncVersion
@property (readonly, nonatomic) BOOL hasAccountId;
@property (readonly, nonatomic) BOOL hasDefaultEmail;
@property (readonly, nonatomic) BOOL hasDisplayName;
@property (readonly, nonatomic) BOOL hasEmailAddressToken;
@property (nonatomic) BOOL hasFullSyncVersion;
@property (readonly, nonatomic) BOOL hasLocalId;
@property (readonly, nonatomic) BOOL hasParentId;
@property (readonly, nonatomic) BOOL hasPccEmailAddress;
@property (nonatomic) BOOL hasShouldArchive;
@property (readonly, nonatomic) BOOL hasTypeIdentifier;
@property (readonly, nonatomic) BOOL hasUsername;
@property (retain, nonatomic) NSString *localId; // ivar: _localId
@property (retain, nonatomic) NSMutableArray *mailboxes; // ivar: _mailboxes
@property (retain, nonatomic) NSString *parentId; // ivar: _parentId
@property (retain, nonatomic) NSString *pccEmailAddress; // ivar: _pccEmailAddress
@property (nonatomic) BOOL shouldArchive; // ivar: _shouldArchive
@property (retain, nonatomic) NSString *typeIdentifier; // ivar: _typeIdentifier
@property (retain, nonatomic) NSString *username; // ivar: _username


+(Class)emailType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)emailAtIndex:(NSUInteger)arg0 ;
-(id)mailboxesAtIndex:(NSUInteger)arg0 ;
-(void)addEmail:(id)arg0 ;
-(void)addMailboxes:(id)arg0 ;
-(void)clearEmails;
-(void)clearMailboxes;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif