// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFFORMATTEDTIMEREMAININGVALUE_H
#define HFFORMATTEDTIMEREMAININGVALUE_H

@class NSString, NSDateComponentsFormatter, NSMapTable, NSDate;
@protocol HFSynchronizedTimerObserver, HFDynamicFormattingValue, HFStringGenerator;

#import <Foundation/Foundation.h>


@interface HFFormattedTimeRemainingValue : NSObject <HFSynchronizedTimerObserver, HFDynamicFormattingValue>



@property (retain, nonatomic) NSObject<HFStringGenerator> *currentFormattedValue; // ivar: _currentFormattedValue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDateComponentsFormatter *formatter; // ivar: _formatter
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMapTable *observationBlocks; // ivar: _observationBlocks
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSDate *value; // ivar: _value


+(id)defaultFormatter;
+(id)valueWithRemainingDuration:(CGFloat)arg0 relativeToDate:(id)arg1 ;
-(CGFloat)_timeRemaining;
-(id)_generateFormattedValue;
-(id)initWithFireDate:(id)arg0 ;
-(id)initWithFireDate:(id)arg0 formatter:(id)arg1 ;
-(id)observeFormattedValueChangesWithBlock:(id)arg0 ;
-(void)_stopTimer;
-(void)_updateTimerState;
-(void)countdownTimerDidFire:(id)arg0 ;


@end


#endif