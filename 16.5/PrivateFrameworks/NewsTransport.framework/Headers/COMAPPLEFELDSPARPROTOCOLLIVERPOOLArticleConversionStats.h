// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef COMAPPLEFELDSPARPROTOCOLLIVERPOOLARTICLECONVERSIONSTATS_H
#define COMAPPLEFELDSPARPROTOCOLLIVERPOOLARTICLECONVERSIONSTATS_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats.h"

@interface COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleConversionStats : PBCodable <NSCopying>



@property (retain, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *channelConversionStats; // ivar: _channelConversionStats
@property (retain, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *globalConversionStats; // ivar: _globalConversionStats
@property (readonly, nonatomic) BOOL hasChannelConversionStats;
@property (readonly, nonatomic) BOOL hasGlobalConversionStats;
@property (retain, nonatomic) NSMutableArray *topicConversionStats; // ivar: _topicConversionStats


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)topicConversionStatsAtIndex:(NSUInteger)arg0 ;
-(void)addTopicConversionStats:(id)arg0 ;
-(void)clearTopicConversionStats;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif