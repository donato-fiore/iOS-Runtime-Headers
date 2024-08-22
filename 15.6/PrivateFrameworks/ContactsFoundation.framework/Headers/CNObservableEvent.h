// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNOBSERVABLEEVENT_H
#define CNOBSERVABLEEVENT_H

@class NSError;

#import <Foundation/Foundation.h>


@interface CNObservableEvent : NSObject

@property (readonly, copy, nonatomic) NSError *error;
@property (readonly, nonatomic) NSUInteger eventType;
@property (readonly, nonatomic) BOOL hasValue;
@property (readonly, nonatomic) id *value;


+(id)completionEvent;
+(id)eventWithResult:(id)arg0 ;
+(id)failureEventWithError:(id)arg0 ;
-(void)dematerializeWithObserver:(id)arg0 ;


@end


#endif