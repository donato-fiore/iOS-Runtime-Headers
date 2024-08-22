// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HEARTRATESTORE_H
#define HEARTRATESTORE_H

@class HKHealthStore, HKQuery;

#import <Foundation/Foundation.h>


@interface HeartRateStore : NSObject {
    BOOL _heartRateEnabled;
    HKHealthStore *_healthStore;
}


@property (retain, nonatomic) HKQuery *heartRateQuery; // ivar: _heartRateQuery
@property (nonatomic) NSUInteger recentHeartRate; // ivar: _recentHeartRate
@property (nonatomic) CGFloat recentHeartRateTime; // ivar: _recentHeartRateTime


+(id)sharedStore;
-(id)init;
-(void)_updateHeartRateEnabled;
-(void)_updateHeartRateWithCompletion:(id)arg0 ;
-(void)recentHeartRateWithCompletion:(id)arg0 ;


@end


#endif