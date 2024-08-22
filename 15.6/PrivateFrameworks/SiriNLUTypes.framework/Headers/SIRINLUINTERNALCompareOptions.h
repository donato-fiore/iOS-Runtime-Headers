// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRINLUINTERNALCOMPAREOPTIONS_H
#define SIRINLUINTERNALCOMPAREOPTIONS_H

@class PBCodable;
@protocol NSCopying;



@interface SIRINLUINTERNALCompareOptions : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL caseInsensitive; // ivar: _caseInsensitive
@property (nonatomic) BOOL diacriticInsensitive; // ivar: _diacriticInsensitive
@property (nonatomic) BOOL hasCaseInsensitive;
@property (nonatomic) BOOL hasDiacriticInsensitive;
@property (nonatomic) BOOL hasWidthInsensitive;
@property (nonatomic) BOOL widthInsensitive; // ivar: _widthInsensitive


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