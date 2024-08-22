// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRFIELDFINDERTAGS_H
#define BRFIELDFINDERTAGS_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface BRFieldFinderTags : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *tags; // ivar: _tags


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)tagsAtIndex:(NSUInteger)arg0 ;
-(void)addTags:(id)arg0 ;
-(void)clearTags;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif