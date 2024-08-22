// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CCSMODULEREPOSITORY_H
#define CCSMODULEREPOSITORY_H

@class NSArray, NSSet, NSDictionary, NSHashTable, NSString;
@protocol LSApplicationWorkspaceObserverProtocol, BSDefaultObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CCSModuleRepository : NSObject <LSApplicationWorkspaceObserverProtocol>

 {
    NSArray *_directoryURLs;
    NSSet *_allowedModuleIdentifiers;
    NSDictionary *_allModuleMetadataByIdentifier;
    NSSet *_availableModuleIdentifiers;
    NSSet *_interestingBundleIdentifiers;
    *MGNotificationTokenStruct _mobileGestaltNotificationToken;
    NSHashTable *_observers;
    NSObject<BSDefaultObserver> *_internalDefaultsObserver;
    NSSet *_loadableModuleIdentifiers;
    BOOL _ignoreAllowedList;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callOutQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSSet *loadableModuleIdentifiers;
@property (readonly) Class superclass;


+(id)_defaultModuleDirectories;
+(id)_defaultModuleIdentifierAllowedList;
+(id)_deviceFamily;
+(id)repositoryWithDefaults;
+(void)initialize;
-(BOOL)_queue_arrayContainsInterestingApplicationProxy:(id)arg0 ;
-(BOOL)visibilityForModuleIdentifier:(id)arg0 ;
-(id)_initWithDirectoryURLs:(id)arg0 allowedModuleIdentifiers:(id)arg1 ;
-(id)_queue_associatedBundleIdentifiersForModuleMetadata:(id)arg0 ;
-(id)_queue_filterModuleMetadataByAssociatedBundleAvailability:(id)arg0 ;
-(id)_queue_filterModuleMetadataByGestalt:(id)arg0 ;
-(id)_queue_filterModuleMetadataByVisibilityPreference:(id)arg0 ;
-(id)_queue_gestaltQuestionsForModuleMetadata:(id)arg0 ;
-(id)_queue_loadAllModuleMetadata;
-(id)_queue_moduleIdentifiersForMetadata:(id)arg0 ;
-(id)moduleMetadataForModuleIdentifier:(id)arg0 ;
-(void)_applicationsDidChange:(id)arg0 ;
-(void)_queue_registerForInternalPreferenceChanges;
-(void)_queue_registerForVisiblityPreferenceChanges;
-(void)_queue_runBlockOnObservers:(id)arg0 ;
-(void)_queue_setIgnoreAllowedList:(BOOL)arg0 ;
-(void)_queue_startObservingMobileGestaltQuestions:(id)arg0 withChangeHandler:(id)arg1 ;
-(void)_queue_stopObservingGestaltQuestions;
-(void)_queue_unregisterForInternalPreferenceChanges;
-(void)_queue_unregisterForVisiblityPreferenceChanges;
-(void)_queue_updateAllModuleMetadata;
-(void)_queue_updateAllModuleMetadataForAllModuleMetadata:(id)arg0 ;
-(void)_queue_updateAvailableModuleMetadata;
-(void)_queue_updateAvailableModuleMetadataForAllModuleMetadata:(id)arg0 ;
-(void)_queue_updateGestaltQuestionsForModuleMetadata:(id)arg0 ;
-(void)_queue_updateInterestingBundleIdentifiersForModuleMetadata:(id)arg0 ;
-(void)_queue_updateLoadableModuleMetadata;
-(void)_queue_updateLoadableModuleMetadataForAvailableModuleMetadata:(id)arg0 ;
-(void)_updateAvailableModuleMetadata;
-(void)addObserver:(id)arg0 ;
-(void)applicationStateDidChange:(id)arg0 ;
-(void)applicationsDidInstall:(id)arg0 ;
-(void)applicationsDidUninstall:(id)arg0 ;
-(void)invalidate;
-(void)removeObserver:(id)arg0 ;
-(void)setVisibility:(BOOL)arg0 forModuleIdentifier:(id)arg1 ;


@end


#endif