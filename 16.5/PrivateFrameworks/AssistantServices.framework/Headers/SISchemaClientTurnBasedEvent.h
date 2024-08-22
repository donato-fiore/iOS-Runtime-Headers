// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SISCHEMACLIENTTURNBASEDEVENT_H
#define SISCHEMACLIENTTURNBASEDEVENT_H

@class PBCodable;
@protocol NSCopying;


#import "SISchemaClientAnyEvent.h"
#import "SISchemaClientTurnContext.h"

@interface SISchemaClientTurnBasedEvent : PBCodable <NSCopying>



@property (retain, nonatomic) SISchemaClientAnyEvent *event; // ivar: _event
@property (readonly, nonatomic) BOOL hasEvent;
@property (readonly, nonatomic) BOOL hasTurnContext;
@property (retain, nonatomic) SISchemaClientTurnContext *turnContext; // ivar: _turnContext


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)si_dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif