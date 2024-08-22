// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SISCHEMAUSERDATACONTAINER_H
#define SISCHEMAUSERDATACONTAINER_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface SISchemaUserDataContainer : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSData *c; // ivar: _c
@property (nonatomic) BOOL hasC; // ivar: _hasC
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteC;
-(void)writeTo:(id)arg0 ;


@end


#endif