// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGM2SELFIDPATTERNMATCHED_H
#define SGM2SELFIDPATTERNMATCHED_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface SGM2SelfIdPatternMatched : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasKey;
@property (nonatomic) BOOL hasMessageIndex;
@property (nonatomic) BOOL hasNameClass;
@property (nonatomic) BOOL hasNameTokens;
@property (readonly, nonatomic) BOOL hasPatternHash;
@property (nonatomic) BOOL hasPatternType;
@property (retain, nonatomic) NSString *key; // ivar: _key
@property (nonatomic) unsigned int messageIndex; // ivar: _messageIndex
@property (nonatomic) int nameClass; // ivar: _nameClass
@property (nonatomic) unsigned int nameTokens; // ivar: _nameTokens
@property (retain, nonatomic) NSString *patternHash; // ivar: _patternHash
@property (nonatomic) int patternType; // ivar: _patternType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)nameClassAsString:(int)arg0 ;
-(id)patternTypeAsString:(int)arg0 ;
-(int)StringAsNameClass:(id)arg0 ;
-(int)StringAsPatternType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif