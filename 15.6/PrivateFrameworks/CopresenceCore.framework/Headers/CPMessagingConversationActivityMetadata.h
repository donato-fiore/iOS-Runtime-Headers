// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPMESSAGINGCONVERSATIONACTIVITYMETADATA_H
#define CPMESSAGINGCONVERSATIONACTIVITYMETADATA_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;



@interface CPMessagingConversationActivityMetadata : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *fallbackURL; // ivar: _fallbackURL
@property (readonly, nonatomic) BOOL hasFallbackURL;
@property (readonly, nonatomic) BOOL hasImage;
@property (readonly, nonatomic) BOOL hasSubtitle;
@property (nonatomic) BOOL hasSupportsContinuationOnTV;
@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) NSData *image; // ivar: _image
@property (retain, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (nonatomic) BOOL supportsContinuationOnTV; // ivar: _supportsContinuationOnTV
@property (retain, nonatomic) NSString *title; // ivar: _title


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