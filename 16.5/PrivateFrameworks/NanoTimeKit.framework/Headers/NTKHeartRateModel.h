// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKHEARTRATEMODEL_H
#define NTKHEARTRATEMODEL_H

@class HKQuantitySample;
@protocol NTKHeartRateQueryObserver, NTKHeartRateModelDelegate;

#import <Foundation/Foundation.h>


@interface NTKHeartRateModel : NSObject <NTKHeartRateQueryObserver>



@property (readonly, weak, nonatomic) NSObject<NTKHeartRateModelDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) HKQuantitySample *mostRecentHeartRate; // ivar: _mostRecentHeartRate


-(id)initWithDelegate:(id)arg0 ;
-(void)manager:(id)arg0 receivedLatestHeartRateSample:(id)arg1 ;


@end


#endif