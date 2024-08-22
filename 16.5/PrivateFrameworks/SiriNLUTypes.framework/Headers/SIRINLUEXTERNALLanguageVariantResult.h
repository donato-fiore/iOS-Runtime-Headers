// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRINLUEXTERNALLANGUAGEVARIANTRESULT_H
#define SIRINLUEXTERNALLANGUAGEVARIANTRESULT_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "SIRINLUEXTERNALParser.h"

@interface SIRINLUEXTERNALLanguageVariantResult : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasParser;
@property (retain, nonatomic) NSMutableArray *multilingualVariants; // ivar: _multilingualVariants
@property (retain, nonatomic) SIRINLUEXTERNALParser *parser; // ivar: _parser


+(Class)multilingualVariantType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)multilingualVariantAtIndex:(NSUInteger)arg0 ;
-(void)addMultilingualVariant:(id)arg0 ;
-(void)clearMultilingualVariants;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif