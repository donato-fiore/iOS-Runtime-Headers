// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDHOMEADMINISTRATORCONFIGURATIONOPERATION_H
#define HMDHOMEADMINISTRATORCONFIGURATIONOPERATION_H

@class HMFOperation, NSString, HMFMessageDispatcher, HMFMessage;
@protocol HMFLogging;


#import "HMDHome.h"

@interface HMDHomeAdministratorConfigurationOperation : HMFOperation <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) HMFMessageDispatcher *dispatcher; // ivar: _dispatcher
@property (readonly) NSUInteger hash;
@property (readonly, weak) HMDHome *home; // ivar: _home
@property (readonly) HMFMessage *message; // ivar: _message
@property (copy) id *responseHandler; // ivar: _responseHandler
@property (copy) id *sendCompletionBlock; // ivar: _sendCompletionBlock
@property BOOL shouldSuspendSyncing; // ivar: _shouldSuspendSyncing
@property (readonly) Class superclass;


+(CGFloat)timeout;
+(id)logCategory;
-(id)initWithMessage:(id)arg0 home:(id)arg1 dispatcher:(id)arg2 ;
-(id)logIdentifier;
-(void)main;


@end


#endif