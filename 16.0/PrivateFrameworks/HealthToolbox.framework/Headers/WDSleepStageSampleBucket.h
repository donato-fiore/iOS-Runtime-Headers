// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WDSLEEPSTAGESAMPLEBUCKET_H
#define WDSLEEPSTAGESAMPLEBUCKET_H

@class NSString, HKDevice, NSPredicate, NSArray, HKSortedSampleArray, HKSourceRevision;
@protocol WDDataListDataObjectSource;

#import <Foundation/Foundation.h>

#import "WDTimePeriod.h"

@interface WDSleepStageSampleBucket : NSObject <WDDataListDataObjectSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HKDevice *device; // ivar: _device
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger numberOfSamples;
@property (readonly, nonatomic) NSPredicate *predicate;
@property (readonly, nonatomic) NSArray *samples;
@property (readonly, nonatomic) NSInteger sleepStage; // ivar: _sleepStage
@property (readonly, nonatomic) NSUInteger sortNumber;
@property (readonly, nonatomic) HKSortedSampleArray *sortedSamples; // ivar: _sortedSamples
@property (readonly, nonatomic) HKSourceRevision *sourceRevision; // ivar: _sourceRevision
@property (readonly) Class superclass;
@property (readonly, nonatomic) WDTimePeriod *timePeriod; // ivar: _timePeriod
@property (readonly, nonatomic) CGFloat totalDuration;


-(id)initWithSleepStage:(NSInteger)arg0 timePeriod:(id)arg1 sourceRevision:(id)arg2 device:(id)arg3 ;
-(id)source;
-(void)addSample:(id)arg0 ;
-(void)removeAllSamples;
-(void)removeSample:(id)arg0 ;


@end


#endif