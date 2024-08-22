// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NETSCHEMANETPATHINTERFACE_H
#define NETSCHEMANETPATHINTERFACE_H

@class NSData, NSString;


#import "SISchemaInstrumentationMessage.h"

@interface NETSchemaNETPathInterface : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasIndex;
@property (nonatomic) BOOL hasName; // ivar: _hasName
@property (nonatomic) BOOL hasType;
@property (nonatomic) unsigned int index; // ivar: _index
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
-(void)deleteIndex;
-(void)deleteName;
-(void)deleteType;
-(void)writeTo:(id)arg0 ;


@end


#endif