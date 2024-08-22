// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AWDHOMEKITEVENTTRIGGER_H
#define AWDHOMEKITEVENTTRIGGER_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "AWDHomeKitPredicate.h"

@interface AWDHomeKitEventTrigger : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int activationState; // ivar: _activationState
@property (nonatomic) int activationType; // ivar: _activationType
@property (nonatomic) BOOL containsRecurrences; // ivar: _containsRecurrences
@property (retain, nonatomic) NSMutableArray *events; // ivar: _events
@property (nonatomic) BOOL executeOnce; // ivar: _executeOnce
@property (nonatomic) BOOL hasActivationState;
@property (nonatomic) BOOL hasActivationType;
@property (nonatomic) BOOL hasContainsRecurrences;
@property (nonatomic) BOOL hasExecuteOnce;
@property (readonly, nonatomic) BOOL hasPredicate;
@property (retain, nonatomic) AWDHomeKitPredicate *predicate; // ivar: _predicate


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)activationStateAsString:(int)arg0 ;
-(id)activationTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)eventsAtIndex:(NSUInteger)arg0 ;
-(int)StringAsActivationState:(id)arg0 ;
-(int)StringAsActivationType:(id)arg0 ;
-(void)addEvents:(id)arg0 ;
-(void)clearEvents;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif