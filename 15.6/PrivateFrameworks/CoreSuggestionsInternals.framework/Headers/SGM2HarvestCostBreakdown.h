// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGM2HARVESTCOSTBREAKDOWN_H
#define SGM2HARVESTCOSTBREAKDOWN_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface SGM2HarvestCostBreakdown : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *componentName; // ivar: _componentName
@property (nonatomic) int documentSource; // ivar: _documentSource
@property (readonly, nonatomic) BOOL hasComponentName;
@property (nonatomic) BOOL hasDocumentSource;
@property (nonatomic) BOOL hasSignificantWork;
@property (nonatomic) BOOL significantWork; // ivar: _significantWork


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)documentSourceAsString:(int)arg0 ;
-(int)StringAsDocumentSource:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif