// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKDARWINNOTIFICATIONDATASOURCE_H
#define HKDARWINNOTIFICATIONDATASOURCE_H



#import "HKObserverBridge.h"

@interface HKDarwinNotificationDataSource : HKObserverBridge



-(id)makeAndRegisterBridgedObserverForKey:(id)arg0 handle:(id)arg1 ;
-(void)unregisterBridgedObserver:(id)arg0 forKey:(id)arg1 ;


@end


#endif