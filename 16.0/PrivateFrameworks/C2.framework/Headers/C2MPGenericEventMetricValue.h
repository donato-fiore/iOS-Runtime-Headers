// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef C2MPGENERICEVENTMETRICVALUE_H
#define C2MPGENERICEVENTMETRICVALUE_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface C2MPGenericEventMetricValue : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSUInteger dateValue; // ivar: _dateValue
@property (nonatomic) CGFloat doubleValue; // ivar: _doubleValue
@property (nonatomic) BOOL hasDateValue;
@property (nonatomic) BOOL hasDoubleValue;
@property (readonly, nonatomic) BOOL hasStringValue;
@property (retain, nonatomic) NSString *stringValue; // ivar: _stringValue


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