// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDLAUNCHHANDLER_H
#define HMDLAUNCHHANDLER_H

@class HMFObject, NSString, NSMutableSet, NSURL;
@protocol HMFLogging, HMDFileManager, OS_dispatch_queue;



@interface HMDLaunchHandler : HMFObject <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<HMDFileManager> *fileManager; // ivar: _fileManager
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *handlerQueue; // ivar: _handlerQueue
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) id *jetsamPriorityHandler; // ivar: _jetsamPriorityHandler
@property (readonly, nonatomic) NSMutableSet *registeredRelaunchClients; // ivar: _registeredRelaunchClients
@property (readonly, copy, nonatomic) NSURL *relaunchPlistFileURL; // ivar: _relaunchPlistFileURL
@property (readonly) Class superclass;


+(id)logCategory;
+(id)sharedHandler;
-(id)init;
-(id)initWithRelaunchPlistFileURL:(id)arg0 fileManager:(id)arg1 jetsamPriorityHandler:(id)arg2 ;
-(void)_setJetsamPriorityElevated:(BOOL)arg0 ;
-(void)_updateOrRemoveRelaunchPlist;
-(void)deregisterRelaunchClientWithUUID:(id)arg0 ;
-(void)registerRelaunchClientWithUUID:(id)arg0 ;
-(void)removePersistentRelaunchRegistrationsIfNecessary;


@end


#endif