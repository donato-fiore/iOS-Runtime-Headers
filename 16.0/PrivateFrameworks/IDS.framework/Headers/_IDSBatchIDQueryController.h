// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _IDSBATCHIDQUERYCONTROLLER_H
#define _IDSBATCHIDQUERYCONTROLLER_H

@class NSString, CUTWeakReference, NSArray, NSMutableArray, NSTimer, NSDate;
@protocol IDSIDQueryControllerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _IDSBatchIDQueryController : NSObject <IDSIDQueryControllerDelegate>

 {
    NSString *_serviceName;
    CUTWeakReference *_delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_listenerID;
    NSArray *_destinations;
    NSMutableArray *_destinationsToQuery;
    os_unfair_lock_s _destinationsToQuerylock;
    NSTimer *_nextQueryTimer;
    NSDate *_timeOfDeath;
    id *_rateLimiter;
    CUTWeakReference *_parent;
    int _numberOfQueriesDone;
    BOOL _isDead;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)underLimit;
-(id)initWithService:(id)arg0 delegate:(id)arg1 queue:(id)arg2 parent:(id)arg3 ;
-(void)_calloutToDelegateWithResult:(id)arg0 error:(id)arg1 ;
-(void)_invalidateNextQueryTimer;
-(void)_nextQuery:(id)arg0 ;
-(void)_scheduleNextQuery:(CGFloat)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)setDestinations:(id)arg0 ;


@end


#endif