// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDSOFTWAREUPDATEEVENTPROVIDERCONTEXT_H
#define HMDSOFTWAREUPDATEEVENTPROVIDERCONTEXT_H

@class HMFObject, NSString;
@protocol HMFLogging, HMEEventForwarder, HMELastEventStoreReadHandle, HMDSUControllerManager, OS_dispatch_queue;


#import "HMDAccessory.h"

@interface HMDSoftwareUpdateEventProviderContext : HMFObject <HMFLogging>



@property (readonly, weak) HMDAccessory *accessory; // ivar: _accessory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<HMEEventForwarder> *eventForwarder; // ivar: _eventForwarder
@property (readonly, copy) NSString *eventSource;
@property (readonly) NSObject<HMELastEventStoreReadHandle> *eventStoreReadHandle; // ivar: _eventStoreReadHandle
@property (readonly) CGFloat eventTimeStamp;
@property (readonly) NSUInteger hash;
@property (retain) NSObject<HMDSUControllerManager> *suControllerManager; // ivar: _suControllerManager
@property (copy) id *suControllerManagerFactory; // ivar: _suControllerManagerFactory
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(id)initWithAccessory:(id)arg0 workQueue:(id)arg1 eventStoreReadHandle:(id)arg2 eventForwarder:(id)arg3 suControllerManagerFactory:(id)arg4 ;
-(id)lastEventForTopicSuffixID:(NSUInteger)arg0 ;
-(void)configureWithDelegate:(id)arg0 ;
-(void)forwardEvent:(id)arg0 withTopicSuffixID:(NSUInteger)arg1 ;
-(void)managerStatus:(id)arg0 ;
-(void)scanWithOptions:(id)arg0 ;


@end


#endif