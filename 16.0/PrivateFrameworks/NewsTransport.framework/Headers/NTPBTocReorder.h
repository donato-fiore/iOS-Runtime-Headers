// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTPBTOCREORDER_H
#define NTPBTOCREORDER_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;



@interface NTPBTocReorder : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *feedId; // ivar: _feedId
@property (nonatomic) int feedType; // ivar: _feedType
@property (readonly, nonatomic) BOOL hasFeedId;
@property (nonatomic) BOOL hasFeedType;
@property (readonly, nonatomic) BOOL hasTocExposureId;
@property (nonatomic) BOOL hasTocNewIndex;
@property (nonatomic) BOOL hasTocOldIndex;
@property (retain, nonatomic) NSData *tocExposureId; // ivar: _tocExposureId
@property (nonatomic) int tocNewIndex; // ivar: _tocNewIndex
@property (nonatomic) int tocOldIndex; // ivar: _tocOldIndex


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)feedTypeAsString:(int)arg0 ;
-(int)StringAsFeedType:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif