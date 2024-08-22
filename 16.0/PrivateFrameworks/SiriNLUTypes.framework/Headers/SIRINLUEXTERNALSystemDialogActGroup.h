// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRINLUEXTERNALSYSTEMDIALOGACTGROUP_H
#define SIRINLUEXTERNALSYSTEMDIALOGACTGROUP_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "SIRINLUEXTERNALSystemDialogAct.h"

@interface SIRINLUEXTERNALSystemDialogActGroup : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *childActs; // ivar: _childActs
@property (readonly, nonatomic) BOOL hasSystemDialogAct;
@property (retain, nonatomic) SIRINLUEXTERNALSystemDialogAct *systemDialogAct; // ivar: _systemDialogAct


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)childActsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addChildActs:(id)arg0 ;
-(void)clearChildActs;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif