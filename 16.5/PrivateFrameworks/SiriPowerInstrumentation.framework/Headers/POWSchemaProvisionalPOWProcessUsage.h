// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef POWSCHEMAPROVISIONALPOWPROCESSUSAGE_H
#define POWSCHEMAPROVISIONALPOWPROCESSUSAGE_H

@class SISchemaInstrumentationMessage, NSData;



@interface POWSchemaProvisionalPOWProcessUsage : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) NSUInteger cpuCycles; // ivar: _cpuCycles
@property (nonatomic) NSUInteger cpuInstructions; // ivar: _cpuInstructions
@property (nonatomic) NSUInteger gpuCycles; // ivar: _gpuCycles
@property (nonatomic) BOOL hasCpuCycles;
@property (nonatomic) BOOL hasCpuInstructions;
@property (nonatomic) BOOL hasGpuCycles;
@property (nonatomic) BOOL hasMemoryFootprint;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) NSUInteger memoryFootprint; // ivar: _memoryFootprint


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)deleteCpuCycles;
-(void)deleteCpuInstructions;
-(void)deleteGpuCycles;
-(void)deleteMemoryFootprint;
-(void)writeTo:(id)arg0 ;


@end


#endif