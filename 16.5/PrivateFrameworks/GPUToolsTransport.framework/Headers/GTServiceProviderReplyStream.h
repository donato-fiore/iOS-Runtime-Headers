// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GTSERVICEPROVIDERREPLYSTREAM_H
#define GTSERVICEPROVIDERREPLYSTREAM_H

@protocol GTServiceProviderObserverXPCDispatcher, GTServiceProviderObserver;


#import "GTXPCDispatcher.h"

@interface GTServiceProviderReplyStream : GTXPCDispatcher <GTServiceProviderObserverXPCDispatcher>

 {
    id<GTServiceProviderObserver> *_observer;
}




-(id)initWithObserver:(id)arg0 ;
-(void)notifyServiceListChanged_:(id)arg0 replyConnection:(id)arg1 ;


@end


#endif