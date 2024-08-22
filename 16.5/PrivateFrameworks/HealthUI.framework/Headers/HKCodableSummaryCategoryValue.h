// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKCODABLESUMMARYCATEGORYVALUE_H
#define HKCODABLESUMMARYCATEGORYVALUE_H

@class PBCodable;
@protocol NSCopying;



@interface HKCodableSummaryCategoryValue : PBCodable <NSCopying>

 {
    APPLE_112 _has;
}


@property (nonatomic) NSInteger categoryValue; // ivar: _categoryValue
@property (nonatomic) CGFloat dateData; // ivar: _dateData
@property (nonatomic) BOOL hasCategoryValue;
@property (nonatomic) BOOL hasDateData;


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