// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKCODABLEQUERYANCHOR_H
#define HKCODABLEQUERYANCHOR_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface HKCodableQueryAnchor : PBCodable <NSCopying>



@property (retain, nonatomic) NSData *encodedQueryAnchorData; // ivar: _encodedQueryAnchorData
@property (readonly, nonatomic) BOOL hasEncodedQueryAnchorData;


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