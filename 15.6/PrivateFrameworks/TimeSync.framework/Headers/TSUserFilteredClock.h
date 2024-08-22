// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSUSERFILTEREDCLOCK_H
#define TSUSERFILTEREDCLOCK_H



#import "TSKernelClock.h"

@interface TSUserFilteredClock : TSKernelClock

@property (readonly, nonatomic, getter=isAdaptive) BOOL adaptive;
@property (readonly, nonatomic) unsigned char filterShift;
@property (readonly, nonatomic) NSUInteger nominalDomainInterval;
@property (readonly, nonatomic) NSUInteger nominalMachInterval;


+(id)iokitMatchingDictionaryForClockIdentifier:(NSUInteger)arg0 ;
-(BOOL)addTimestampWithMachAbsolute:(NSUInteger)arg0 andDomainTime:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)resetFilterToNominal:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)resetSyncServiceWithError:(*id)arg0 ;


@end


#endif