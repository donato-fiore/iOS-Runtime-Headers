// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGM2SELFIDMODELSCORE_H
#define SGM2SELFIDMODELSCORE_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface SGM2SelfIdModelScore : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasKey;
@property (nonatomic) BOOL hasModel;
@property (nonatomic) BOOL hasResult;
@property (nonatomic) BOOL hasSupervision;
@property (retain, nonatomic) NSString *key; // ivar: _key
@property (nonatomic) int model; // ivar: _model
@property (nonatomic) BOOL result; // ivar: _result
@property (nonatomic) int supervision; // ivar: _supervision


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)modelAsString:(int)arg0 ;
-(id)supervisionAsString:(int)arg0 ;
-(int)StringAsModel:(id)arg0 ;
-(int)StringAsSupervision:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif