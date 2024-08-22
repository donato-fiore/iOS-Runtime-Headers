// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _EFREPLAYOBSERVABLE_H
#define _EFREPLAYOBSERVABLE_H

@class NSLock, NSError, NSMutableArray, NSString;
@protocol EFObserver;


#import "EFObservable.h"
#import "EFQueue.h"

@interface _EFReplayObservable : EFObservable <EFObserver>

 {
    NSLock *_lock;
    BOOL _isStopped;
    NSError *_error;
    EFQueue *_queue;
    NSMutableArray *_observers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithCount:(NSUInteger)arg0 ;
-(id)subscribe:(id)arg0 ;
-(void)_unsubscribe:(id)arg0 ;
-(void)observerDidComplete;
-(void)observerDidFailWithError:(id)arg0 ;
-(void)observerDidReceiveResult:(id)arg0 ;


@end


#endif