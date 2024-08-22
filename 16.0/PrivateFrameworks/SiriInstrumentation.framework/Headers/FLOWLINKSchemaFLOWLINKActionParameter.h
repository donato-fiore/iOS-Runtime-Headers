// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FLOWLINKSCHEMAFLOWLINKACTIONPARAMETER_H
#define FLOWLINKSCHEMAFLOWLINKACTIONPARAMETER_H

@class NSData, NSString;


#import "SISchemaInstrumentationMessage.h"

@interface FLOWLINKSchemaFLOWLINKActionParameter : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasIsArray;
@property (nonatomic) BOOL hasName; // ivar: _hasName
@property (nonatomic) BOOL hasType;
@property (nonatomic) BOOL isArray; // ivar: _isArray
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) int type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteIsArray;
-(void)deleteName;
-(void)deleteType;
-(void)writeTo:(id)arg0 ;


@end


#endif