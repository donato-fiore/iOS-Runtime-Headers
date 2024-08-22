// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKPROTOCOLLECTIONBYSLOT_H
#define NTKPROTOCOLLECTIONBYSLOT_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "NTKProtoPigmentCollection.h"

@interface NTKProtoCollectionBySlot : PBCodable <NSCopying>



@property (retain, nonatomic) NTKProtoPigmentCollection *collection; // ivar: _collection
@property (readonly, nonatomic) BOOL hasCollection;
@property (readonly, nonatomic) BOOL hasSlot;
@property (retain, nonatomic) NSString *slot; // ivar: _slot


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