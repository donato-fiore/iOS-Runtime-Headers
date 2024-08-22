// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPCSUZELEASESESSIONCONTROLLER_H
#define MPCSUZELEASESESSIONCONTROLLER_H

@class NSMapTable, NSString;
@protocol ICSuzeLeaseSessionDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MPCSuzeLeaseSessionController : NSObject <ICSuzeLeaseSessionDelegate>

 {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSMapTable *_leaseIDToLeaseSessionInfo;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedController;
-(id)_init;
-(void)startLeaseSessionWithConfiguration:(id)arg0 completion:(id)arg1 ;
-(void)stopLeaseSession:(id)arg0 completion:(id)arg1 ;
-(void)suzeLeaseSession:(id)arg0 leaseRenewalDidFailWithError:(id)arg1 ;


@end


#endif