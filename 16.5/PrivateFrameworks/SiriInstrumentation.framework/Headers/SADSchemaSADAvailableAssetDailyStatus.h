// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SADSCHEMASADAVAILABLEASSETDAILYSTATUS_H
#define SADSCHEMASADAVAILABLEASSETDAILYSTATUS_H

@class NSData, NSArray;


#import "SISchemaInstrumentationMessage.h"

@interface SADSchemaSADAvailableAssetDailyStatus : SISchemaInstrumentationMessage

@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *namespaceStatus; // ivar: _namespaceStatus


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)namespaceStatusAtIndex:(NSUInteger)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addNamespaceStatus:(id)arg0 ;
-(void)clearNamespaceStatus;
-(void)deleteNamespaceStatus;
-(void)writeTo:(id)arg0 ;


@end


#endif