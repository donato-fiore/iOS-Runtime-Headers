// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AFAUDIOSESSIONASSERTIONCONNECTION_H
#define AFAUDIOSESSIONASSERTIONCONNECTION_H

@class NSXPCConnection, NSString, NSUUID;
@protocol AFInvalidating, AFRelinquishableAssertion, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AFInstanceContext.h"
#import "AFTwoArgumentSafetyBlock.h"
#import "AFAssertionContext.h"

@interface AFAudioSessionAssertionConnection : NSObject <AFInvalidating, AFRelinquishableAssertion>

 {
    NSObject<OS_dispatch_queue> *_queue;
    AFInstanceContext *_instanceContext;
    NSXPCConnection *_xpcConnection;
    AFTwoArgumentSafetyBlock *_relinquishmentHandler;
}


@property (readonly, nonatomic) AFAssertionContext *context; // ivar: _acquisitionContext
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid


-(id)_xpcConnection;
-(id)initWithInstanceContext:(id)arg0 acquisitionContext:(id)arg1 relinquishmentHandler:(id)arg2 ;
-(void)_acquireWithContext:(id)arg0 ;
-(void)_clearXPCConnection;
-(void)_finalizeWithContext:(id)arg0 error:(id)arg1 ;
-(void)_relinquishWithContext:(id)arg0 error:(id)arg1 options:(NSUInteger)arg2 ;
-(void)dealloc;
-(void)handleXPCConnectionInterrupted;
-(void)handleXPCConnectionInvalidated;
-(void)invalidate;
-(void)relinquishWithContext:(id)arg0 options:(NSUInteger)arg1 ;
-(void)relinquishWithError:(id)arg0 options:(NSUInteger)arg1 ;


@end


#endif