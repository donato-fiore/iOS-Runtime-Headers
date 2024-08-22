// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBHSELECTEDAPPLICATIONDATASOURCE_H
#define SBHSELECTEDAPPLICATIONDATASOURCE_H

@class NSMutableSet, NSMutableDictionary, NSHashTable, NSString;
@protocol SBHIconModelApplicationDataSource, BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface SBHSelectedApplicationDataSource : NSObject <SBHIconModelApplicationDataSource, BSDescriptionProviding>

 {
    NSMutableSet *_trackedApplicationBundleIdentifiers;
    NSMutableDictionary *_applications;
    NSMutableDictionary *_applicationPlaceholders;
    NSHashTable *_observers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


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
-(void)_noteApplicationRegistered:(id)arg0 ;
-(void)_noteApplicationUnregistered:(id)arg0 ;
-(void)addApplicationsForBundleIdentifiers:(id)arg0 forcePlaceholders:(BOOL)arg1 ;
-(void)addIconModelApplicationDataSourceObserver:(id)arg0 ;
-(void)beginTrackingApplicationsWithBundleIdentifiers:(id)arg0 ;
-(void)endTrackingAllApplications;
-(void)endTrackingApplicationsWithBundleIdentifiers:(id)arg0 ;
-(void)removeApplicationsForBundleIdentifiers:(id)arg0 ;
-(void)removeIconModelApplicationDataSourceObserver:(id)arg0 ;
-(void)uninstallApplicationWithBundleIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)uninstallApplicationWithBundleIdentifier:(id)arg0 options:(NSUInteger)arg1 completion:(id)arg2 ;


@end


#endif