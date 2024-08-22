// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SYPBCONTENTITEM_H
#define SYPBCONTENTITEM_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;



@interface SYPBContentItem : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *displayTitle; // ivar: _displayTitle
@property (readonly, nonatomic) BOOL hasDisplayTitle;
@property (readonly, nonatomic) BOOL hasItemURL;
@property (readonly, nonatomic) BOOL hasLinkPreviewMetadata;
@property (nonatomic) BOOL hasPreviewLoadLevel;
@property (readonly, nonatomic) BOOL hasSourceIdentifier;
@property (readonly, nonatomic) BOOL hasSourceLastKnownName;
@property (readonly, nonatomic) BOOL hasUserActivityData;
@property (retain, nonatomic) NSData *itemIdentifierData; // ivar: _itemIdentifierData
@property (retain, nonatomic) NSString *itemURL; // ivar: _itemURL
@property (retain, nonatomic) NSData *linkPreviewMetadata; // ivar: _linkPreviewMetadata
@property (nonatomic) NSInteger previewLoadLevel; // ivar: _previewLoadLevel
@property (retain, nonatomic) NSString *sourceIdentifier; // ivar: _sourceIdentifier
@property (retain, nonatomic) NSString *sourceLastKnownName; // ivar: _sourceLastKnownName
@property (retain, nonatomic) NSData *userActivityData; // ivar: _userActivityData


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