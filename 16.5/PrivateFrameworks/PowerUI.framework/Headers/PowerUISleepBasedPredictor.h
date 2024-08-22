// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef POWERUISLEEPBASEDPREDICTOR_H
#define POWERUISLEEPBASEDPREDICTOR_H

@protocol PowerUIPredictor, OS_os_log;

#import <Foundation/Foundation.h>


@interface PowerUISleepBasedPredictor : NSObject <PowerUIPredictor>



@property (retain, nonatomic) NSObject<OS_os_log> *log; // ivar: _log


+(BOOL)shouldUseSleepPredictorWithLog:(id)arg0 ;
-(NSUInteger)modelVersion;
-(NSUInteger)predictorType;
-(id)initWithLog:(id)arg0 ;
-(id)predictFullChargeDateWithBatteryLevel:(NSUInteger)arg0 ;


@end


#endif