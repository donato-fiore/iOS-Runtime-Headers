// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIRINLUINTERNALSPANDATAFORNAMEDCAPTUREGROUP_H
#define SIRINLUINTERNALSPANDATAFORNAMEDCAPTUREGROUP_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface SIRINLUINTERNALSpanDataForNamedCaptureGroup : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasLabel;
@property (nonatomic) BOOL hasTargetNodeIdx;
@property (nonatomic) BOOL hasTargetUdaIdx;
@property (retain, nonatomic) NSString *label; // ivar: _label
@property (nonatomic) int targetNodeIdx; // ivar: _targetNodeIdx
@property (nonatomic) int targetUdaIdx; // ivar: _targetUdaIdx


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