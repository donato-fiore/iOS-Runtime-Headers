// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRINLUEXTERNALUSERACKNOWLEDGED_H
#define SIRINLUEXTERNALUSERACKNOWLEDGED_H

@class PBCodable;
@protocol NSCopying;


#import "SIRINLUEXTERNALUsoGraph.h"
#import "SIRINLUEXTERNALUUID.h"

@interface SIRINLUEXTERNALUserAcknowledged : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasReference;
@property (readonly, nonatomic) BOOL hasSystemDialogActId;
@property (retain, nonatomic) SIRINLUEXTERNALUsoGraph *reference; // ivar: _reference
@property (retain, nonatomic) SIRINLUEXTERNALUUID *systemDialogActId; // ivar: _systemDialogActId


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