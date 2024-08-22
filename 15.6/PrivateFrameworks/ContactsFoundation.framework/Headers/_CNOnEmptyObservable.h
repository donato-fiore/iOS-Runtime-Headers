// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CNONEMPTYOBSERVABLE_H
#define _CNONEMPTYOBSERVABLE_H

@protocol CNObservable;


#import "CNObservable.h"

@interface _CNOnEmptyObservable : CNObservable {
    id<CNObservable> *_nextObservable;
    BOOL _observableIsEmpty;
}


@property (retain, nonatomic) NSObject<CNObservable> *observable; // ivar: _observable


-(BOOL)isObservableEmpty;
-(id)initWithObservable:(id)arg0 nextObservable:(id)arg1 ;
-(id)subscribe:(id)arg0 ;
-(id)subscribeNextObservable:(id)arg0 ;


@end


#endif