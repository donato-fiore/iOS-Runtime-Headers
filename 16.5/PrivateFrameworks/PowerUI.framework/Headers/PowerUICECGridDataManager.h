// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef POWERUICECGRIDDATAMANAGER_H
#define POWERUICECGRIDDATAMANAGER_H

@class NSMutableArray, _GDSEmissionForecast, NSUserDefaults, _GDSManager;
@protocol OS_os_log, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PowerUICECGridDataManager : NSObject

@property (readonly, nonatomic) NSMutableArray *cleanIntervals; // ivar: _cleanIntervals
@property (retain, nonatomic) _GDSEmissionForecast *currentForecast; // ivar: _currentForecast
@property (retain, nonatomic) NSUserDefaults *defaults; // ivar: _defaults
@property (retain, nonatomic) _GDSManager *gridManager; // ivar: _gridManager
@property (retain, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (nonatomic) CGFloat refetchPeriod; // ivar: _refetchPeriod
@property (nonatomic) BOOL tChargeNow; // ivar: _tChargeNow
@property (nonatomic) BOOL tSavingOpportunity; // ivar: _tSavingOpportunity


+(id)cleanIntervalsStringFromDates:(id)arg0 ;
+(id)sharedInstance;
-(BOOL)enoughVariationForForecast:(id)arg0 ;
-(BOOL)shouldChargeNow;
-(BOOL)shouldEngageForPluggedInTime:(CGFloat)arg0 ;
-(NSUInteger)thresholdFromForecast:(id)arg0 forChargeTime:(CGFloat)arg1 ;
-(id)fetchForecast;
-(id)forecastMapFrom:(id)arg0 ofInterval:(CGFloat)arg1 ;
-(id)init;
-(id)valuesFromForecast:(id)arg0 forInterval:(CGFloat)arg1 ;
-(void)resetState;
-(void)setupChargingTime:(CGFloat)arg0 forPluggedInTime:(CGFloat)arg1 ;


@end


#endif