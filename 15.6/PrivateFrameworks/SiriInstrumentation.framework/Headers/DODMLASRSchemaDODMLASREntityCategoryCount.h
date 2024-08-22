// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DODMLASRSCHEMADODMLASRENTITYCATEGORYCOUNT_H
#define DODMLASRSCHEMADODMLASRENTITYCATEGORYCOUNT_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface DODMLASRSchemaDODMLASREntityCategoryCount : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) unsigned int count; // ivar: _count
@property (copy, nonatomic) NSString *entityCategory; // ivar: _entityCategory
@property (nonatomic) BOOL hasCount;
@property (nonatomic) BOOL hasEntityCategory; // ivar: _hasEntityCategory
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteCount;
-(void)deleteEntityCategory;
-(void)writeTo:(id)arg0 ;


@end


#endif