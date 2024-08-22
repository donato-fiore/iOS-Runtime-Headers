// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOLPRLPRCONVERTRULE_H
#define GEOLPRLPRCONVERTRULE_H

@class PBCodable, PBDataReader, NSMutableArray;
@protocol NSCopying;



@interface GEOLPRLPRConvertRule : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    NSMutableArray *_fillRules;
    NSMutableArray *_mapRules;
    NSMutableArray *_pickupRules;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    unsigned int _validEndTime;
    unsigned int _validStartTime;
    ? _flags;
}


@property (retain, nonatomic) NSMutableArray *fillRules;
@property (nonatomic) BOOL hasValidEndTime;
@property (nonatomic) BOOL hasValidStartTime;
@property (retain, nonatomic) NSMutableArray *mapRules;
@property (retain, nonatomic) NSMutableArray *pickupRules;
@property (nonatomic) unsigned int validEndTime;
@property (nonatomic) unsigned int validStartTime;


+(BOOL)isValid:(id)arg0 ;
+(Class)fillRuleType;
+(Class)mapRuleType;
+(Class)pickupRuleType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)fillRuleAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)mapRuleAtIndex:(NSUInteger)arg0 ;
-(id)pickupRuleAtIndex:(NSUInteger)arg0 ;
-(void)addFillRule:(id)arg0 ;
-(void)addMapRule:(id)arg0 ;
-(void)addPickupRule:(id)arg0 ;
-(void)clearFillRules;
-(void)clearMapRules;
-(void)clearPickupRules;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif