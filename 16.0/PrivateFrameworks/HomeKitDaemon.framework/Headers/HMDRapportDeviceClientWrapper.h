// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDRAPPORTDEVICECLIENTWRAPPER_H
#define HMDRAPPORTDEVICECLIENTWRAPPER_H

@class RPCompanionLinkClient, NSMutableArray, NSString;
@protocol HMFLogging;

#import <Foundation/Foundation.h>


@interface HMDRapportDeviceClientWrapper : NSObject <HMFLogging>

 {
    RPCompanionLinkClient *_client;
    NSInteger _activateState;
    NSMutableArray *_requestQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithClient:(id)arg0 ;
-(void)_completeQueuedRequestsWithError:(id)arg0 ;
-(void)_queueRequestID:(id)arg0 request:(id)arg1 options:(id)arg2 responseHandler:(id)arg3 ;
-(void)activateWithCompletion:(id)arg0 ;
-(void)invalidate;
-(void)sendRequestID:(id)arg0 request:(id)arg1 options:(id)arg2 responseHandler:(id)arg3 ;


@end


#endif