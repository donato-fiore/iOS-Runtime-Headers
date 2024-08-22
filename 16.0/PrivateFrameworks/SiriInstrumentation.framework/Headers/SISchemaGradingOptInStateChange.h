// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SISCHEMAGRADINGOPTINSTATECHANGE_H
#define SISCHEMAGRADINGOPTINSTATECHANGE_H

@class NSData, NSString;


#import "SISchemaTopLevelUnionType.h"

@interface SISchemaGradingOptInStateChange : SISchemaTopLevelUnionType {
    ? _has;
}


@property (nonatomic) NSUInteger epochEventTimestampInSeconds; // ivar: _epochEventTimestampInSeconds
@property (nonatomic) BOOL hasEpochEventTimestampInSeconds;
@property (nonatomic) BOOL hasNewOptInState;
@property (nonatomic) BOOL hasPrevOptInState;
@property (nonatomic) BOOL hasReason; // ivar: _hasReason
@property (nonatomic) BOOL hasSource;
@property (nonatomic) BOOL hasSystemBuild; // ivar: _hasSystemBuild
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int newOptInState; // ivar: _newOptInState
@property (nonatomic) int prevOptInState; // ivar: _prevOptInState
@property (copy, nonatomic) NSString *reason; // ivar: _reason
@property (nonatomic) int source; // ivar: _source
@property (copy, nonatomic) NSString *systemBuild; // ivar: _systemBuild


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)qualifiedMessageName;
-(id)suppressMessageUnderConditions;
-(int)getAnyEventType;
-(void)deleteEpochEventTimestampInSeconds;
-(void)deleteNewOptInState;
-(void)deletePrevOptInState;
-(void)deleteReason;
-(void)deleteSource;
-(void)deleteSystemBuild;
-(void)writeTo:(id)arg0 ;


@end


#endif