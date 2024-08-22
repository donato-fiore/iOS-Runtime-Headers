// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDLAUNCHHANDLER_H
#define HMDLAUNCHHANDLER_H

@class HMFObject, NSString, NSMutableSet;
@protocol HMFLogging, OS_dispatch_queue;



@interface HMDLaunchHandler : HMFObject <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *handlerQueue; // ivar: _handlerQueue
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableSet *registeredRelaunchClients; // ivar: _registeredRelaunchClients
@property (readonly) Class superclass;


+(BOOL)_fileExistsAtPath:(id)arg0 ;
+(BOOL)_removeFileAtPath:(id)arg0 error:(*id)arg1 ;
+(BOOL)_writeDictionary:(id)arg0 toFileURL:(id)arg1 error:(*id)arg2 ;
+(id)logCategory;
+(id)relaunchPlistPath;
+(id)sharedHandler;
+(int)_setJetsamPriorityUsingCommand:(int)arg0 ;
-(id)init;
-(void)_setJetsamPriorityElevated:(BOOL)arg0 ;
-(void)_updateOrRemoveRelaunchPlist;
-(void)deregisterForRelaunch:(id)arg0 ;
-(void)registerForRelaunch:(id)arg0 ;
-(void)removePersistentRelaunchRegistrationsIfNecessary;


@end


#endif