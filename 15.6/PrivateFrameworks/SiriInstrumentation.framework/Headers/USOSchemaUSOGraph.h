// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef USOSCHEMAUSOGRAPH_H
#define USOSCHEMAUSOGRAPH_H

@class NSArray, NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"
#import "SISchemaVersion.h"

@interface USOSchemaUSOGraph : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *alignments; // ivar: _alignments
@property (copy, nonatomic) NSArray *edges; // ivar: _edges
@property (nonatomic) BOOL hasLinkId; // ivar: _hasLinkId
@property (nonatomic) BOOL hasVersion; // ivar: _hasVersion
@property (copy, nonatomic) NSArray *identifiers; // ivar: _identifiers
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUUID *linkId; // ivar: _linkId
@property (copy, nonatomic) NSArray *nodes; // ivar: _nodes
@property (retain, nonatomic) SISchemaVersion *version; // ivar: _version


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)alignmentsAtIndex:(NSUInteger)arg0 ;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)edgesAtIndex:(NSUInteger)arg0 ;
-(id)identifiersAtIndex:(NSUInteger)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)nodesAtIndex:(NSUInteger)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addAlignments:(id)arg0 ;
-(void)addEdges:(id)arg0 ;
-(void)addIdentifiers:(id)arg0 ;
-(void)addNodes:(id)arg0 ;
-(void)clearAlignments;
-(void)clearEdges;
-(void)clearIdentifiers;
-(void)clearNodes;
-(void)deleteAlignments;
-(void)deleteEdges;
-(void)deleteIdentifiers;
-(void)deleteLinkId;
-(void)deleteNodes;
-(void)deleteVersion;
-(void)writeTo:(id)arg0 ;


@end


#endif