// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC7NEWSUI217SPORTSSYNCMANAGER_H
#define _TTC7NEWSUI217SPORTSSYNCMANAGER_H


#import <Foundation/Foundation.h>


@interface _TtC7NewsUI217SportsSyncManager : NSObject {
    ? featureAvailability;
    ? sportsDataService;
    ? subscriptionService;
    ? syncService;
    ? tagService;
    ? userInfo;
    ? accessQueue;
    ? $__lazy_storage_$_syncOperationQueue;
    ? appConfigurationManager;
}




-(id)init;
-(void)dealloc;
-(void)doSync;
-(void)updateSyncState;


@end


#endif