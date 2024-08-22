// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSSMARTCOVERSERVICE_H
#define SBSSMARTCOVERSERVICE_H

@class BSServiceConnection, BSCompoundAssertion, NSString;
@protocol BSInvalidatable;

#import <Foundation/Foundation.h>


@interface SBSSmartCoverService : NSObject <BSInvalidatable>

 {
    os_unfair_lock_s _lock;
    BSServiceConnection *_lock_connection;
    BSCompoundAssertion *_observerAssertion;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)init;
-(id)registerSmartCoverStateObserver:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)observeSmartCoverStateDidChange:(id)arg0 ;


@end


#endif