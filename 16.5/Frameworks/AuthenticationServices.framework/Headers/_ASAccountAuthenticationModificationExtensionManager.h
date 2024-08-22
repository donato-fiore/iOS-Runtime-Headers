// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _ASACCOUNTAUTHENTICATIONMODIFICATIONEXTENSIONMANAGER_H
#define _ASACCOUNTAUTHENTICATIONMODIFICATIONEXTENSIONMANAGER_H

@class NSDictionary, NSArray, NSMutableOrderedSet, NSUserDefaults;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _ASAccountAuthenticationModificationExtensionManager : NSObject {
    NSObject<OS_dispatch_queue> *_dataConstructionQueue;
    NSObject<OS_dispatch_queue> *_readOnlyQueue;
    id *_extensionMatchingToken;
    NSDictionary *_domainToExtension;
    NSArray *_extensions;
    NSMutableOrderedSet *_observers;
    BOOL _errorEncounteredDuringLastExtensionDiscovery;
    NSUserDefaults *_mobileSafariUserDefaults;
}




+(id)sharedManager;
-(id)init;
-(void)_beginExtensionDiscovery;
-(void)_buildDomainToExtensionDictionaryWithSharedWebCredentialsDatabaseEntries:(id)arg0 ;
-(void)_endExtensionDiscovery;
-(void)_notifyObservers:(id)arg0 ;
-(void)addChangeObserver:(id)arg0 ;
-(void)dealloc;
-(void)extensionForDomain:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeChangeObserver:(id)arg0 ;


@end


#endif