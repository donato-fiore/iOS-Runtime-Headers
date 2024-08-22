// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef USOSCHEMAUSOGRAPHTIER1_H
#define USOSCHEMAUSOGRAPHTIER1_H

@class NSData, NSArray;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface USOSchemaUSOGraphTier1 : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasLinkId; // ivar: _hasLinkId
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUUID *linkId; // ivar: _linkId
@property (copy, nonatomic) NSArray *linkedUsoEntityIdentifiers; // ivar: _linkedUsoEntityIdentifiers
@property (copy, nonatomic) NSArray *linkedUsoGraphNodeDatas; // ivar: _linkedUsoGraphNodeDatas
@property (copy, nonatomic) NSArray *linkedUsoNodeDatas; // ivar: _linkedUsoNodeDatas


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)linkedUsoGraphNodeDataCount;
-(NSUInteger)linkedUsoNodeDataCount;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)linkedUsoEntityIdentifiersAtIndex:(NSUInteger)arg0 ;
-(id)linkedUsoGraphNodeDataAtIndex:(NSUInteger)arg0 ;
-(id)linkedUsoNodeDataAtIndex:(NSUInteger)arg0 ;
-(void)addLinkedUsoEntityIdentifiers:(id)arg0 ;
-(void)addLinkedUsoGraphNodeData:(id)arg0 ;
-(void)addLinkedUsoNodeData:(id)arg0 ;
-(void)clearLinkedUsoEntityIdentifiers;
-(void)clearLinkedUsoGraphNodeData;
-(void)clearLinkedUsoNodeData;
-(void)writeTo:(id)arg0 ;


@end


#endif