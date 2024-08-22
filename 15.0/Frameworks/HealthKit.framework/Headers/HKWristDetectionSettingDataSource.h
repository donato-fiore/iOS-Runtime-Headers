// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKWRISTDETECTIONSETTINGDATASOURCE_H
#define HKWRISTDETECTIONSETTINGDATASOURCE_H



#import "HKObserverBridge.h"
#import "HKWristDetectionSettingManager.h"

@interface HKWristDetectionSettingDataSource : HKObserverBridge

@property (readonly, nonatomic) HKWristDetectionSettingManager *wristDetectionSettingManager; // ivar: _wristDetectionSettingManager


-(id)initWithWristDetectionSettingManager:(id)arg0 ;
-(id)makeAndRegisterBridgedObserverForKey:(id)arg0 handle:(id)arg1 ;
-(void)unregisterBridgedObserver:(id)arg0 forKey:(id)arg1 ;


@end


#endif