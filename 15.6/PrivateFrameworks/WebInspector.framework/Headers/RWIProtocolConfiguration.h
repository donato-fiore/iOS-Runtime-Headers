// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RWIPROTOCOLCONFIGURATION_H
#define RWIPROTOCOLCONFIGURATION_H

@protocol RWIProtocolCSSDomainHandler, RWIProtocolDOMDomainHandler, RWIProtocolDOMStorageDomainHandler, RWIProtocolNetworkDomainHandler, RWIProtocolPageDomainHandler;

#import <Foundation/Foundation.h>

#import "RWIProtocolConsoleDomainEventDispatcher.h"
#import "RWIProtocolCSSDomainEventDispatcher.h"
#import "RWIProtocolDOMDomainEventDispatcher.h"
#import "RWIProtocolDOMStorageDomainEventDispatcher.h"
#import "RWIProtocolNetworkDomainEventDispatcher.h"
#import "RWIProtocolPageDomainEventDispatcher.h"

@interface RWIProtocolConfiguration : NSObject {
    *AugmentableInspectorController _controller;
    RetainPtr<id<RWIProtocolCSSDomainHandler>> _cssHandler;
    RetainPtr<RWIProtocolCSSDomainEventDispatcher> _cssEventDispatcher;
    RetainPtr<RWIProtocolConsoleDomainEventDispatcher> _consoleEventDispatcher;
    RetainPtr<id<RWIProtocolDOMDomainHandler>> _domHandler;
    RetainPtr<RWIProtocolDOMDomainEventDispatcher> _domEventDispatcher;
    RetainPtr<id<RWIProtocolDOMStorageDomainHandler>> _domStorageHandler;
    RetainPtr<RWIProtocolDOMStorageDomainEventDispatcher> _domStorageEventDispatcher;
    RetainPtr<id<RWIProtocolNetworkDomainHandler>> _networkHandler;
    RetainPtr<RWIProtocolNetworkDomainEventDispatcher> _networkEventDispatcher;
    RetainPtr<id<RWIProtocolPageDomainHandler>> _pageHandler;
    RetainPtr<RWIProtocolPageDomainEventDispatcher> _pageEventDispatcher;
}


@property (readonly, nonatomic) RWIProtocolConsoleDomainEventDispatcher *consoleEventDispatcher;
@property (readonly, nonatomic) RWIProtocolCSSDomainEventDispatcher *cssEventDispatcher;
@property (retain, nonatomic, setter=setCSSHandler:) NSObject<RWIProtocolCSSDomainHandler> *cssHandler;
@property (readonly, nonatomic) RWIProtocolDOMDomainEventDispatcher *domEventDispatcher;
@property (retain, nonatomic, setter=setDOMHandler:) NSObject<RWIProtocolDOMDomainHandler> *domHandler;
@property (readonly, nonatomic) RWIProtocolDOMStorageDomainEventDispatcher *domStorageEventDispatcher;
@property (retain, nonatomic, setter=setDOMStorageHandler:) NSObject<RWIProtocolDOMStorageDomainHandler> *domStorageHandler;
@property (readonly, nonatomic) RWIProtocolNetworkDomainEventDispatcher *networkEventDispatcher;
@property (retain, nonatomic, setter=setNetworkHandler:) NSObject<RWIProtocolNetworkDomainHandler> *networkHandler;
@property (readonly, nonatomic) RWIProtocolPageDomainEventDispatcher *pageEventDispatcher;
@property (retain, nonatomic, setter=setPageHandler:) NSObject<RWIProtocolPageDomainHandler> *pageHandler;


-(id)initWithController:(struct AugmentableInspectorController *)arg0 ;


@end


#endif