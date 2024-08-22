// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef USOSCHEMAUSOEDGELABEL_H
#define USOSCHEMAUSOEDGELABEL_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "USOSchemaUSOLabel.h"

@interface USOSchemaUSOEdgeLabel : SISchemaInstrumentationMessage {
    ? _has;
}


@property (retain, nonatomic) USOSchemaUSOLabel *baseEdgeLabel; // ivar: _baseEdgeLabel
@property (nonatomic) unsigned int enumeration; // ivar: _enumeration
@property (nonatomic) BOOL hasBaseEdgeLabel; // ivar: _hasBaseEdgeLabel
@property (nonatomic) BOOL hasEnumeration;
@property (nonatomic) BOOL hasUsoElementId;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) unsigned int usoElementId; // ivar: _usoElementId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteBaseEdgeLabel;
-(void)deleteEnumeration;
-(void)deleteUsoElementId;
-(void)writeTo:(id)arg0 ;


@end


#endif