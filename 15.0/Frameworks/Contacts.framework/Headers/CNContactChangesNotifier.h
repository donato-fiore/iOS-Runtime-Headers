// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNCONTACTCHANGESNOTIFIER_H
#define CNCONTACTCHANGESNOTIFIER_H

@class CNMutableMultiDictionary;
@protocol CNScheduler;

#import <Foundation/Foundation.h>

#import "CNContactStore.h"

@interface CNContactChangesNotifier : NSObject {
    BOOL _observingNotification;
    id<CNScheduler> *_resourceLock;
    id<CNScheduler> *_workQueue;
    id<CNScheduler> *_downstream;
    CNContactStore *_contactStore;
    CNMutableMultiDictionary *_registeredObservers;
}




+(id)sharedNotifier;
+(id)workQueue_createFetchersFromRegisteredObservers:(id)arg0 ;
-(id)init;
-(id)initWithContactStore:(id)arg0 downstreamScheduler:(id)arg1 schedulerProvider:(id)arg2 ;
-(void)contactStoreDidChange:(id)arg0 ;
-(void)registerObserver:(id)arg0 forContact:(id)arg1 ;
-(void)registerObserver:(id)arg0 forContact:(id)arg1 keysToFetch:(id)arg2 ;
-(void)registerObserver:(id)arg0 forContact:(id)arg1 keysToFetch:(id)arg2 completionHandler:(id)arg3 ;
-(void)unregisterObserver:(id)arg0 forContact:(id)arg1 ;
-(void)unregisterObserver:(id)arg0 forContact:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif