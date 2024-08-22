// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _ATXAPPLAUNCHLOCATION_H
#define _ATXAPPLAUNCHLOCATION_H

@class _PASLock;
@protocol ATXLocationManagerProtocol;

#import <Foundation/Foundation.h>

#import "_ATXDuetHelper.h"

@interface _ATXAppLaunchLocation : NSObject {
    id<ATXLocationManagerProtocol> *_locationManager;
    _ATXDuetHelper *_duetHelper;
    _PASLock *_lock;
}




+(id)defaultPath;
+(id)sortTimeIntervals:(id)arg0 ;
+(id)visitsWithLOI:(id)arg0 startDate:(id)arg1 ;
+(void)joinLaunchEvents:(id)arg0 withVisits:(id)arg1 block:(id)arg2 ;
+(void)writeModel:(id)arg0 ;
-(CGFloat)launchProbabilityAtLOI:(id)arg0 appForAllIntentsBundleId:(id)arg1 ;
-(CGFloat)launchProbabilityAtLOI:(id)arg0 appIntent:(id)arg1 ;
-(CGFloat)launchProbabilityAtLOI:(id)arg0 bundleId:(id)arg1 ;
-(NSUInteger)loadModel;
-(NSUInteger)loadModelAtPath:(id)arg0 ;
-(id)init;
-(id)initWithDuetHelper:(id)arg0 locationManager:(id)arg1 ;
-(id)locationManager;
-(int)launchCountAtLOI:(id)arg0 bundleId:(id)arg1 ;
-(void)_trainModelWithLOI:(id)arg0 startDate:(id)arg1 ;
-(void)resetAppIntentLocationData;
-(void)train;
-(void)trainWithCallback:(id)arg0 ;


@end


#endif