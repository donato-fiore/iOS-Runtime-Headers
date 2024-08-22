// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NLXSCHEMACDMASSETSETUPSTARTED_H
#define NLXSCHEMACDMASSETSETUPSTARTED_H

@class NSData, NSArray;


#import "SISchemaInstrumentationMessage.h"

@interface NLXSchemaCDMAssetSetupStarted : SISchemaInstrumentationMessage

@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *services; // ivar: _services


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(int)servicesAtIndex:(NSUInteger)arg0 ;
-(void)addServices:(int)arg0 ;
-(void)clearServices;
-(void)deleteServices;
-(void)writeTo:(id)arg0 ;


@end


#endif