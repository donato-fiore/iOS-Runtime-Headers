// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCAMERAPOWERASSERTIONHANDLER_H
#define HMDCAMERAPOWERASSERTIONHANDLER_H

@class HMFObject, NSMutableSet, NSString;
@protocol HMFLogging, OS_dispatch_queue;



@interface HMDCameraPowerAssertionHandler : HMFObject <HMFLogging>



@property (readonly, nonatomic) NSMutableSet *currentRequestHandlerSessionIDs; // ivar: _currentRequestHandlerSessionIDs
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) unsigned int powerAssertion; // ivar: _powerAssertion
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
+(id)sharedHandler;
-(id)init;
-(void)deregisterRemoteRequestHandler:(id)arg0 ;
-(void)registerRemoteRequestHandler:(id)arg0 forSessionID:(id)arg1 ;


@end


#endif