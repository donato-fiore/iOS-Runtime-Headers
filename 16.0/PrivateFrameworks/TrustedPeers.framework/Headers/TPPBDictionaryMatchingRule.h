// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPPBDICTIONARYMATCHINGRULE_H
#define TPPBDICTIONARYMATCHINGRULE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "TPPBDictionaryMatchingRuleFieldExists.h"
#import "TPPBDictionaryMatchingRuleFieldRegexMatch.h"
#import "TPPBDictionaryMatchingRule.h"

@interface TPPBDictionaryMatchingRule : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *ands; // ivar: _ands
@property (retain, nonatomic) TPPBDictionaryMatchingRuleFieldExists *exists; // ivar: _exists
@property (readonly, nonatomic) BOOL hasExists;
@property (readonly, nonatomic) BOOL hasMatch;
@property (readonly, nonatomic) BOOL hasNot;
@property (nonatomic) BOOL hasType;
@property (retain, nonatomic) TPPBDictionaryMatchingRuleFieldRegexMatch *match; // ivar: _match
@property (retain, nonatomic) TPPBDictionaryMatchingRule *not; // ivar: _not
@property (retain, nonatomic) NSMutableArray *ors; // ivar: _ors
@property (nonatomic) int type; // ivar: _type


+(Class)andType;
+(Class)orType;
-(BOOL)invertMatch:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)matches:(id)arg0 error:(*id)arg1 ;
-(BOOL)performAndMatch:(id)arg0 error:(*id)arg1 ;
-(BOOL)performOrMatch:(id)arg0 error:(*id)arg1 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)andAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)orAtIndex:(NSUInteger)arg0 ;
-(id)typeAsString:(int)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(void)addAnd:(id)arg0 ;
-(void)addOr:(id)arg0 ;
-(void)clearAnds;
-(void)clearOrs;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif