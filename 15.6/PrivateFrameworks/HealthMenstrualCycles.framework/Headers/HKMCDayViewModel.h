// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKMCDAYVIEWMODEL_H
#define HKMCDAYVIEWMODEL_H

@class NSString, NSArray;
@protocol HKRedactedDescription;

#import <Foundation/Foundation.h>

#import "HKMCDaySummary.h"

@interface HKMCDayViewModel : NSObject <HKRedactedDescription>



@property (readonly, nonatomic) NSString *accessibilityIdentifier;
@property (readonly, nonatomic) NSArray *cycleFactors; // ivar: _cycleFactors
@property (readonly, nonatomic) HKMCDaySummary *daySummary; // ivar: _daySummary
@property (readonly, nonatomic) NSUInteger fertileWindowLevel; // ivar: _fertileWindowLevel
@property (readonly, nonatomic, getter=isFetched) BOOL fetched; // ivar: _fetched
@property (readonly, copy) NSString *hk_redactedDescription;
@property (readonly, nonatomic) NSUInteger menstruationLevel; // ivar: _menstruationLevel
@property (readonly, nonatomic, getter=isPartiallyLoggedPeriod) BOOL partiallyLoggedPeriod; // ivar: _partiallyLoggedPeriod
@property (readonly, nonatomic, getter=isSupplementaryDataLogged) BOOL supplementaryDataLogged;


+(id)dayViewModelWithMenstruationLevel:(NSUInteger)arg0 fertileWindowLevel:(NSUInteger)arg1 daySummary:(id)arg2 cycleFactors:(id)arg3 partiallyLoggedPeriod:(BOOL)arg4 fetched:(BOOL)arg5 ;
+(id)emptyDayViewModel;
+(id)unfetchedDayViewModel;
-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithMenstruationLevel:(NSUInteger)arg0 fertileWindowLevel:(NSUInteger)arg1 daySummary:(id)arg2 cycleFactors:(id)arg3 partiallyLoggedPeriod:(BOOL)arg4 fetched:(BOOL)arg5 ;
-(id)description;


@end


#endif