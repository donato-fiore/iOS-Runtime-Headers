// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPROTOBUFCOMMONSHARINGMESSAGE_H
#define PKPROTOBUFCOMMONSHARINGMESSAGE_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;



@interface PKProtobufCommonSharingMessage : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *actionURL; // ivar: _actionURL
@property (retain, nonatomic) NSString *buttonTitle; // ivar: _buttonTitle
@property (retain, nonatomic) NSString *dataString; // ivar: _dataString
@property (readonly, nonatomic) BOOL hasActionURL;
@property (readonly, nonatomic) BOOL hasButtonTitle;
@property (readonly, nonatomic) BOOL hasDataString;
@property (readonly, nonatomic) BOOL hasMessageData;
@property (readonly, nonatomic) BOOL hasMessageType;
@property (readonly, nonatomic) BOOL hasPassThumbnailImage;
@property (readonly, nonatomic) BOOL hasPhoneInvitation;
@property (nonatomic) BOOL hasStatus;
@property (readonly, nonatomic) BOOL hasSubtitle;
@property (readonly, nonatomic) BOOL hasThumbnailImage;
@property (readonly, nonatomic) BOOL hasTitle;
@property (readonly, nonatomic) BOOL hasTopLeftTitle;
@property (readonly, nonatomic) BOOL hasTopRightTitle;
@property (readonly, nonatomic) BOOL hasUniqueIdentifier;
@property (readonly, nonatomic) BOOL hasWatchInvitation;
@property (retain, nonatomic) NSData *messageData; // ivar: _messageData
@property (retain, nonatomic) NSString *messageType; // ivar: _messageType
@property (retain, nonatomic) NSData *passThumbnailImage; // ivar: _passThumbnailImage
@property (retain, nonatomic) NSString *phoneInvitation; // ivar: _phoneInvitation
@property (nonatomic) int status; // ivar: _status
@property (retain, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (retain, nonatomic) NSData *thumbnailImage; // ivar: _thumbnailImage
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) NSString *topLeftTitle; // ivar: _topLeftTitle
@property (retain, nonatomic) NSString *topRightTitle; // ivar: _topRightTitle
@property (retain, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier
@property (nonatomic) unsigned int version; // ivar: _version
@property (retain, nonatomic) NSString *watchInvitation; // ivar: _watchInvitation


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)statusAsString:(int)arg0 ;
-(int)StringAsStatus:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif