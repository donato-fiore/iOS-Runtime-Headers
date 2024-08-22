// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOLOGMSGEVENTMARCOLITEUSAGE_H
#define GEOLOGMSGEVENTMARCOLITEUSAGE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface GEOLogMsgEventMarcoLiteUsage : PBCodable <NSCopying>

 {
    NSMutableArray *_usageStates;
    unsigned int _totalNavTime;
    int _vioTrigger;
    ? _flags;
}


@property (nonatomic) BOOL hasTotalNavTime;
@property (nonatomic) BOOL hasVioTrigger;
@property (nonatomic) unsigned int totalNavTime;
@property (retain, nonatomic) NSMutableArray *usageStates;
@property (nonatomic) int vioTrigger;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)usageStatesAtIndex:(NSUInteger)arg0 ;
-(id)vioTriggerAsString:(int)arg0 ;
-(int)StringAsVioTrigger:(id)arg0 ;
-(void)addUsageStates:(id)arg0 ;
-(void)clearUsageStates;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif