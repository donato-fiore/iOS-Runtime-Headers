// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASCODABLECLOUDKITDATECOMPONENTS_H
#define ASCODABLECLOUDKITDATECOMPONENTS_H

@class PBCodable;
@protocol NSCopying;



@interface ASCodableCloudKitDateComponents : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSInteger day; // ivar: _day
@property (nonatomic) NSInteger era; // ivar: _era
@property (nonatomic) BOOL hasDay;
@property (nonatomic) BOOL hasEra;
@property (nonatomic) BOOL hasHour;
@property (nonatomic) BOOL hasMonth;
@property (nonatomic) BOOL hasYear;
@property (nonatomic) NSInteger hour; // ivar: _hour
@property (nonatomic) NSInteger month; // ivar: _month
@property (nonatomic) NSInteger year; // ivar: _year


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