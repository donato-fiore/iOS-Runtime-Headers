// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRINLUEXTERNALTASK_H
#define SIRINLUEXTERNALTASK_H

@class PBCodable;
@protocol NSCopying;


#import "SIRICOMMONDoubleValue.h"
#import "SIRINLUEXTERNALUsoGraph.h"
#import "SIRINLUEXTERNALUUID.h"

@interface SIRINLUEXTERNALTask : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasScore;
@property (readonly, nonatomic) BOOL hasTask;
@property (readonly, nonatomic) BOOL hasTaskId;
@property (retain, nonatomic) SIRICOMMONDoubleValue *score; // ivar: _score
@property (retain, nonatomic) SIRINLUEXTERNALUsoGraph *task; // ivar: _task
@property (retain, nonatomic) SIRINLUEXTERNALUUID *taskId; // ivar: _taskId


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