// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef USOSCHEMAUSONODE_H
#define USOSCHEMAUSONODE_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface USOSchemaUSONode : SISchemaInstrumentationMessage {
    ? _has;
}


@property (copy, nonatomic) NSString *entityLabel; // ivar: _entityLabel
@property (nonatomic) BOOL hasEntityLabel; // ivar: _hasEntityLabel
@property (nonatomic) BOOL hasUsoElementId;
@property (nonatomic) BOOL hasUsoVerbElementId;
@property (nonatomic) BOOL hasVerbLabel; // ivar: _hasVerbLabel
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) unsigned int usoElementId; // ivar: _usoElementId
@property (nonatomic) unsigned int usoVerbElementId; // ivar: _usoVerbElementId
@property (copy, nonatomic) NSString *verbLabel; // ivar: _verbLabel


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif