// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _EFCONNECTABLEOBSERVABLE_H
#define _EFCONNECTABLEOBSERVABLE_H

@class NSLock, NSString;
@protocol EFConnectableObservable, EFObservable, EFObservable><EFObserver;


#import "EFObservable.h"
#import "EFCancelationToken.h"

@interface _EFConnectableObservable : EFObservable <EFConnectableObservable>

 {
    id<EFObservable> *_observable;
    id<EFObservable><EFObserver> *_subject;
    NSLock *_lock;
    EFCancelationToken *_cancelable;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)connect;
-(id)initWithObservable:(id)arg0 subject:(id)arg1 ;
-(id)subscribe:(id)arg0 ;
-(void)_disconnect;


@end


#endif