// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAAUTOMATICALLYINVALIDATINGASSERTION_H
#define SAAUTOMATICALLYINVALIDATINGASSERTION_H

@class NSString, NSTimer, NSDate;
@protocol SAAutomaticallyInvalidatable;


#import "SAAssertion.h"

@interface SAAutomaticallyInvalidatingAssertion : SAAssertion <SAAutomaticallyInvalidatable>

 {
    NSString *_key;
    NSString *_lockReason;
    NSTimer *_invalidationTimer;
}


@property (nonatomic, getter=isAutomaticallyInvalidatable) BOOL automaticallyInvalidatable; // ivar: _automaticallyInvalidatable
@property (readonly, copy, nonatomic) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat invalidationInterval; // ivar: _invalidationInterval
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isValid) BOOL valid;


-(id)initWithInvalidationInterval:(CGFloat)arg0 ;
-(void)_invalidateInvalidationTimerIfNecessary;
-(void)_scheduleInvalidationTimerIfNecessary;
-(void)resetAutomaticInvalidationTimer;


@end


#endif