// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBHSELECTEDAPPLICATIONDATASOURCE_H
#define SBHSELECTEDAPPLICATIONDATASOURCE_H

@class NSMutableSet, NSMutableDictionary, NSHashTable, NSMapTable, NSString, LSApplicationWorkspace;
@protocol LSApplicationWorkspaceObserverProtocol, SBHIconModelApplicationDataSource, BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface SBHSelectedApplicationDataSource : NSObject <LSApplicationWorkspaceObserverProtocol, SBHIconModelApplicationDataSource, BSDescriptionProviding>

 {
    NSMutableSet *_trackedApplicationBundleIdentifiers;
    NSMutableDictionary *_applications;
    NSMutableDictionary *_applicationPlaceholders;
    NSHashTable *_observers;
    NSMapTable *_installProgressBundleIdentifiers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) LSApplicationWorkspace *workspace; // ivar: _workspace


+(id)keyPathsForObservingInstallProgress;
-(id)allApplicationPlaceholdersForIconModel:(id)arg0 ;
-(id)allApplicationsForIconModel:(id)arg0 ;
-(id)applicationPlaceholderWithBundleIdentifier:(id)arg0 ;
-(id)applicationWithBundleIdentifier:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)iconModel:(id)arg0 applicationWithBundleIdentifier:(id)arg1 ;
-(id)init;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)addApplicationsForBundleIdentifiers:(id)arg0 forcePlaceholders:(BOOL)arg1 ;
-(void)addIconModelApplicationDataSourceObserver:(id)arg0 ;
-(void)applicationInstallsDidChange:(id)arg0 ;
-(void)applicationInstallsDidStart:(id)arg0 ;
-(void)applicationsDidInstall:(id)arg0 ;
-(void)applicationsDidUninstall:(id)arg0 ;
-(void)beginObservingInstallProgress:(id)arg0 ;
-(void)beginTrackingApplicationsWithBundleIdentifiers:(id)arg0 ;
-(void)dealloc;
-(void)endObservingInstallProgress:(id)arg0 ;
-(void)endTrackingAllApplications;
-(void)endTrackingApplicationsWithBundleIdentifiers:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)removeApplicationsForBundleIdentifiers:(id)arg0 ;
-(void)removeIconModelApplicationDataSourceObserver:(id)arg0 ;
-(void)uninstallApplicationWithBundleIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)uninstallApplicationWithBundleIdentifier:(id)arg0 options:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)updateStateOfPlaceholder:(id)arg0 fromProgress:(id)arg1 ;
-(void)updateStateOfPlaceholder:(id)arg0 withInstallState:(NSUInteger)arg1 installPhase:(NSUInteger)arg2 installProgress:(CGFloat)arg3 ;


@end


#endif