// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HDCONTENTPROTECTIONOBSERVERWRAPPER_H
#define _HDCONTENTPROTECTIONOBSERVERWRAPPER_H

@protocol HDContentProtectionObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _HDContentProtectionObserverWrapper : NSObject {
    id<HDContentProtectionObserver> *_observer;
    NSObject<OS_dispatch_queue> *_queue;
}




-(id)init;


@end


#endif