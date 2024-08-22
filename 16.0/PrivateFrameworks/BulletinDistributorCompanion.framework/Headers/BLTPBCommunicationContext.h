// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLTPBCOMMUNICATIONCONTEXT_H
#define BLTPBCOMMUNICATIONCONTEXT_H

@class PBCodable, NSString, NSData, NSURL, NSMutableArray;
@protocol NSCopying;


#import "BLTPBContact.h"

@interface BLTPBCommunicationContext : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *associatedObjectUriData; // ivar: _associatedObjectUriData
@property (retain, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (retain, nonatomic) NSData *contentURLData; // ivar: _contentURLData
@property (readonly) NSURL *contentURLLocalFileLocation;
@property (retain, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic) BOOL hasAssociatedObjectUriData;
@property (readonly, nonatomic) BOOL hasContentURLData;
@property (readonly, nonatomic) BOOL hasDisplayName;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasImageName;
@property (nonatomic) BOOL hasMentionsCurrentUser;
@property (nonatomic) BOOL hasNotifyRecipientAnyway;
@property (nonatomic) BOOL hasRecipientCount;
@property (nonatomic) BOOL hasReplyToCurrentUser;
@property (readonly, nonatomic) BOOL hasSender;
@property (nonatomic) BOOL hasSystemImage;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSString *imageName; // ivar: _imageName
@property (nonatomic) BOOL mentionsCurrentUser; // ivar: _mentionsCurrentUser
@property (nonatomic) BOOL notifyRecipientAnyway; // ivar: _notifyRecipientAnyway
@property (nonatomic) int recipientCount; // ivar: _recipientCount
@property (retain, nonatomic) NSMutableArray *recipients; // ivar: _recipients
@property (nonatomic) BOOL replyToCurrentUser; // ivar: _replyToCurrentUser
@property (retain, nonatomic) BLTPBContact *sender; // ivar: _sender
@property (nonatomic) BOOL systemImage; // ivar: _systemImage


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)recipientsAtIndex:(NSUInteger)arg0 ;
-(void)addRecipients:(id)arg0 ;
-(void)clearRecipients;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif