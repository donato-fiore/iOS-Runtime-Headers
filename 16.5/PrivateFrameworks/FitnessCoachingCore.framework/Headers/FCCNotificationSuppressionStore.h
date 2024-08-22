// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCCNOTIFICATIONSUPPRESSIONSTORE_H
#define FCCNOTIFICATIONSUPPRESSIONSTORE_H


#import <Foundation/Foundation.h>

#import "FCCDateProvider.h"

@interface FCCNotificationSuppressionStore : NSObject {
    FCCDateProvider *_dateProvider;
    os_unfair_lock_s _unfairLock;
}




-(BOOL)lastNotifiedSuppressionState;
-(BOOL)notificationsSuppressed;
-(id)_requestsMap;
-(id)_userDefaults;
-(id)allRequests;
-(id)init;
-(id)initWithDateProvider:(id)arg0 ;
-(void)_updateStoredRequests:(id)arg0 ;
-(void)addNotificationSuppressionRequest:(id)arg0 ;
-(void)removeNotificationSuppressionRequest:(id)arg0 ;
-(void)setLastNotifiedSuppressionState:(BOOL)arg0 ;


@end


#endif