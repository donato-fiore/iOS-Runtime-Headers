// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC9CHRONOKIT16EXTENSIONMANAGER_H
#define _TTC9CHRONOKIT16EXTENSIONMANAGER_H

@protocol LSApplicationWorkspaceObserverProtocol;

#import <Foundation/Foundation.h>


@interface _TtC9ChronoKit16ExtensionManager : NSObject <LSApplicationWorkspaceObserverProtocol>

 {
    ? _extensionsPublisher;
    ? _addedPublisher;
    ? _updatedPublisher;
    ? _removedPublisher;
    ? extensionsByIdentifier;
    ? removedPluginUUIDsByIdentifier;
    ? queue;
    ? lookupLock;
    ? lock;
    ? nsExtensionDiscovererSubscription;
    ? nsExtensionDiscoverer;
    ? applicationWorkspace;
    ? extensionFactory;
}




-(id)init;
-(void)dealloc;
-(void)pluginsDidUninstall:(id)arg0 ;


@end


#endif