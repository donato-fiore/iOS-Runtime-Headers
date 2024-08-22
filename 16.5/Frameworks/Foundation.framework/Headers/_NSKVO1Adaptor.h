// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _NSKVO1ADAPTOR_H
#define _NSKVO1ADAPTOR_H

@class NSConcreteObservation;


#import "NSObservableKeyPath.h"

@interface _NSKVO1Adaptor : NSConcreteObservation {
    NSObservableKeyPath *kp;
    BOOL emitsChanges;
}




-(BOOL)isEqual:(id)arg0 ;
-(id)initWithObservable:(id)arg0 observer:(id)arg1 keyPath:(id)arg2 ;
-(void)_observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 changeKind:(NSUInteger)arg2 oldValue:(id)arg3 newValue:(id)arg4 indexes:(id)arg5 context:(*void)arg6 ;
-(void)_setEmitsChanges:(BOOL)arg0 ;
-(void)finishObserving;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)remove;


@end


#endif