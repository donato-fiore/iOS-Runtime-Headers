// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CNOBSERVABLECOMPLETIONEVENT_H
#define _CNOBSERVABLECOMPLETIONEVENT_H



#import "CNObservableEvent.h"

@interface _CNObservableCompletionEvent : CNObservableEvent



-(BOOL)hasValue;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)eventType;
-(id)error;
-(id)value;
-(void)dematerializeWithObserver:(id)arg0 ;


@end


#endif