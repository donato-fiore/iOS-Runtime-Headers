// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _EFCONTENTPROTECTIONOBSERVERWRAPPER_H
#define _EFCONTENTPROTECTIONOBSERVERWRAPPER_H

@protocol EFContentProtectionObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _EFContentProtectionObserverWrapper : NSObject

@property (readonly, weak, nonatomic) NSObject<EFContentProtectionObserver> *observer; // ivar: _observer
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(id)initWithObserver:(id)arg0 queue:(id)arg1 ;


@end


#endif