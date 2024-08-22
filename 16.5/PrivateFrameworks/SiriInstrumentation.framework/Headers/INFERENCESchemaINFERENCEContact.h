// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INFERENCESCHEMAINFERENCECONTACT_H
#define INFERENCESCHEMAINFERENCECONTACT_H

@class NSString, NSArray, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface INFERENCESchemaINFERENCEContact : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *anonymizedContactIdentifier; // ivar: _anonymizedContactIdentifier
@property (copy, nonatomic) NSArray *anonymizedHandleValues; // ivar: _anonymizedHandleValues
@property (nonatomic) BOOL hasAnonymizedContactIdentifier; // ivar: _hasAnonymizedContactIdentifier
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)anonymizedHandleValuesAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addAnonymizedHandleValues:(id)arg0 ;
-(void)clearAnonymizedHandleValues;
-(void)deleteAnonymizedContactIdentifier;
-(void)deleteAnonymizedHandleValues;
-(void)writeTo:(id)arg0 ;


@end


#endif