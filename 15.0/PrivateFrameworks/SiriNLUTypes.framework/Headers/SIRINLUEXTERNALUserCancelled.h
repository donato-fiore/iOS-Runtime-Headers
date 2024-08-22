// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIRINLUEXTERNALUSERCANCELLED_H
#define SIRINLUEXTERNALUSERCANCELLED_H

@class PBCodable;
@protocol NSCopying;


#import "SIRINLUEXTERNALUsoGraph.h"
#import "SIRINLUEXTERNALUUID.h"

@interface SIRINLUEXTERNALUserCancelled : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasReference;
@property (readonly, nonatomic) BOOL hasTaskId;
@property (retain, nonatomic) SIRINLUEXTERNALUsoGraph *reference; // ivar: _reference
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