// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRINLUEXTERNALSYSTEMGAVEOPTIONS_H
#define SIRINLUEXTERNALSYSTEMGAVEOPTIONS_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface SIRINLUEXTERNALSystemGaveOptions : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *choices; // ivar: _choices


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)choicesAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addChoices:(id)arg0 ;
-(void)clearChoices;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif