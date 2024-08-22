// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSHPRESENTATIONUPDATES_H
#define BLSHPRESENTATIONUPDATES_H

@class NSDate, NSMutableArray;

#import <Foundation/Foundation.h>


@interface BLSHPresentationUpdates : NSObject {
    NSDate *_startDate;
    NSMutableArray *_updates;
    os_unfair_lock_s _lock;
    BOOL _invalidated;
}


@property (readonly, nonatomic, getter=isCompleted) BOOL completed;
@property (readonly, nonatomic) NSUInteger count;
@property (readonly, nonatomic) NSDate *nextUpdatesStart; // ivar: _nextUpdatesStart


-(BOOL)isValidWithNowDate:(id)arg0 ;
-(id)dequeueAllUpdates;
-(id)dequeueNextUpdate;
-(id)description;
-(id)initWithStartDate:(id)arg0 updates:(id)arg1 nextUpdatesStart:(id)arg2 ;
-(id)invalidate;
-(id)peekNextUpdate;
-(void)dealloc;


@end


#endif