// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NLXSCHEMACDMSYSTEMREPORTEDFAILURE_H
#define NLXSCHEMACDMSYSTEMREPORTEDFAILURE_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "USOSchemaUSOGraph.h"
#import "SISchemaUUID.h"

@interface NLXSchemaCDMSystemReportedFailure : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasReason; // ivar: _hasReason
@property (nonatomic) BOOL hasTask; // ivar: _hasTask
@property (nonatomic) BOOL hasTaskId; // ivar: _hasTaskId
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) USOSchemaUSOGraph *reason; // ivar: _reason
@property (retain, nonatomic) USOSchemaUSOGraph *task; // ivar: _task
@property (retain, nonatomic) SISchemaUUID *taskId; // ivar: _taskId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif