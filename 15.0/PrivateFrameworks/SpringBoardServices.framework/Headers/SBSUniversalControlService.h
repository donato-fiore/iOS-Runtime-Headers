// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSUNIVERSALCONTROLSERVICE_H
#define SBSUNIVERSALCONTROLSERVICE_H

@class BSCompoundAssertion, BSServiceConnection, NSString;
@protocol SBSUniversalControlServerToClientInterface, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SBSUniversalControlService : NSObject <SBSUniversalControlServerToClientInterface>

 {
    os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_queue;
    BSCompoundAssertion *_disableKeyboardFocusAssertion;
    BSCompoundAssertion *_screenEdgeOwnershipAssertion;
    BSServiceConnection *_serverConnection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)new;
+(id)sharedInstance;
-(id)acquireScreenEdgeOwnershipForPointerEvents:(NSUInteger)arg0 forReason:(id)arg1 ;
-(id)disableKeyboardFocusOnCurrentDeviceForReason:(id)arg0 ;
-(id)init;


@end


#endif