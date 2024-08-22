// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRINLUINTERNALADJACENTSPANS_H
#define SIRINLUINTERNALADJACENTSPANS_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface SIRINLUINTERNALAdjacentSpans : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *captureGroupName; // ivar: _captureGroupName
@property (readonly, nonatomic) BOOL hasCaptureGroupName;
@property (retain, nonatomic) NSMutableArray *spans; // ivar: _spans


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)spansAtIndex:(NSUInteger)arg0 ;
-(void)addSpans:(id)arg0 ;
-(void)clearSpans;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif