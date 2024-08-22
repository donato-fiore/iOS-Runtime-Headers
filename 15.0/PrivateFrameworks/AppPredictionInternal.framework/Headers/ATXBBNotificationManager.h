// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXBBNOTIFICATIONMANAGER_H
#define ATXBBNOTIFICATIONMANAGER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ATXBBNotificationManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _debugOutput;
    NSMutableDictionary *_recentNotifications;
}




+(id)sharedInstance;
-(BOOL)_purgeNotificationsWithMinDate:(id)arg0 ;
-(id)init;
-(id)initWithDebugOutput:(BOOL)arg0 ;
-(id)recentNotifications;
-(void)addNotificationForBundleId:(id)arg0 withPublicationDate:(id)arg1 ;


@end


#endif