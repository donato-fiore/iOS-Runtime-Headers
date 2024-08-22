// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDPBMESSAGEHEADERS_H
#define EDPBMESSAGEHEADERS_H

@class PBCodable;
@protocol NSCopying;



@interface EDPBMessageHeaders : PBCodable <NSCopying>

 {
    ? _bccAddress;
    ? _bccContactIds;
    ? _bccDomains;
    ? _bccIsVips;
    ? _ccAddress;
    ? _ccContactIds;
    ? _ccDomains;
    ? _ccIsVips;
    ? _references;
    ? _subjectWords;
    ? _toAddress;
    ? _toContactIds;
    ? _toDomains;
    ? _toIsVips;
    ? _has;
}


@property (readonly, nonatomic) *NSInteger bccAddress;
@property (readonly, nonatomic) NSUInteger bccAddressCount;
@property (readonly, nonatomic) *NSInteger bccContactIds;
@property (readonly, nonatomic) NSUInteger bccContactIdsCount;
@property (readonly, nonatomic) *NSInteger bccDomains;
@property (readonly, nonatomic) NSUInteger bccDomainsCount;
@property (readonly, nonatomic) *BOOL bccIsVips;
@property (readonly, nonatomic) NSUInteger bccIsVipsCount;
@property (readonly, nonatomic) *NSInteger ccAddress;
@property (readonly, nonatomic) NSUInteger ccAddressCount;
@property (readonly, nonatomic) *NSInteger ccContactIds;
@property (readonly, nonatomic) NSUInteger ccContactIdsCount;
@property (readonly, nonatomic) *NSInteger ccDomains;
@property (readonly, nonatomic) NSUInteger ccDomainsCount;
@property (readonly, nonatomic) *BOOL ccIsVips;
@property (readonly, nonatomic) NSUInteger ccIsVipsCount;
@property (nonatomic) NSUInteger dateReceived; // ivar: _dateReceived
@property (nonatomic) BOOL hasDateReceived;
@property (nonatomic) BOOL hasListId;
@property (nonatomic) BOOL hasMessageIsForwarded;
@property (nonatomic) BOOL hasMessageIsReply;
@property (nonatomic) BOOL hasSender;
@property (nonatomic) BOOL hasSenderContactId;
@property (nonatomic) BOOL hasSenderDomain;
@property (nonatomic) BOOL hasSenderIsVip;
@property (nonatomic) BOOL hasUserIsBcc;
@property (nonatomic) BOOL hasUserIsCc;
@property (nonatomic) BOOL hasUserIsSender;
@property (nonatomic) BOOL hasUserIsTo;
@property (nonatomic) NSInteger listId; // ivar: _listId
@property (nonatomic) BOOL messageIsForwarded; // ivar: _messageIsForwarded
@property (nonatomic) BOOL messageIsReply; // ivar: _messageIsReply
@property (readonly, nonatomic) *NSInteger references;
@property (readonly, nonatomic) NSUInteger referencesCount;
@property (nonatomic) NSInteger sender; // ivar: _sender
@property (nonatomic) NSInteger senderContactId; // ivar: _senderContactId
@property (nonatomic) NSInteger senderDomain; // ivar: _senderDomain
@property (nonatomic) BOOL senderIsVip; // ivar: _senderIsVip
@property (readonly, nonatomic) *NSInteger subjectWords;
@property (readonly, nonatomic) NSUInteger subjectWordsCount;
@property (readonly, nonatomic) *NSInteger toAddress;
@property (readonly, nonatomic) NSUInteger toAddressCount;
@property (readonly, nonatomic) *NSInteger toContactIds;
@property (readonly, nonatomic) NSUInteger toContactIdsCount;
@property (readonly, nonatomic) *NSInteger toDomains;
@property (readonly, nonatomic) NSUInteger toDomainsCount;
@property (readonly, nonatomic) *BOOL toIsVips;
@property (readonly, nonatomic) NSUInteger toIsVipsCount;
@property (nonatomic) BOOL userIsBcc; // ivar: _userIsBcc
@property (nonatomic) BOOL userIsCc; // ivar: _userIsCc
@property (nonatomic) BOOL userIsSender; // ivar: _userIsSender
@property (nonatomic) BOOL userIsTo; // ivar: _userIsTo


-(BOOL)bccIsVipAtIndex:(NSUInteger)arg0 ;
-(BOOL)ccIsVipAtIndex:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(BOOL)toIsVipAtIndex:(NSUInteger)arg0 ;
-(NSInteger)bccAddressAtIndex:(NSUInteger)arg0 ;
-(NSInteger)bccContactIdAtIndex:(NSUInteger)arg0 ;
-(NSInteger)bccDomainAtIndex:(NSUInteger)arg0 ;
-(NSInteger)ccAddressAtIndex:(NSUInteger)arg0 ;
-(NSInteger)ccContactIdAtIndex:(NSUInteger)arg0 ;
-(NSInteger)ccDomainAtIndex:(NSUInteger)arg0 ;
-(NSInteger)referencesAtIndex:(NSUInteger)arg0 ;
-(NSInteger)subjectWordsAtIndex:(NSUInteger)arg0 ;
-(NSInteger)toAddressAtIndex:(NSUInteger)arg0 ;
-(NSInteger)toContactIdAtIndex:(NSUInteger)arg0 ;
-(NSInteger)toDomainAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addBccAddress:(NSInteger)arg0 ;
-(void)addBccContactId:(NSInteger)arg0 ;
-(void)addBccDomain:(NSInteger)arg0 ;
-(void)addBccIsVip:(BOOL)arg0 ;
-(void)addCcAddress:(NSInteger)arg0 ;
-(void)addCcContactId:(NSInteger)arg0 ;
-(void)addCcDomain:(NSInteger)arg0 ;
-(void)addCcIsVip:(BOOL)arg0 ;
-(void)addReferences:(NSInteger)arg0 ;
-(void)addSubjectWords:(NSInteger)arg0 ;
-(void)addToAddress:(NSInteger)arg0 ;
-(void)addToContactId:(NSInteger)arg0 ;
-(void)addToDomain:(NSInteger)arg0 ;
-(void)addToIsVip:(BOOL)arg0 ;
-(void)clearCcAddress;
-(void)clearCcContactIds;
-(void)clearCcDomains;
-(void)clearCcIsVips;
-(void)clearReferences;
-(void)clearSubjectWords;
-(void)clearToAddress;
-(void)clearToContactIds;
-(void)clearToDomains;
-(void)clearToIsVips;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif