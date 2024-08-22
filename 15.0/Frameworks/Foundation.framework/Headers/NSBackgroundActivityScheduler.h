// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSBACKGROUNDACTIVITYSCHEDULER_H
#define NSBACKGROUNDACTIVITYSCHEDULER_H


#import <Foundation/Foundation.h>

#import "NSString.h"

@interface NSBackgroundActivityScheduler : NSObject {
    id *_private1;
    id *_private2;
    id *_private3;
    NSInteger _flags;
    os_unfair_lock_s _invalidateLock;
}


@property (getter=_isAppRefresh) BOOL _appRefresh;
@property id *checkInHandler;
@property CGFloat delay;
@property (readonly, copy) NSString *identifier;
@property CGFloat interval;
@property (getter=isPreregistered) BOOL preregistered;
@property NSInteger qualityOfService;
@property BOOL repeats;
@property (readonly) BOOL shouldDefer;
@property CGFloat tolerance;


-(id)init;
-(id)initWithIdentifier:(id)arg0 ;
-(void)_setAdditionalXPCActivityProperties:(id)arg0 ;
-(void)_updateCriteria:(id)arg0 ;
-(void)_updateCriteriaForCompletedActivity:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)scheduleWithBlock:(id)arg0 ;


@end


#endif