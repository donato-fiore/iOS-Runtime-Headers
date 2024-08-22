// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SWSCHEDULEDSYSTEMWAKE_H
#define SWSCHEDULEDSYSTEMWAKE_H

@class NSDate, NSString;
@protocol BSInvalidatable;

#import <Foundation/Foundation.h>


@interface SWScheduledSystemWake : NSObject <BSInvalidatable>

 {
    os_unfair_lock_s _lock;
    NSDate *_lock_wakeDate;
    NSString *_lock_wakeIdentifier;
    NSInteger _lock_leeway;
    BOOL _lock_invalidated;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSInteger leeway;
@property (readonly, nonatomic, getter=isScheduled) BOOL scheduled;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat wakeTime;


-(id)initWithIdentifier:(id)arg0 ;
-(void)cancelWake;
-(void)dealloc;
-(void)invalidate;
-(void)scheduleWake:(CGFloat)arg0 leeway:(NSInteger)arg1 ;


@end


#endif