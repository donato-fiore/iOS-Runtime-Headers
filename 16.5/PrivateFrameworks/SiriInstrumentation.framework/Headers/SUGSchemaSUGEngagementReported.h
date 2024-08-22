// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUGSCHEMASUGENGAGEMENTREPORTED_H
#define SUGSCHEMASUGENGAGEMENTREPORTED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SUGSchemaSUGInteraction.h"
#import "SUGSchemaSUGUserStatistics.h"

@interface SUGSchemaSUGEngagementReported : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasInteraction; // ivar: _hasInteraction
@property (nonatomic) BOOL hasPerformedTimeSince1970InMs;
@property (nonatomic) BOOL hasUserStatistics; // ivar: _hasUserStatistics
@property (retain, nonatomic) SUGSchemaSUGInteraction *interaction; // ivar: _interaction
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) NSUInteger performedTimeSince1970InMs; // ivar: _performedTimeSince1970InMs
@property (retain, nonatomic) SUGSchemaSUGUserStatistics *userStatistics; // ivar: _userStatistics


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteInteraction;
-(void)deletePerformedTimeSince1970InMs;
-(void)deleteUserStatistics;
-(void)writeTo:(id)arg0 ;


@end


#endif