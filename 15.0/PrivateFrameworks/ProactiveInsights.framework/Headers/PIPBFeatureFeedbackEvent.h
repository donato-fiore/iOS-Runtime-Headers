// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PIPBFEATUREFEEDBACKEVENT_H
#define PIPBFEATUREFEEDBACKEVENT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface PIPBFeatureFeedbackEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat date; // ivar: _date
@property (retain, nonatomic) NSString *feature; // ivar: _feature
@property (nonatomic) BOOL hasDate;
@property (readonly, nonatomic) BOOL hasFeature;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type; // ivar: _type


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