// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INFERENCESCHEMAINFERENCELONGRUNNINGTASKINFO_H
#define INFERENCESCHEMAINFERENCELONGRUNNINGTASKINFO_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface INFERENCESchemaINFERENCELongRunningTaskInfo : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) NSUInteger durationInMs; // ivar: _durationInMs
@property (nonatomic) BOOL hasDurationInMs;
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteDurationInMs;
-(void)writeTo:(id)arg0 ;


@end


#endif