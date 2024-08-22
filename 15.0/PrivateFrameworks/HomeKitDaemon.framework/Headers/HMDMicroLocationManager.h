// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDMICROLOCATIONMANAGER_H
#define HMDMICROLOCATIONMANAGER_H

@class HMFObject, NSMutableArray, NSString;
@protocol HMFLogging;


#import "HMDLocation.h"

@interface HMDMicroLocationManager : HMFObject <HMFLogging>

 {
    os_unfair_lock_s _lock;
    NSMutableArray *_lastRecordingScanTimes;
    NSMutableArray *_lastLocalizationScanTimes;
    HMDLocation *_locationManager;
    id *_dateFactory;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithLocationManager:(id)arg0 ;
-(id)initWithLocationManager:(id)arg0 dateFactory:(id)arg1 ;
-(void)triggerThrottledMicroLocationLocalizationScanWithMetadata:(id)arg0 triggerType:(NSUInteger)arg1 ;
-(void)triggerThrottledMicroLocationRecordingScanWithMetadata:(id)arg0 triggerType:(NSUInteger)arg1 ;


@end


#endif