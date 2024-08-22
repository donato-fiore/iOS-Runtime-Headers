// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SATRAVELTYPECLASSIFIER_H
#define SATRAVELTYPECLASSIFIER_H

@class NSHashTable, NSDate;
@protocol SATravelTypeClassifierServiceProtocol, SATimeServiceProtocol;

#import <Foundation/Foundation.h>


@interface SATravelTypeClassifier : NSObject <SATravelTypeClassifierServiceProtocol>



@property (retain, nonatomic) NSHashTable *clients; // ivar: _clients
@property (retain, nonatomic) NSObject<SATimeServiceProtocol> *clock; // ivar: _clock
@property (nonatomic) NSUInteger currentTravelType; // ivar: _currentTravelType
@property (copy, nonatomic) NSDate *currentTravelTypeChangeDate; // ivar: _currentTravelTypeChangeDate
@property (readonly, nonatomic) NSUInteger travelType;


+(id)convertSATravelTypeToString:(NSUInteger)arg0 ;
-(BOOL)_setNewTravelType:(NSUInteger)arg0 hints:(NSUInteger)arg1 ;
-(id)_vehicularHintsToString:(NSUInteger)arg0 ;
-(id)initWithClock:(id)arg0 ;
-(void)_handleUserActivityEvent:(id)arg0 ;
-(void)_handleVehicleStateEvent:(id)arg0 ;
-(void)_notifyAllClientsOfTravelTypeChangeFrom:(NSUInteger)arg0 to:(NSUInteger)arg1 hints:(NSUInteger)arg2 ;
-(void)addClient:(id)arg0 ;
-(void)ingestTAEvent:(id)arg0 ;
-(void)removeClient:(id)arg0 ;


@end


#endif