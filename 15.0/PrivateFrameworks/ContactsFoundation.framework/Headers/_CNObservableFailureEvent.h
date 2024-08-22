// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CNOBSERVABLEFAILUREEVENT_H
#define _CNOBSERVABLEFAILUREEVENT_H

@class NSError;


#import "CNObservableEvent.h"

@interface _CNObservableFailureEvent : CNObservableEvent {
    NSError *_error;
}




-(BOOL)hasValue;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)eventType;
-(NSUInteger)hash;
-(id)error;
-(id)initWithError:(id)arg0 ;
-(id)value;
-(void)dematerializeWithObserver:(id)arg0 ;


@end


#endif