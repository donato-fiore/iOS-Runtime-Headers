// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRINLUEXTERNALSYSTEMPROMPTED_H
#define SIRINLUEXTERNALSYSTEMPROMPTED_H

@class PBCodable;
@protocol NSCopying;


#import "SIRINLUEXTERNALUsoGraph.h"
#import "SIRINLUEXTERNALUUID.h"

@interface SIRINLUEXTERNALSystemPrompted : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasTarget;
@property (readonly, nonatomic) BOOL hasTaskId;
@property (retain, nonatomic) SIRINLUEXTERNALUsoGraph *target; // ivar: _target
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