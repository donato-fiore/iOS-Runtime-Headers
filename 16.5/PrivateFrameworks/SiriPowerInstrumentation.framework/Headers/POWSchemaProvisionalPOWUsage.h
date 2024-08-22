// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef POWSCHEMAPROVISIONALPOWUSAGE_H
#define POWSCHEMAPROVISIONALPOWUSAGE_H

@class SISchemaInstrumentationMessage, NSData;


#import "POWSchemaProvisionalPOWProcessUsage.h"

@interface POWSchemaProvisionalPOWUsage : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int context; // ivar: _context
@property (nonatomic) BOOL hasContext;
@property (nonatomic) BOOL hasProcess;
@property (nonatomic) BOOL hasProcessUsage; // ivar: _hasProcessUsage
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int process; // ivar: _process
@property (retain, nonatomic) POWSchemaProvisionalPOWProcessUsage *processUsage; // ivar: _processUsage


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)deleteContext;
-(void)deleteProcess;
-(void)deleteProcessUsage;
-(void)writeTo:(id)arg0 ;


@end


#endif