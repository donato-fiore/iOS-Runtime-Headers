// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PREUMRESPONSELIST_H
#define PREUMRESPONSELIST_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "PREUMTrialExperiment.h"
#import "PREUMMessageMetadata.h"

@interface PREUMResponseList : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) PREUMTrialExperiment *experiment; // ivar: _experiment
@property (nonatomic) int generationStatus; // ivar: _generationStatus
@property (readonly, nonatomic) BOOL hasExperiment;
@property (nonatomic) BOOL hasGenerationStatus;
@property (nonatomic) BOOL hasIsCached;
@property (readonly, nonatomic) BOOL hasMsgMetadata;
@property (nonatomic) BOOL hasResponseTimePerf;
@property (nonatomic) BOOL isCached; // ivar: _isCached
@property (retain, nonatomic) NSMutableArray *items; // ivar: _items
@property (retain, nonatomic) PREUMMessageMetadata *msgMetadata; // ivar: _msgMetadata
@property (nonatomic) NSUInteger responseTimePerf; // ivar: _responseTimePerf


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)generationStatusAsString:(int)arg0 ;
-(id)itemsAtIndex:(NSUInteger)arg0 ;
-(int)StringAsGenerationStatus:(id)arg0 ;
-(void)addItems:(id)arg0 ;
-(void)clearItems;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif