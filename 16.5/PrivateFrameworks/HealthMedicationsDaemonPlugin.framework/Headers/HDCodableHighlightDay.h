// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCODABLEHIGHLIGHTDAY_H
#define HDCODABLEHIGHLIGHTDAY_H

@class PBCodable;
@protocol NSCopying;



@interface HDCodableHighlightDay : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat date; // ivar: _date
@property (nonatomic) BOOL hasDate;
@property (nonatomic) BOOL hasIsPaddedDay;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) BOOL isPaddedDay; // ivar: _isPaddedDay
@property (nonatomic) BOOL status; // ivar: _status


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