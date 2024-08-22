// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOPDSEARCHKEY64VALUEPAIR_H
#define GEOPDSEARCHKEY64VALUEPAIR_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface GEOPDSearchKey64ValuePair : PBCodable <NSCopying>

 {
    NSUInteger _key;
    NSString *_value;
    ? _flags;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)jsonRepresentation;
-(void)writeTo:(id)arg0 ;


@end


#endif