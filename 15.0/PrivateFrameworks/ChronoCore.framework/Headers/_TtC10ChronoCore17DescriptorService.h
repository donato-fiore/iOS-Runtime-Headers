// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC10CHRONOCORE17DESCRIPTORSERVICE_H
#define _TTC10CHRONOCORE17DESCRIPTORSERVICE_H


#import <Foundation/Foundation.h>


@interface _TtC10ChronoCore17DescriptorService : NSObject {
    ? _descriptorPublisher;
    ? descriptorProvider;
    ? extensionManager;
    ? preferences;
    ? descriptorCache;
    ? configurationService;
    ? taskService;
    ? persistentSubscriptions;
    ? queue;
    ? _queue_currentExtensionsAndCompletionsBeingFetched;
    ? _queue_tasks;
    ? _queue_extensionEvents;
    ? _queue_readyDataSources;
    ? queryTimerInterval;
    ? queryTimerLeeway;
    ? _queue_queryTimer;
}




-(id)init;
-(void)dealloc;


@end


#endif