// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _NSCONCRETEOBSERVATION_H
#define _NSCONCRETEOBSERVATION_H

@protocol NSObservable, NSObserver;


#import "NSObservation.h"

@interface _NSConcreteObservation : NSObservation {
    NSObject<NSObservable> *_LHSobservable;
    NSObject<NSObserver> *_RHSobserver;
    id _observers;
}




-(*void)_observerStorageOfSize:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)debugDescription;
-(id)initWithObservable:(id)arg0 observer:(id)arg1 ;
-(void)_receiveBox:(id)arg0 ;
-(void)dealloc;
-(void)finishObserving;
-(void)remove;


@end


#endif