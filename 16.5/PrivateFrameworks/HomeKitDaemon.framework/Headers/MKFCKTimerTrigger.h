// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKFCKTIMERTRIGGER_H
#define MKFCKTIMERTRIGGER_H

@class NSDate, NSTimeZone, NSDateComponents, NSString;


#import "MKFCKTrigger.h"

@interface MKFCKTimerTrigger : MKFCKTrigger

@property (copy, nonatomic) NSDate *fireDate;
@property (retain, nonatomic) NSTimeZone *fireDateTimeZone;
@property (retain, nonatomic) NSDateComponents *fireRepeatInterval;
@property (nonatomic) NSInteger recurrencesInt;
@property (copy, nonatomic) NSString *significantEvent;
@property (retain, nonatomic) NSDateComponents *significantEventOffset;


+(id)fetchRequest;
-(BOOL)exportFromLocalModel:(id)arg0 updatedProperties:(id)arg1 context:(id)arg2 ;
-(BOOL)importIntoLocalModel:(id)arg0 updatedProperties:(id)arg1 context:(id)arg2 ;


@end


#endif