// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HKINTERACTIVECHARTWEAKOBSERVERWRAPPER_H
#define _HKINTERACTIVECHARTWEAKOBSERVERWRAPPER_H

@protocol HKInteractiveChartViewObserver;

#import <Foundation/Foundation.h>


@interface _HKInteractiveChartWeakObserverWrapper : NSObject

@property (readonly, weak, nonatomic) NSObject<HKInteractiveChartViewObserver> *observer; // ivar: _observer


-(id)initWithObserver:(id)arg0 ;


@end


#endif