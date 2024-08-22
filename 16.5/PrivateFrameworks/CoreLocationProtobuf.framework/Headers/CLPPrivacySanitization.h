// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLPPRIVACYSANITIZATION_H
#define CLPPRIVACYSANITIZATION_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface CLPPrivacySanitization : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasTripSegmentType;
@property (nonatomic) int tripSegmentType; // ivar: _tripSegmentType
@property (retain, nonatomic) NSString *version; // ivar: _version


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)tripSegmentTypeAsString:(int)arg0 ;
-(int)StringAsTripSegmentType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif