// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBHAPPLICATIONDATASOURCE_H
#define SBHAPPLICATIONDATASOURCE_H

@class NSMutableDictionary, NSHashTable, FBSALOToken, FBSApplicationLibrary, NSString;
@protocol SBHIconModelApplicationDataSource;

#import <Foundation/Foundation.h>


@interface SBHApplicationDataSource : NSObject <SBHIconModelApplicationDataSource>

 {
    NSMutableDictionary *_applications;
    NSMutableDictionary *_applicationPlaceholders;
    NSHashTable *_observers;
}


@property (readonly, nonatomic) FBSALOToken *addApplicationsObservationToken; // ivar: _addApplicationsObservationToken
@property (readonly, nonatomic) FBSALOToken *addPlaceholdersObservationToken; // ivar: _addPlaceholdersObservationToken
@property (readonly, nonatomic) FBSApplicationLibrary *appLibrary; // ivar: _appLibrary
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) FBSALOToken *demoteApplicationsObservationToken; // ivar: _demoteApplicationsObservationToken
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) FBSALOToken *removeApplicationsObservationToken; // ivar: _removeApplicationsObservationToken
@property (readonly, nonatomic) FBSALOToken *removedPlaceholdersObservationToken; // ivar: _removedPlaceholdersObservationToken
@property (readonly, nonatomic) FBSALOToken *replaceApplicationsObservationToken; // ivar: _replaceApplicationsObservationToken
@property (readonly) Class superclass;
@property (readonly, nonatomic) FBSALOToken *updateApplicationsObservationToken; // ivar: _updateApplicationsObservationToken


-(id)allApplicationPlaceholdersForIconModel:(id)arg0 ;
-(id)allApplicationsForIconModel:(id)arg0 ;
-(id)applicationPlaceholderWithBundleIdentifier:(id)arg0 ;
-(id)applicationPlaceholdersForFrontBoardPlaceholders:(id)arg0 ;
-(id)applicationWithBundleIdentifier:(id)arg0 ;
-(id)applicationsForApplicationsInfo:(id)arg0 ;
-(id)iconModel:(id)arg0 applicationWithBundleIdentifier:(id)arg1 ;
-(id)init;
-(id)initWithOptions:(NSUInteger)arg0 ;
-(void)_didAddApplicationsInfo:(id)arg0 ;
-(void)_didAddPlaceholders:(id)arg0 ;
-(void)_didRemoveApplicationsInfo:(id)arg0 ;
-(void)_didRemovePlaceholders:(id)arg0 ;
-(void)_didReplaceApplicationsInfo:(id)arg0 ;
-(void)addIconModelApplicationDataSourceObserver:(id)arg0 ;
-(void)dealloc;
-(void)removeIconModelApplicationDataSourceObserver:(id)arg0 ;
-(void)uninstallApplicationWithBundleIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)uninstallApplicationWithBundleIdentifier:(id)arg0 options:(NSUInteger)arg1 completion:(id)arg2 ;


@end


#endif