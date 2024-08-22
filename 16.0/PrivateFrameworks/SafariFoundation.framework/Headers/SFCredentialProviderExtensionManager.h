// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFCREDENTIALPROVIDEREXTENSIONMANAGER_H
#define SFCREDENTIALPROVIDEREXTENSIONMANAGER_H

@class NSSet, NSMutableOrderedSet, NSExtension;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SFCredentialProviderExtensionManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    id *_extensionMatchingToken;
    NSSet *_extensions;
    NSMutableOrderedSet *_observers;
    BOOL _errorEncounteredDuringLastExtensionDiscovery;
    os_unfair_recursive_lock_s _observerLock;
}


@property (readonly, nonatomic) NSSet *extensions;
@property (readonly, nonatomic) NSSet *extensionsSync;
@property (readonly, nonatomic) NSExtension *primaryExtension;
@property (readonly, nonatomic) NSExtension *primaryExtensionSync;


+(id)sharedManager;
-(BOOL)extensionIsEnabled:(id)arg0 ;
-(BOOL)shouldShowConfigurationUIForEnablingExtension:(id)arg0 ;
-(id)displayNameForExtension:(id)arg0 ;
-(id)init;
-(void)_beginExtensionDiscovery;
-(void)_endExtensionDiscovery;
-(void)_notifyObservers:(id)arg0 ;
-(void)_updateExtensions:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)getPrimaryExtensionWithCompletion:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)setExtension:(id)arg0 isEnabled:(BOOL)arg1 ;


@end


#endif