// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMBCLOUDPUSHHANDLER_H
#define HMBCLOUDPUSHHANDLER_H

@class HMFObject, NSHashTable, NSString;
@protocol HMBAPSConnectionDelegate, HMFLogging, HMBAPSConnection;



@interface HMBCloudPushHandler : HMFObject <HMBAPSConnectionDelegate, HMFLogging>

 {
    os_unfair_lock_s _lock;
    os_unfair_lock_s _apsLock;
    id<HMBAPSConnection> *_apsConnection;
    NSHashTable *_observers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;
+(id)sharedHandlerForEnvironment:(id)arg0 ;
-(id)initWithAPSConnection:(id)arg0 ;
-(void)addObserver:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(void)connection:(id)arg0 didReceiveIncomingMessage:(id)arg1 ;
-(void)connection:(id)arg0 didReceivePublicToken:(id)arg1 ;
-(void)connection:(id)arg0 didReceiveToken:(id)arg1 forTopic:(id)arg2 identifier:(id)arg3 ;


@end


#endif