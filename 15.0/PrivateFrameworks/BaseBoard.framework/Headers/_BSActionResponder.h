// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _BSACTIONRESPONDER_H
#define _BSACTIONRESPONDER_H

@class NSArray, NSString;
@protocol BSDebugDescriptionProviding, OS_dispatch_queue, OS_dispatch_source, OS_dispatch_mach;

#import <Foundation/Foundation.h>

#import "BSMachPortSendOnceRight.h"
#import "BSActionResponse.h"

@interface _BSActionResponder : NSObject <BSDebugDescriptionProviding>

 {
    NSObject<OS_dispatch_queue> *_lock_originator_responseQueue;
    id *_lock_originator_responseHandler;
    NSObject<OS_dispatch_source> *_lock_originator_timeoutSource;
    NSObject<OS_dispatch_source> *_lock_originator_replySource;
    BSMachPortSendOnceRight *_reply;
    NSObject<OS_dispatch_mach> *_lock_nullificationMach;
    NSArray *_lock_inactivationCallStack;
    BSActionResponse *_lock_response;
    NSObject<OS_dispatch_queue> *_lock_nullificationQueue;
    id *_lock_nullificationHandler;
    os_unfair_lock_s _lock;
    BOOL _isOriginator;
    BOOL _isOriginatorNull;
    BOOL _lock_invalidateSendsNotPossible;
    BOOL _lock_action_encoded;
    BOOL _lock_action_sent;
    BOOL _lock_action_invalidated;
    BOOL _lock_annulled;
    BOOL _lock_nullificationHandlerIsLegacy;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)debugDescriptionWithMultilinePrefix:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)dealloc;


@end


#endif