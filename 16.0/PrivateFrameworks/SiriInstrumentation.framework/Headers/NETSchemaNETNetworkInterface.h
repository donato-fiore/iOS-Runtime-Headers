// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NETSCHEMANETNETWORKINTERFACE_H
#define NETSCHEMANETNETWORKINTERFACE_H

@class NSData, NSString;


#import "SISchemaInstrumentationMessage.h"

@interface NETSchemaNETNetworkInterface : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int connectionType; // ivar: _connectionType
@property (nonatomic) BOOL hasConnectionType;
@property (nonatomic) BOOL hasName; // ivar: _hasName
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *name; // ivar: _name


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteConnectionType;
-(void)deleteName;
-(void)writeTo:(id)arg0 ;


@end


#endif