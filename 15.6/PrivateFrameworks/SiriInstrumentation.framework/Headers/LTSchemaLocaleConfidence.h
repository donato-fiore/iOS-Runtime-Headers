// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LTSCHEMALOCALECONFIDENCE_H
#define LTSCHEMALOCALECONFIDENCE_H

@class NSData, NSString;


#import "SISchemaInstrumentationMessage.h"

@interface LTSchemaLocaleConfidence : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) unsigned int confidence; // ivar: _confidence
@property (nonatomic) BOOL hasConfidence;
@property (nonatomic) BOOL hasLocale; // ivar: _hasLocale
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *locale; // ivar: _locale


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteConfidence;
-(void)deleteLocale;
-(void)writeTo:(id)arg0 ;


@end


#endif