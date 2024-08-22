// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8MAPSSYNC23MAPSSYNCSTORECONTROLLER_H
#define _TTC8MAPSSYNC23MAPSSYNCSTORECONTROLLER_H


#import <Foundation/Foundation.h>


@interface _TtC8MapsSync23MapsSyncStoreController : NSObject {
    ? _subscriptionLock;
    ? _store;
    ? _analyzerSubscriptions;
    ? _delegate;
    ? _callbackQueue;
    ? _barrierQueue;
}




+(id)initForAPIv1WithNotifyForChanges:(id)arg0 delegate:(id)arg1 error:(*id)arg2 ;
-(id)init;
-(id)initWithConfig:(id)arg0 notifyForChanges:(id)arg1 callbackQueue:(id)arg2 delegate:(id)arg3 ;
-(id)initWithNotifyForChanges:(id)arg0 delegate:(id)arg1 ;
-(id)initWithPrimarySession:(id)arg0 cacheSession:(id)arg1 notifyForChanges:(id)arg2 callbackQueue:(id)arg3 delegate:(id)arg4 error:(*id)arg5 ;
-(void)contextDidSaveWithNotification:(id)arg0 ;
-(void)dealloc;
-(void)handleRemoteChange;


@end


#endif