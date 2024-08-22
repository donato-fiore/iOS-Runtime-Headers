// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CNOBSERVABLESKIPUNTILOPERATOR_H
#define _CNOBSERVABLESKIPUNTILOPERATOR_H

@class NSString;
@protocol _CNObservableSkipUntilSignalObserverDelegate, _CNObservableSkipUntilInputObserverDelegate, CNCancelable;


#import "CNObservable.h"

@interface _CNObservableSkipUntilOperator : CNObservable <_CNObservableSkipUntilSignalObserverDelegate, _CNObservableSkipUntilInputObserverDelegate>



@property (getter=isActive) BOOL active; // ivar: _active
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) CNObservable *input; // ivar: _input
@property (retain) NSObject<CNCancelable> *inputToken; // ivar: _inputToken
@property (readonly) CNObservable *signal; // ivar: _signal
@property (retain) NSObject<CNCancelable> *signalToken; // ivar: _signalToken
@property (readonly) Class superclass;


-(BOOL)shouldMirrorEvents;
-(id)initWithInput:(id)arg0 signal:(id)arg1 ;
-(id)subscribe:(id)arg0 ;
-(void)cancel;


@end


#endif