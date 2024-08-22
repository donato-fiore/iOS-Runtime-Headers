// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGM2CONTACTDETAILSENT_H
#define SGM2CONTACTDETAILSENT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface SGM2ContactDetailSent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int detail; // ivar: _detail
@property (nonatomic) int foundIn; // ivar: _foundIn
@property (nonatomic) BOOL hasDetail;
@property (nonatomic) BOOL hasFoundIn;
@property (nonatomic) BOOL hasHasName;
@property (readonly, nonatomic) BOOL hasKey;
@property (nonatomic) BOOL hasName; // ivar: _hasName
@property (nonatomic) BOOL hasSource;
@property (nonatomic) BOOL hasTokens;
@property (retain, nonatomic) NSString *key; // ivar: _key
@property (nonatomic) int source; // ivar: _source
@property (nonatomic) int tokens; // ivar: _tokens


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)detailAsString:(int)arg0 ;
-(id)dictionaryRepresentation;
-(id)foundInAsString:(int)arg0 ;
-(id)sourceAsString:(int)arg0 ;
-(id)tokensAsString:(int)arg0 ;
-(int)StringAsDetail:(id)arg0 ;
-(int)StringAsFoundIn:(id)arg0 ;
-(int)StringAsSource:(id)arg0 ;
-(int)StringAsTokens:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif