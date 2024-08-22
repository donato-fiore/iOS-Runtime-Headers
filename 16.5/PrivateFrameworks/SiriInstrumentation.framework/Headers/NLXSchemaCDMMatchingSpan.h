// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NLXSCHEMACDMMATCHINGSPAN_H
#define NLXSCHEMACDMMATCHINGSPAN_H

@class NSData, NSString, NSArray;


#import "SISchemaInstrumentationMessage.h"
#import "NLXSchemaCDMInternalSpanData.h"
#import "SISchemaUUID.h"
#import "USOSchemaUSOGraph.h"

@interface NLXSchemaCDMMatchingSpan : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) unsigned int endTokenIndex; // ivar: _endTokenIndex
@property (nonatomic) BOOL hasEndTokenIndex;
@property (nonatomic) BOOL hasInternalSpanData; // ivar: _hasInternalSpanData
@property (nonatomic) BOOL hasLabel; // ivar: _hasLabel
@property (nonatomic) BOOL hasLinkId; // ivar: _hasLinkId
@property (nonatomic) BOOL hasStartTokenIndex;
@property (nonatomic) BOOL hasUsoGraph; // ivar: _hasUsoGraph
@property (retain, nonatomic) NLXSchemaCDMInternalSpanData *internalSpanData; // ivar: _internalSpanData
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (retain, nonatomic) SISchemaUUID *linkId; // ivar: _linkId
@property (copy, nonatomic) NSArray *matcherNames; // ivar: _matcherNames
@property (nonatomic) unsigned int startTokenIndex; // ivar: _startTokenIndex
@property (retain, nonatomic) USOSchemaUSOGraph *usoGraph; // ivar: _usoGraph


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(int)matcherNamesAtIndex:(NSUInteger)arg0 ;
-(void)addMatcherNames:(int)arg0 ;
-(void)clearMatcherNames;
-(void)deleteEndTokenIndex;
-(void)deleteInternalSpanData;
-(void)deleteLabel;
-(void)deleteLinkId;
-(void)deleteMatcherNames;
-(void)deleteStartTokenIndex;
-(void)deleteUsoGraph;
-(void)writeTo:(id)arg0 ;


@end


#endif