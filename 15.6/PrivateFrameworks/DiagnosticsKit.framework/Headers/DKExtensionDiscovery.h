// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DKEXTENSIONDISCOVERY_H
#define DKEXTENSIONDISCOVERY_H

@class NSString, NSCondition, NSSet;
@protocol OS_dispatch_queue, DKExtensionRegistry;

#import <Foundation/Foundation.h>


@interface DKExtensionDiscovery : NSObject

@property (retain, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (nonatomic) BOOL discoveryComplete; // ivar: _discoveryComplete
@property (retain, nonatomic) NSCondition *discoveryLock; // ivar: _discoveryLock
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *discoveryQueue; // ivar: _discoveryQueue
@property (retain, nonatomic) NSObject<DKExtensionRegistry> *registry; // ivar: _registry
@property (retain, nonatomic) NSSet *services; // ivar: _services


+(id)discoveryUsingExtensionRegistry:(id)arg0 services:(id)arg1 bundleIdentifier:(id)arg2 ;
-(id)initWithExtensionRegistry:(id)arg0 services:(id)arg1 bundleIdentifier:(id)arg2 ;
-(void)_beginExtensionDiscovery;
-(void)_registerExtensions:(id)arg0 error:(id)arg1 ;
-(void)waitUntilComplete;


@end


#endif