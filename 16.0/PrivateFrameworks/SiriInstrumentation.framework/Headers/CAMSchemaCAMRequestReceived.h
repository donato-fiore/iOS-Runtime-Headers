// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMSCHEMACAMREQUESTRECEIVED_H
#define CAMSCHEMACAMREQUESTRECEIVED_H

@class NSArray, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface CAMSchemaCAMRequestReceived : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *features; // ivar: _features
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)featureCount;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)featureAtIndex:(NSUInteger)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addFeature:(id)arg0 ;
-(void)clearFeature;
-(void)deleteFeature;
-(void)writeTo:(id)arg0 ;


@end


#endif