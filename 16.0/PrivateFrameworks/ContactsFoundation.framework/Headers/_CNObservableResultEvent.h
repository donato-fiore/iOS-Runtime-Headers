// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CNOBSERVABLERESULTEVENT_H
#define _CNOBSERVABLERESULTEVENT_H



#import "CNObservableEvent.h"

@interface _CNObservableResultEvent : CNObservableEvent {
    id *_result;
}




-(BOOL)hasValue;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)eventType;
-(NSUInteger)hash;
-(id)description;
-(id)error;
-(id)initWithResult:(id)arg0 ;
-(id)value;
-(void)dematerializeWithObserver:(id)arg0 ;


@end


#endif