// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSXPCSTORENOTIFICATIONOBSERVER_H
#define NSXPCSTORENOTIFICATIONOBSERVER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NSXPCStoreNotificationObserver : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    int _token;
    id *_store;
}




-(id)initForObservationWithName:(id)arg0 store:(id)arg1 ;
-(void)dealloc;


@end


#endif