// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKPROTOSHAREDCOLLECTIONS_H
#define NTKPROTOSHAREDCOLLECTIONS_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface NTKProtoSharedCollections : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *collections; // ivar: _collections


+(id)protoBufferFromSharedCollections:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)collectionsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)sharedCollectionsDictionary;
-(void)addCollections:(id)arg0 ;
-(void)clearCollections;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif