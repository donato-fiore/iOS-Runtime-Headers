// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXTRANSITIONPREDICTORCR_H
#define ATXTRANSITIONPREDICTORCR_H

@class CLLocation, NSString, NSDate;
@protocol ATXTransitionPredictorProtocol, ATXLocationManagerProtocol, ATXPredictedLocationsManagerProtocol;

#import <Foundation/Foundation.h>

#import "ATXPredictedTransition.h"

@interface ATXTransitionPredictorCR : NSObject <ATXTransitionPredictorProtocol>

 {
    id<ATXLocationManagerProtocol> *_locationManager;
    id<ATXPredictedLocationsManagerProtocol> *_predictionsManager;
    CLLocation *_locationAtLastPrediction;
    ATXPredictedTransition *_upcomingTransition;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDate *now; // ivar: _now
@property (readonly) Class superclass;


-(BOOL)isCacheValidForDate:(id)arg0 location:(id)arg1 ;
-(BOOL)updateCacheOnActivity:(id)arg0 ;
-(id)getNextTransitionOnActivity:(id)arg0 ;
-(id)getNextTransitionOnActivity:(id)arg0 date:(id)arg1 location:(id)arg2 ;
-(id)init;
-(id)initWithLocationManager:(id)arg0 locationPredictionsManager:(id)arg1 ;
-(id)nextExitDate;
-(id)nextLoi;
-(void)invalidateCache;


@end


#endif