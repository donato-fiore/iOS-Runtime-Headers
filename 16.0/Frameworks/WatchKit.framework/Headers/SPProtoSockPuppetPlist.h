// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPPROTOSOCKPUPPETPLIST_H
#define SPPROTOSOCKPUPPETPLIST_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface SPProtoSockPuppetPlist : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *objects; // ivar: _objects


+(Class)objectType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(void)addObject:(id)arg0 ;
-(void)clearObjects;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif