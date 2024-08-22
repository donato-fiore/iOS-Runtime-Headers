// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXMAGICALMOMENTSUPDATEMONITOR_H
#define ATXMAGICALMOMENTSUPDATEMONITOR_H

@class NSDictionary, NSDate, NSUserDefaults, PMMPredictionNotification;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ATXMagicalMomentsUpdateMonitor : NSObject {
    NSDictionary *_predictionMap;
    NSDate *_expiration;
    NSUInteger _mmPredictionCount;
    NSObject<OS_dispatch_queue> *_queue;
    NSUserDefaults *_defaults;
    PMMPredictionNotification *_mmUpdateListener;
}


@property (readonly, nonatomic) NSUInteger limit; // ivar: _limit


-(NSUInteger)mmPredictionCount;
-(id)init;
-(id)initWithLimit:(NSUInteger)arg0 ;
-(id)predictionsForBundleId:(id)arg0 ;
-(void)_setPredictions:(id)arg0 expiration:(id)arg1 totalPredictionCount:(NSUInteger)arg2 ;
-(void)dropCacheIfExpired;
-(void)setupUpdateListener;
-(void)updatePredictionsWith:(id)arg0 consumer:(NSUInteger)arg1 ;


@end


#endif