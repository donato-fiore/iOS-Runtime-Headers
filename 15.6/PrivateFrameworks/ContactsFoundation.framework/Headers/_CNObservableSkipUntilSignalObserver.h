// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CNOBSERVABLESKIPUNTILSIGNALOBSERVER_H
#define _CNOBSERVABLESKIPUNTILSIGNALOBSERVER_H

@class NSString;
@protocol CNObserver, _CNObservableSkipUntilSignalObserverDelegate;

#import <Foundation/Foundation.h>


@interface _CNObservableSkipUntilSignalObserver : NSObject <CNObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak) NSObject<_CNObservableSkipUntilSignalObserverDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithDelegate:(id)arg0 ;
-(void)observerDidComplete;
-(void)observerDidFailWithError:(id)arg0 ;
-(void)observerDidReceiveResult:(id)arg0 ;


@end


#endif