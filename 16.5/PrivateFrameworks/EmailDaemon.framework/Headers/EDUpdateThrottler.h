// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDUPDATETHROTTLER_H
#define EDUPDATETHROTTLER_H

@class NSMutableArray, NSDate, NSString, EFDebouncer;
@protocol EDResumable, EFScheduler;

#import <Foundation/Foundation.h>


@interface EDUpdateThrottler : NSObject {
    os_unfair_lock_s _updatesLock;
    NSMutableArray *_unacknowledgedUpdates;
}


@property (readonly, nonatomic) CGFloat delayInterval; // ivar: _delayInterval
@property (nonatomic) BOOL hasChangesSinceLastUpdate; // ivar: _hasChangesSinceLastUpdate
@property (retain, nonatomic) NSDate *lastAcknowledgementDate; // ivar: _lastAcknowledgementDate
@property (retain, nonatomic) NSDate *lastUpdateDate; // ivar: _lastUpdateDate
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSObject<EDResumable> *resumable; // ivar: _resumable
@property (retain, nonatomic) EFDebouncer *resumeClientDebouncer; // ivar: _resumeClientDebouncer
@property (retain, nonatomic) NSObject<EFScheduler> *resumeClientScheduler; // ivar: _resumeClientScheduler
@property (readonly, nonatomic) NSInteger scalingFactor; // ivar: _scalingFactor
@property (nonatomic) NSInteger updateCounter; // ivar: _updateCounter


+(id)instances;
+(void)_registerInstance:(id)arg0 ;
+(void)resetAllInstances;
-(NSUInteger)unacknowledgedUpdatesCountAndTimeSinceLastAcknowledgement:(*CGFloat)arg0 ;
-(id)initWithDelayInterval:(CGFloat)arg0 scalingFactor:(NSInteger)arg1 ;
-(id)initWithName:(id)arg0 delayInterval:(CGFloat)arg1 resumable:(id)arg2 ;
-(id)initWithName:(id)arg0 delayInterval:(CGFloat)arg1 scalingFactor:(NSInteger)arg2 ;
// -(id)updateWithBlock:(id)arg0 unacknowledgedUpdatesCount:(unk)arg1  ;
-(void)_reset;
-(void)dealloc;


@end


#endif