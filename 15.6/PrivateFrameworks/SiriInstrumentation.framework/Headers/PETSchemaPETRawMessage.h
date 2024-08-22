// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PETSCHEMAPETRAWMESSAGE_H
#define PETSCHEMAPETRAWMESSAGE_H

@class NSData, NSString;


#import "SISchemaInstrumentationMessage.h"

@interface PETSchemaPETRawMessage : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasName; // ivar: _hasName
@property (nonatomic) BOOL hasRaw_bytes; // ivar: _hasRaw_bytes
@property (nonatomic) BOOL hasType_id;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSData *raw_bytes; // ivar: _raw_bytes
@property (nonatomic) unsigned int type_id; // ivar: _type_id


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteName;
-(void)deleteRaw_bytes;
-(void)deleteType_id;
-(void)writeTo:(id)arg0 ;


@end


#endif