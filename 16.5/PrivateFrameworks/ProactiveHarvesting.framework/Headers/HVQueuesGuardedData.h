// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HVQUEUESGUARDEDDATA_H
#define HVQUEUESGUARDEDDATA_H

@class NSMapTable, NSMutableDictionary;
@protocol OS_os_transaction;

#import <Foundation/Foundation.h>


@interface HVQueuesGuardedData : NSObject {
    NSMapTable *_observers;
    NSMutableDictionary *_queues;
    NSObject<OS_os_transaction> *_contentAvailableNotificationInProgress;
    unsigned int _dataSourcesWithContentAvailable;
}




-(id)init;


@end


#endif