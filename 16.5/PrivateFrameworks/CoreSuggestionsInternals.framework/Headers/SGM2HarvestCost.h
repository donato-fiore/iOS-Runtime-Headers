// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGM2HARVESTCOST_H
#define SGM2HARVESTCOST_H

@class PBCodable;
@protocol NSCopying;



@interface SGM2HarvestCost : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int documentSource; // ivar: _documentSource
@property (nonatomic) int harvestSource; // ivar: _harvestSource
@property (nonatomic) BOOL harvestedOnBattery; // ivar: _harvestedOnBattery
@property (nonatomic) BOOL hasDocumentSource;
@property (nonatomic) BOOL hasHarvestSource;
@property (nonatomic) BOOL hasHarvestedOnBattery;
@property (nonatomic) BOOL hasHighPriority;
@property (nonatomic) BOOL hasReceivedOnBattery;
@property (nonatomic) BOOL highPriority; // ivar: _highPriority
@property (nonatomic) BOOL receivedOnBattery; // ivar: _receivedOnBattery


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)documentSourceAsString:(int)arg0 ;
-(id)harvestSourceAsString:(int)arg0 ;
-(int)StringAsDocumentSource:(id)arg0 ;
-(int)StringAsHarvestSource:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif