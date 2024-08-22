// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CNOBSERVABLESKIPUNTILINPUTOBSERVER_H
#define _CNOBSERVABLESKIPUNTILINPUTOBSERVER_H

@class NSString;
@protocol CNObserver, _CNObservableSkipUntilInputObserverDelegate;

#import <Foundation/Foundation.h>


@interface _CNObservableSkipUntilInputObserver : NSObject <CNObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak) NSObject<_CNObservableSkipUntilInputObserverDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<CNObserver> *observer; // ivar: _observer
@property (readonly) Class superclass;


-(id)initWithObserver:(id)arg0 delegate:(id)arg1 ;
-(void)observerDidFailWithError:(id)arg0 ;
-(void)observerDidReceiveResult:(id)arg0 ;


@end


#endif