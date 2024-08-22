// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXPBPREDICTIONLOCATIONOFINTEREST_H
#define ATXPBPREDICTIONLOCATIONOFINTEREST_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface ATXPBPredictionLocationOfInterest : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasLatitude;
@property (nonatomic) BOOL hasLongitude;
@property (nonatomic) BOOL hasType;
@property (readonly, nonatomic) BOOL hasUuid;
@property (nonatomic) CGFloat latitude; // ivar: _latitude
@property (nonatomic) CGFloat longitude; // ivar: _longitude
@property (nonatomic) int type; // ivar: _type
@property (retain, nonatomic) NSString *uuid; // ivar: _uuid


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)typeAsString:(int)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif