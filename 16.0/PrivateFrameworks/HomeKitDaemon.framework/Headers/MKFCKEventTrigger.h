// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKFCKEVENTTRIGGER_H
#define MKFCKEVENTTRIGGER_H

@class NSSet, NSPredicate, NSArray;


#import "MKFCKTrigger.h"

@interface MKFCKEventTrigger : MKFCKTrigger

@property (retain, nonatomic) NSSet *accessories;
@property (retain, nonatomic) NSPredicate *condition;
@property (retain, nonatomic) NSArray *events;
@property (nonatomic) NSInteger recurrencesInt;
@property (retain, nonatomic) NSSet *users;


+(id)fetchRequest;
-(BOOL)exportFromLocalModel:(id)arg0 updatedProperties:(id)arg1 context:(id)arg2 ;
-(BOOL)importIntoLocalModel:(id)arg0 updatedProperties:(id)arg1 context:(id)arg2 ;
-(id)_decodeEventDictionary:(id)arg0 localModel:(id)arg1 context:(id)arg2 ;
-(id)_encodeEvent:(id)arg0 accessories:(id)arg1 users:(id)arg2 context:(id)arg3 ;


@end


#endif