// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLTPBSECTIONICON_H
#define BLTPBSECTIONICON_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface BLTPBSectionIcon : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *variants; // ivar: _variants


+(Class)variantType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)variantAtIndex:(NSUInteger)arg0 ;
-(void)addVariant:(id)arg0 ;
-(void)clearVariants;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif