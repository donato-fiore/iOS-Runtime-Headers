// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIFENCETASK_H
#define _UIFENCETASK_H

@class BKSProcessAssertion, NSString;
@protocol BSInvalidatable;

#import <Foundation/Foundation.h>


@interface _UIFenceTask : NSObject <BSInvalidatable>

 {
    NSUInteger _identifier;
    os_unfair_lock_s _lock;
    BOOL _lock_invalidated;
    BKSProcessAssertion *_assertion;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_processRequiresFenceAssertions;
-(id)init;
-(void)dealloc;
-(void)invalidate;


@end


#endif