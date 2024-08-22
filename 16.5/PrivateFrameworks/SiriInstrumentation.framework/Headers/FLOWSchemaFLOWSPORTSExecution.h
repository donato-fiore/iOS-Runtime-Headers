// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FLOWSCHEMAFLOWSPORTSEXECUTION_H
#define FLOWSCHEMAFLOWSPORTSEXECUTION_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface FLOWSchemaFLOWSPORTSExecution : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasIsDisambiguation;
@property (nonatomic) BOOL hasIsLiveScoreRequest;
@property (nonatomic) BOOL hasIsMachineUtterance;
@property (nonatomic) BOOL hasIsSnippetNextCardRequest;
@property (nonatomic) BOOL hasIsSportsWatchFaceRequest;
@property (nonatomic) BOOL hasSportsUsecase;
@property (nonatomic) BOOL isDisambiguation; // ivar: _isDisambiguation
@property (nonatomic) BOOL isLiveScoreRequest; // ivar: _isLiveScoreRequest
@property (nonatomic) BOOL isMachineUtterance; // ivar: _isMachineUtterance
@property (nonatomic) BOOL isSnippetNextCardRequest; // ivar: _isSnippetNextCardRequest
@property (nonatomic) BOOL isSportsWatchFaceRequest; // ivar: _isSportsWatchFaceRequest
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int sportsUsecase; // ivar: _sportsUsecase


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteIsDisambiguation;
-(void)deleteIsLiveScoreRequest;
-(void)deleteIsMachineUtterance;
-(void)deleteIsSnippetNextCardRequest;
-(void)deleteIsSportsWatchFaceRequest;
-(void)deleteSportsUsecase;
-(void)writeTo:(id)arg0 ;


@end


#endif