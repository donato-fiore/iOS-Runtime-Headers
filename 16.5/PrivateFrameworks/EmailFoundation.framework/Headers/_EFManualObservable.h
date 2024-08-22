// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _EFMANUALOBSERVABLE_H
#define _EFMANUALOBSERVABLE_H

@class NSMutableArray, NSError, NSString;
@protocol EFObserver;


#import "EFObservable.h"

@interface _EFManualObservable : EFObservable <EFObserver>

 {
    NSMutableArray *_observers;
    NSError *_failureError;
    os_unfair_lock_s _lock;
    BOOL _didCompleteOrFail;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_addObserver:(id)arg0 failureError:(*id)arg1 ;
-(id)init;
-(id)subscribe:(id)arg0 ;
-(void)_removeObserver:(id)arg0 ;
-(void)observerDidComplete;
-(void)observerDidFailWithError:(id)arg0 ;
-(void)observerDidReceiveResult:(id)arg0 ;


@end


#endif