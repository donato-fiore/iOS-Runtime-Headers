// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIRINLUEXTERNALTURNINPUT_H
#define SIRINLUEXTERNALTURNINPUT_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;


#import "SIRINLUEXTERNALSystemDialogActGroup.h"
#import "SIRINLUEXTERNALTurnContext.h"

@interface SIRINLUEXTERNALTurnInput : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *activeTasks; // ivar: _activeTasks
@property (retain, nonatomic) NSMutableArray *asrOutputs; // ivar: _asrOutputs
@property (retain, nonatomic) NSMutableArray *executedTasks; // ivar: _executedTasks
@property (readonly, nonatomic) BOOL hasLocale;
@property (nonatomic) BOOL hasStartTimestamp;
@property (readonly, nonatomic) BOOL hasSystemDialogActGroup;
@property (nonatomic) BOOL hasTapToEdit;
@property (readonly, nonatomic) BOOL hasTurnContext;
@property (retain, nonatomic) NSString *locale; // ivar: _locale
@property (retain, nonatomic) NSMutableArray *salientEntities; // ivar: _salientEntities
@property (nonatomic) NSUInteger startTimestamp; // ivar: _startTimestamp
@property (retain, nonatomic) SIRINLUEXTERNALSystemDialogActGroup *systemDialogActGroup; // ivar: _systemDialogActGroup
@property (nonatomic) BOOL tapToEdit; // ivar: _tapToEdit
@property (retain, nonatomic) SIRINLUEXTERNALTurnContext *turnContext; // ivar: _turnContext


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)activeTasksAtIndex:(NSUInteger)arg0 ;
-(id)asrOutputsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)executedTasksAtIndex:(NSUInteger)arg0 ;
-(id)salientEntitiesAtIndex:(NSUInteger)arg0 ;
-(void)addActiveTasks:(id)arg0 ;
-(void)addAsrOutputs:(id)arg0 ;
-(void)addExecutedTasks:(id)arg0 ;
-(void)addSalientEntities:(id)arg0 ;
-(void)clearActiveTasks;
-(void)clearAsrOutputs;
-(void)clearExecutedTasks;
-(void)clearSalientEntities;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif