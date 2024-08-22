// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef APODMLAPPUSAGEVECTORMANAGER_H
#define APODMLAPPUSAGEVECTORMANAGER_H

@class NSMutableDictionary, NSArray, NSString;

#import <Foundation/Foundation.h>

#import "APOdmlVector.h"
#import "APOdmlUnfairLock.h"
#import "APOdmlXpcLifecycleHandler.h"

@interface APOdmlAppUsageVectorManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *adamIDtoBundleID; // ivar: _adamIDtoBundleID
@property (retain, nonatomic) NSArray *appUsageEvents; // ivar: _appUsageEvents
@property (retain, nonatomic) APOdmlVector *appUsageVector; // ivar: _appUsageVector
@property (nonatomic) CGFloat exponentialDecayConstant; // ivar: _exponentialDecayConstant
@property (nonatomic) CGFloat lookbackPeriod; // ivar: _lookbackPeriod
@property (nonatomic) NSInteger maxQueryElements; // ivar: _maxQueryElements
@property (retain, nonatomic) APOdmlUnfairLock *setVectorAndWeightLock; // ivar: _setVectorAndWeightLock
@property (retain, nonatomic) APOdmlXpcLifecycleHandler *task; // ivar: _task
@property (nonatomic) CGFloat vectorWeightTotal; // ivar: _vectorWeightTotal
@property (retain, nonatomic) NSString *version; // ivar: _version
@property (nonatomic) BOOL weightByDuration; // ivar: _weightByDuration


-(CGFloat)weightForEvents:(id)arg0 ;
-(id)adamIDForBundleID:(id)arg0 ;
-(id)appUsageEventsBetween:(id)arg0 and:(id)arg1 withLimit:(NSUInteger)arg2 ;
-(id)appUsageEventsForLookbackPeriod:(CGFloat)arg0 ;
-(id)bundleIdForAdamId:(id)arg0 ;
-(id)initWithVersion:(id)arg0 lookbackPeriod:(id)arg1 maxQueryElements:(id)arg2 task:(id)arg3 exponentialDecayConstant:(id)arg4 weightByDuration:(id)arg5 ;
-(id)normalizedAppUsageVector:(*id)arg0 ;
-(id)pullUsageEvents;
-(id)updateVector:(id)arg0 withVector:(id)arg1 usingWeight:(CGFloat)arg2 ;
-(void)buildBundleIDtoAdamIDCache:(id)arg0 ;
-(void)updateUsageVectorsWithAppVector:(id)arg0 ;


@end


#endif