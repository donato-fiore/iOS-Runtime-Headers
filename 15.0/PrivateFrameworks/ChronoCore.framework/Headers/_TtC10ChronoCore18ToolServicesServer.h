// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC10CHRONOCORE18TOOLSERVICESSERVER_H
#define _TTC10CHRONOCORE18TOOLSERVICESSERVER_H


#import <Foundation/Foundation.h>


@interface _TtC10ChronoCore18ToolServicesServer : NSObject {
    ? timelineService;
    ? taskService;
    ? extensionService;
    ? descriptorService;
    ? stateCaptureService;
    ? configurationService;
    ? timelineCacheManager;
    ? placeholderCacheManager;
    ? snapshotCacheManager;
    ? keybagStateProvider;
    ? subscriptions;
    ? connectionListener;
    ? clientConnections;
    ? queue;
}




-(id)init;


@end


#endif