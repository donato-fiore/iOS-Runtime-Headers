// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCODABLESECTIONDATA_H
#define HDCODABLESECTIONDATA_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface HDCodableSectionData : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL deleted; // ivar: _deleted
@property (nonatomic) BOOL hasDeleted;
@property (nonatomic) BOOL hasSectionDataType;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) NSInteger sectionDataType; // ivar: _sectionDataType
@property (retain, nonatomic) NSMutableArray *stringValues; // ivar: _stringValues
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (nonatomic) NSInteger version; // ivar: _version


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)stringValuesAtIndex:(NSUInteger)arg0 ;
-(void)addStringValues:(id)arg0 ;
-(void)clearStringValues;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif