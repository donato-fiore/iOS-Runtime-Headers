// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HKSPOBSERVERRECORD_H
#define _HKSPOBSERVERRECORD_H

@protocol NAScheduler;

#import <Foundation/Foundation.h>


@interface _HKSPObserverRecord : NSObject

@property (readonly, nonatomic) NSObject<NAScheduler> *callbackScheduler; // ivar: _callbackScheduler
@property (readonly, weak, nonatomic) id *observer; // ivar: _observer


-(id)initWithObserver:(id)arg0 callbackScheduler:(id)arg1 ;


@end


#endif