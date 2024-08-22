// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRIANALYTICSSENSITIVECONDITIONSOBSERVERS_H
#define SIRIANALYTICSSENSITIVECONDITIONSOBSERVERS_H

@class NSMutableSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SiriAnalyticsSensitiveConditionsObservers : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_observers;
}




-(id)initWithQueue:(id)arg0 ;
-(void)addSensitiveConditionsObserver:(id)arg0 ;
-(void)pollAllObserversWithCompletion:(id)arg0 ;


@end


#endif