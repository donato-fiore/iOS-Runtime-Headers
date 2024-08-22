// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef USOSCHEMAUSONODEDATATIER1_H
#define USOSCHEMAUSONODEDATATIER1_H

@class NSData, NSArray, NSString;


#import "SISchemaInstrumentationMessage.h"

@interface USOSchemaUSONodeDataTier1 : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasIndex;
@property (nonatomic) BOOL hasIntegerPayload;
@property (nonatomic) BOOL hasStringPayload; // ivar: _hasStringPayload
@property (nonatomic) unsigned int index; // ivar: _index
@property (nonatomic) int integerPayload; // ivar: _integerPayload
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *normalizedStringPayloads; // ivar: _normalizedStringPayloads
@property (copy, nonatomic) NSString *stringPayload; // ivar: _stringPayload


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)normalizedStringPayloadsAtIndex:(NSUInteger)arg0 ;
-(void)addNormalizedStringPayloads:(id)arg0 ;
-(void)clearNormalizedStringPayloads;
-(void)writeTo:(id)arg0 ;


@end


#endif