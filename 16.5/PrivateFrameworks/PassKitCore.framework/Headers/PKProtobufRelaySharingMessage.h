// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPROTOBUFRELAYSHARINGMESSAGE_H
#define PKPROTOBUFRELAYSHARINGMESSAGE_H

@class PBCodable, NSString, NSData, NSMutableArray;
@protocol NSCopying;



@interface PKProtobufRelaySharingMessage : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *carKeyReaderIdentifier; // ivar: _carKeyReaderIdentifier
@property (readonly, nonatomic) BOOL hasCarKeyReaderIdentifier;
@property (readonly, nonatomic) BOOL hasLocalData;
@property (readonly, nonatomic) BOOL hasProvisioningCredentialHash;
@property (readonly, nonatomic) BOOL hasStatus;
@property (readonly, nonatomic) BOOL hasSubtitle;
@property (readonly, nonatomic) BOOL hasThumbnailImage;
@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) NSData *localData; // ivar: _localData
@property (retain, nonatomic) NSMutableArray *mailboxURLs; // ivar: _mailboxURLs
@property (retain, nonatomic) NSString *provisioningCredentialHash; // ivar: _provisioningCredentialHash
@property (retain, nonatomic) NSString *status; // ivar: _status
@property (retain, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (retain, nonatomic) NSData *thumbnailImage; // ivar: _thumbnailImage
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) unsigned int version; // ivar: _version


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)mailboxURLsAtIndex:(NSUInteger)arg0 ;
-(void)addMailboxURLs:(id)arg0 ;
-(void)clearMailboxURLs;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif