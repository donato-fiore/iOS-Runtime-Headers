// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FLOWSCHEMAFLOWBRIEFINGCONTEXT_H
#define FLOWSCHEMAFLOWBRIEFINGCONTEXT_H

@class NSArray, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface FLOWSchemaFLOWBriefingContext : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int briefingAttribute; // ivar: _briefingAttribute
@property (copy, nonatomic) NSArray *enabledFeatures; // ivar: _enabledFeatures
@property (nonatomic) BOOL hasBriefingAttribute;
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(int)enabledFeaturesAtIndex:(NSUInteger)arg0 ;
-(void)addEnabledFeatures:(int)arg0 ;
-(void)clearEnabledFeatures;
-(void)deleteBriefingAttribute;
-(void)deleteEnabledFeatures;
-(void)writeTo:(id)arg0 ;


@end


#endif