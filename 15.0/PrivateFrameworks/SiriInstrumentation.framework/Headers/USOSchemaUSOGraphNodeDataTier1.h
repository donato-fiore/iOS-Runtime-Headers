// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef USOSCHEMAUSOGRAPHNODEDATATIER1_H
#define USOSCHEMAUSOGRAPHNODEDATATIER1_H

@class NSData, NSArray;


#import "SISchemaInstrumentationMessage.h"
#import "USOSchemaUSONodeDataTier1.h"

@interface USOSchemaUSOGraphNodeDataTier1 : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasLinkedUsoNodeData; // ivar: _hasLinkedUsoNodeData
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *linkedUsoEntityIdentifiers; // ivar: _linkedUsoEntityIdentifiers
@property (retain, nonatomic) USOSchemaUSONodeDataTier1 *linkedUsoNodeData; // ivar: _linkedUsoNodeData


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)linkedUsoEntityIdentifiersAtIndex:(NSUInteger)arg0 ;
-(void)addLinkedUsoEntityIdentifiers:(id)arg0 ;
-(void)clearLinkedUsoEntityIdentifiers;
-(void)writeTo:(id)arg0 ;


@end


#endif