// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLEVENTFORWARDPOWERSTATEENTRY_H
#define PLEVENTFORWARDPOWERSTATEENTRY_H

@class PLMultiKeyEntry, NSArray;



@interface PLEventForwardPowerStateEntry : PLMultiKeyEntry

@property (readonly) short event;
@property (readonly) BOOL isBasebandWake;
@property (readonly) NSArray *reason;
@property (readonly) short state;


+(id)entryKey;
+(void)load;
-(id)initEntryWithIOMessage:(unsigned int)arg0 ;
-(id)initEntryWithState:(short)arg0 withEvent:(short)arg1 withReason:(id)arg2 withCurrentWakeTime:(NSUInteger)arg3 withCurrentWakeTimeKey:(id)arg4 withDate:(id)arg5 ;
-(id)initEntryWithState:(short)arg0 withEvent:(short)arg1 withReason:(id)arg2 withCurrentWakeTime:(NSUInteger)arg3 withCurrentWakeTimeKey:(id)arg4 withWakeType:(id)arg5 withDriverWakeReason:(id)arg6 withDate:(id)arg7 ;
-(id)initEntryWithState:(short)arg0 withEvent:(short)arg1 withReason:(id)arg2 withDate:(id)arg3 ;
-(id)initEntryWithState:(short)arg0 withEvent:(short)arg1 withReason:(id)arg2 withKernelSleepDate:(id)arg3 withDate:(id)arg4 ;


@end


#endif