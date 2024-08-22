// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC10CHRONOCORE20CHRONOSERVICESSERVER_H
#define _TTC10CHRONOCORE20CHRONOSERVICESSERVER_H


#import <Foundation/Foundation.h>


@interface _TtC10ChronoCore20ChronoServicesServer : NSObject {
    ? timelineService;
    ? taskService;
    ? descriptorService;
    ? extensionService;
    ? configurationService;
    ? keybagStateProvider;
    ? powerlogSuggestionService;
    ? duetService;
    ? connectionListener;
    ? subscriptions;
    ? queue;
    ? _clientsSetLock_clients;
    ? _clientsSetLock;
    ? initialExtensionDiscoveryCompleteSubscription;
}




-(id)init;
-(void)dealloc;


@end


#endif