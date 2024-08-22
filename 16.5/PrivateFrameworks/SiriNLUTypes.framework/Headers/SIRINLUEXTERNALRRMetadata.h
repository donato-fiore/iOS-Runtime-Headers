// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRINLUEXTERNALRRMETADATA_H
#define SIRINLUEXTERNALRRMETADATA_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "SIRINLUEXTERNALRRBoundingBox.h"

@interface SIRINLUEXTERNALRRMetadata : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) SIRINLUEXTERNALRRBoundingBox *boundingBox; // ivar: _boundingBox
@property (nonatomic) int dataSource; // ivar: _dataSource
@property (readonly, nonatomic) BOOL hasBoundingBox;
@property (nonatomic) BOOL hasDataSource;
@property (retain, nonatomic) NSMutableArray *surroundingTexts; // ivar: _surroundingTexts


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dataSourceAsString:(int)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)surroundingTextsAtIndex:(NSUInteger)arg0 ;
-(int)StringAsDataSource:(id)arg0 ;
-(void)addSurroundingTexts:(id)arg0 ;
-(void)clearSurroundingTexts;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif