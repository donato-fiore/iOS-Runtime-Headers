// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NRMUTABLESTATEBASEOBSERVERWRAPPER_H
#define NRMUTABLESTATEBASEOBSERVERWRAPPER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NRMutableStateBaseObserverWrapper : NSObject {
    id *_observer;
    NSObject<OS_dispatch_queue> *_queue;
}






@end


#endif