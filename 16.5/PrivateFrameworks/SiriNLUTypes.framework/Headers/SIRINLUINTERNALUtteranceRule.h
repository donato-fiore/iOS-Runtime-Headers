// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRINLUINTERNALUTTERANCERULE_H
#define SIRINLUINTERNALUTTERANCERULE_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;


#import "SIRINLUINTERNALCompareOptions.h"

@interface SIRINLUINTERNALUtteranceRule : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) SIRINLUINTERNALCompareOptions *compareOptions; // ivar: _compareOptions
@property (readonly, nonatomic) BOOL hasCompareOptions;
@property (readonly, nonatomic) BOOL hasPattern;
@property (nonatomic) BOOL hasType;
@property (retain, nonatomic) NSString *pattern; // ivar: _pattern
@property (retain, nonatomic) NSMutableArray *spansForNamedCaptureGroups; // ivar: _spansForNamedCaptureGroups
@property (nonatomic) int type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)spansForNamedCaptureGroupsAtIndex:(NSUInteger)arg0 ;
-(id)typeAsString:(int)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(void)addSpansForNamedCaptureGroups:(id)arg0 ;
-(void)clearSpansForNamedCaptureGroups;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif