// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCODABLESYNCENTITYVERSIONMAP_H
#define HDCODABLESYNCENTITYVERSIONMAP_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface HDCodableSyncEntityVersionMap : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *entityVersionRanges; // ivar: _entityVersionRanges


+(Class)entityVersionRangeType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)entityVersionRangeAtIndex:(NSUInteger)arg0 ;
-(void)addEntityVersionRange:(id)arg0 ;
-(void)clearEntityVersionRanges;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif