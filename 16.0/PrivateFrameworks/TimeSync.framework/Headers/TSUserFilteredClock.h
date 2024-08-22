// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSUSERFILTEREDCLOCK_H
#define TSUSERFILTEREDCLOCK_H



#import "TSKernelClock.h"
#import "TSXUserFilteredClock.h"

@interface TSUserFilteredClock : TSKernelClock {
    TSXUserFilteredClock *_implXPC;
}


@property (readonly, nonatomic, getter=isAdaptive) BOOL adaptive;
@property (readonly, nonatomic) unsigned char filterShift;
@property (readonly, nonatomic) NSUInteger nominalDomainInterval;
@property (readonly, nonatomic) NSUInteger nominalMachInterval;


+(id)diagnosticDescriptionForInfo:(id)arg0 withIndent:(id)arg1 ;
+(id)iokitMatchingDictionaryForClockIdentifier:(NSUInteger)arg0 ;
+(id)keyPathsForValuesAffectingAdaptive;
+(id)keyPathsForValuesAffectingFilterShift;
+(id)keyPathsForValuesAffectingNominalDomainInterval;
+(id)keyPathsForValuesAffectingNominalMachInterval;
-(BOOL)addTimestampWithMachAbsolute:(NSUInteger)arg0 andDomainTime:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)resetFilterToNominal:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)resetSyncServiceWithError:(*id)arg0 ;
-(id)initWithImplXPC:(id)arg0 ;


@end


#endif