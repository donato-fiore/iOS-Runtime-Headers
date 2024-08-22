// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ODMSIRISCHEMAODMSIRITASKCOUNTS_H
#define ODMSIRISCHEMAODMSIRITASKCOUNTS_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface ODMSiriSchemaODMSiriTaskCounts : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) unsigned int cancelledSiriTaskCount; // ivar: _cancelledSiriTaskCount
@property (nonatomic) unsigned int completedSiriTaskCount; // ivar: _completedSiriTaskCount
@property (nonatomic) unsigned int completedUITaskCount; // ivar: _completedUITaskCount
@property (nonatomic) unsigned int failedSiriTaskCount; // ivar: _failedSiriTaskCount
@property (nonatomic) BOOL hasCancelledSiriTaskCount;
@property (nonatomic) BOOL hasCompletedSiriTaskCount;
@property (nonatomic) BOOL hasCompletedUITaskCount;
@property (nonatomic) BOOL hasFailedSiriTaskCount;
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteCancelledSiriTaskCount;
-(void)deleteCompletedSiriTaskCount;
-(void)deleteCompletedUITaskCount;
-(void)deleteFailedSiriTaskCount;
-(void)writeTo:(id)arg0 ;


@end


#endif