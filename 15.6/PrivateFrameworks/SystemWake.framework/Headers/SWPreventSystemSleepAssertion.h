// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SWPREVENTSYSTEMSLEEPASSERTION_H
#define SWPREVENTSYSTEMSLEEPASSERTION_H

@class NSString;
@protocol BSInvalidatable;

#import <Foundation/Foundation.h>


@interface SWPreventSystemSleepAssertion : NSObject <BSInvalidatable>

 {
    NSString *_identifier;
    unsigned int _lock_assertionID;
    os_unfair_lock_s _lock;
    CGFloat _lock_timeoutTime;
    NSUInteger _lock_state;
    BOOL _invalidated;
}


@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedHighPriorityQueue;
-(id)initWithIdentifier:(id)arg0 ;
-(void)acquireWithTimeout:(CGFloat)arg0 handler:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif