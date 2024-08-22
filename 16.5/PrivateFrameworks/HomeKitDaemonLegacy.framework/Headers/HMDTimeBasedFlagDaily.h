// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDTIMEBASEDFLAGDAILY_H
#define HMDTIMEBASEDFLAGDAILY_H

@class NSDate;
@protocol HMDTimeBasedFlag, HMDTimeBasedFlagContext;

#import <Foundation/Foundation.h>

#import "HMDMetricsDateProvider.h"

@interface HMDTimeBasedFlagDaily : NSObject <HMDTimeBasedFlag>

 {
    os_unfair_lock_s _lock;
}


@property (retain) NSDate *bit0Date; // ivar: _bit0Date
@property NSUInteger bits; // ivar: _bits
@property (readonly, weak, nonatomic) NSObject<HMDTimeBasedFlagContext> *context; // ivar: _context
@property (readonly, nonatomic) HMDMetricsDateProvider *dateProvider; // ivar: _dateProvider


+(id)convertLegacyFlagBits:(id)arg0 lastSaveTIme:(id)arg1 ;
-(NSUInteger)_bitMaskForDate:(id)arg0 ;
-(NSUInteger)bitsForDate:(id)arg0 bitCount:(NSInteger)arg1 outValidBitCount:(*NSInteger)arg2 ;
-(NSUInteger)currentBits;
-(id)description;
-(id)initWithContext:(id)arg0 dateProvider:(id)arg1 ;
-(id)initWithSerializedFlag:(id)arg0 context:(id)arg1 dateProvider:(id)arg2 ;
-(id)serializeToDictionary;
-(void)setBitForDate:(id)arg0 ;
-(void)setCurrentBit;


@end


#endif