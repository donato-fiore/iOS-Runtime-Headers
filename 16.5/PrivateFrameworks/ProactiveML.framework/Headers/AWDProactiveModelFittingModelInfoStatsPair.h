// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AWDPROACTIVEMODELFITTINGMODELINFOSTATSPAIR_H
#define AWDPROACTIVEMODELFITTINGMODELINFOSTATSPAIR_H

@class PBCodable;
@protocol NSCopying;


#import "AWDProactiveModelFittingModelInfo.h"
#import "AWDProactiveModelFittingMinibatchStats.h"

@interface AWDProactiveModelFittingModelInfoStatsPair : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasModelInfo;
@property (readonly, nonatomic) BOOL hasStats;
@property (retain, nonatomic) AWDProactiveModelFittingModelInfo *modelInfo; // ivar: _modelInfo
@property (retain, nonatomic) AWDProactiveModelFittingMinibatchStats *stats; // ivar: _stats


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