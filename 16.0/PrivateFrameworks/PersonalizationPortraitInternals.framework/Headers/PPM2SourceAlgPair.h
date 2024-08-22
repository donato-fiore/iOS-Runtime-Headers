// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPM2SOURCEALGPAIR_H
#define PPM2SOURCEALGPAIR_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface PPM2SourceAlgPair : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *algorithm; // ivar: _algorithm
@property (readonly, nonatomic) BOOL hasAlgorithm;
@property (readonly, nonatomic) BOOL hasSource;
@property (retain, nonatomic) NSString *source; // ivar: _source


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