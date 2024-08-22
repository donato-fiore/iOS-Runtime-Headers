// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRINLUEXTERNALRRSURROUNDINGTEXT_H
#define SIRINLUEXTERNALRRSURROUNDINGTEXT_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "SIRINLUEXTERNALRRBoundingBox.h"

@interface SIRINLUEXTERNALRRSurroundingText : PBCodable <NSCopying>



@property (retain, nonatomic) SIRINLUEXTERNALRRBoundingBox *boundingBox; // ivar: _boundingBox
@property (readonly, nonatomic) BOOL hasBoundingBox;
@property (readonly, nonatomic) BOOL hasText;
@property (retain, nonatomic) NSString *text; // ivar: _text


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