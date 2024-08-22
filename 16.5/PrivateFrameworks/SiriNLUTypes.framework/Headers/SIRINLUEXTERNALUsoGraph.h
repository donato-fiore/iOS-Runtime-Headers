// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRINLUEXTERNALUSOGRAPH_H
#define SIRINLUEXTERNALUSOGRAPH_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "SIRINLUEXTERNALSemVer.h"

@interface SIRINLUEXTERNALUsoGraph : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *alignments; // ivar: _alignments
@property (retain, nonatomic) NSMutableArray *edges; // ivar: _edges
@property (readonly, nonatomic) BOOL hasVersion;
@property (retain, nonatomic) NSMutableArray *identifiers; // ivar: _identifiers
@property (retain, nonatomic) NSMutableArray *nodes; // ivar: _nodes
@property (retain, nonatomic) SIRINLUEXTERNALSemVer *version; // ivar: _version


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)alignmentsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)edgesAtIndex:(NSUInteger)arg0 ;
-(id)identifiersAtIndex:(NSUInteger)arg0 ;
-(id)nodesAtIndex:(NSUInteger)arg0 ;
-(void)addAlignments:(id)arg0 ;
-(void)addEdges:(id)arg0 ;
-(void)addIdentifiers:(id)arg0 ;
-(void)addNodes:(id)arg0 ;
-(void)clearAlignments;
-(void)clearEdges;
-(void)clearIdentifiers;
-(void)clearNodes;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif