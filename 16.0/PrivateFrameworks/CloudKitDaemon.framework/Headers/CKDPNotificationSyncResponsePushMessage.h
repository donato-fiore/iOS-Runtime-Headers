// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDPNOTIFICATIONSYNCRESPONSEPUSHMESSAGE_H
#define CKDPNOTIFICATIONSYNCRESPONSEPUSHMESSAGE_H

@class PBCodable, NSString, NSData, NSMutableArray;
@protocol NSCopying;



@interface CKDPNotificationSyncResponsePushMessage : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int badgeCount; // ivar: _badgeCount
@property (retain, nonatomic) NSString *category; // ivar: _category
@property (retain, nonatomic) NSString *dialog; // ivar: _dialog
@property (nonatomic) BOOL hasBadgeCount;
@property (readonly, nonatomic) BOOL hasCategory;
@property (readonly, nonatomic) BOOL hasDialog;
@property (nonatomic) BOOL hasIsRead;
@property (readonly, nonatomic) BOOL hasPayload;
@property (readonly, nonatomic) BOOL hasSound;
@property (nonatomic) BOOL hasSource;
@property (readonly, nonatomic) BOOL hasSubtitle;
@property (readonly, nonatomic) BOOL hasSubtitleLocalizedKey;
@property (readonly, nonatomic) BOOL hasTitle;
@property (readonly, nonatomic) BOOL hasTitleLocalizedKey;
@property (readonly, nonatomic) BOOL hasUuid;
@property (nonatomic) BOOL isRead; // ivar: _isRead
@property (retain, nonatomic) NSData *payload; // ivar: _payload
@property (retain, nonatomic) NSString *sound; // ivar: _sound
@property (nonatomic) int source; // ivar: _source
@property (retain, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (retain, nonatomic) NSMutableArray *subtitleLocalizedArguments; // ivar: _subtitleLocalizedArguments
@property (retain, nonatomic) NSString *subtitleLocalizedKey; // ivar: _subtitleLocalizedKey
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) NSMutableArray *titleLocalizedArguments; // ivar: _titleLocalizedArguments
@property (retain, nonatomic) NSString *titleLocalizedKey; // ivar: _titleLocalizedKey
@property (retain, nonatomic) NSString *uuid; // ivar: _uuid


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)sourceAsString:(int)arg0 ;
-(id)subtitleLocalizedArgumentsAtIndex:(NSUInteger)arg0 ;
-(id)titleLocalizedArgumentsAtIndex:(NSUInteger)arg0 ;
-(int)StringAsSource:(id)arg0 ;
-(void)addSubtitleLocalizedArguments:(id)arg0 ;
-(void)addTitleLocalizedArguments:(id)arg0 ;
-(void)clearTitleLocalizedArguments;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif