// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HAENHEALTHKITSTORE_H
#define HAENHEALTHKITSTORE_H

@class HKHealthStore;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HAENHealthKitStore : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    HKHealthStore *_healthStore;
}




+(id)createHKCategorySampleForEvent:(id)arg0 ;
+(id)sharedInstance;
-(id)init;
-(id)saveNotificationEventToHealthKit:(id)arg0 ;
-(id)saveNotificationEventToHealthKit:(id)arg0 withDelegate:(id)arg1 ;


@end


#endif