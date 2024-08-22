// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LCSERVICEBLACKLISTEDFIELD_H
#define LCSERVICEBLACKLISTEDFIELD_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface LCServiceBlackListedField : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *fullyQualifiedPath; // ivar: _fullyQualifiedPath
@property (nonatomic) BOOL hasFullyQualifiedPath; // ivar: _hasFullyQualifiedPath
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteFullyQualifiedPath;
-(void)writeTo:(id)arg0 ;


@end


#endif