// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BMPBASKTOBUYEVENT_H
#define BMPBASKTOBUYEVENT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface BMPBAskToBuyEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *actionUserID; // ivar: _actionUserID
@property (retain, nonatomic) NSString *ageRating; // ivar: _ageRating
@property (nonatomic) CGFloat eventTime; // ivar: _eventTime
@property (readonly, nonatomic) BOOL hasActionUserID;
@property (readonly, nonatomic) BOOL hasAgeRating;
@property (nonatomic) BOOL hasEventTime;
@property (readonly, nonatomic) BOOL hasItemDescription;
@property (readonly, nonatomic) BOOL hasItemLocalizedPrice;
@property (readonly, nonatomic) BOOL hasItemTitle;
@property (readonly, nonatomic) BOOL hasProductType;
@property (readonly, nonatomic) BOOL hasRequestID;
@property (nonatomic) BOOL hasStarRating;
@property (nonatomic) BOOL hasStatus;
@property (readonly, nonatomic) BOOL hasThumbnailPath;
@property (readonly, nonatomic) BOOL hasUserID;
@property (retain, nonatomic) NSString *itemDescription; // ivar: _itemDescription
@property (retain, nonatomic) NSString *itemLocalizedPrice; // ivar: _itemLocalizedPrice
@property (retain, nonatomic) NSString *itemTitle; // ivar: _itemTitle
@property (retain, nonatomic) NSString *productType; // ivar: _productType
@property (retain, nonatomic) NSString *requestID; // ivar: _requestID
@property (nonatomic) float starRating; // ivar: _starRating
@property (nonatomic) int status; // ivar: _status
@property (retain, nonatomic) NSString *thumbnailPath; // ivar: _thumbnailPath
@property (retain, nonatomic) NSString *userID; // ivar: _userID


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