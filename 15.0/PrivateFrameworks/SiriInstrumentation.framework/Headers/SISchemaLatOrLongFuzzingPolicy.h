// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SISCHEMALATORLONGFUZZINGPOLICY_H
#define SISCHEMALATORLONGFUZZINGPOLICY_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface SISchemaLatOrLongFuzzingPolicy : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) unsigned int fuzzing_unit_meters; // ivar: _fuzzing_unit_meters
@property (nonatomic) BOOL hasFuzzing_unit_meters;
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif