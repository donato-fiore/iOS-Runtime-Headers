// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUSIDEBARDATASECTIONENABLEMENTCONTROLLER_H
#define PUSIDEBARDATASECTIONENABLEMENTCONTROLLER_H

@class NSString, PHPhotoLibrary, NSMapTable, PXSharedLibrarySidebarEnablementObserver;
@protocol PXPreferencesObserver, PXSidebarDataSectionEnablement, PXDataSectionManagerEnabling;

#import <Foundation/Foundation.h>


@interface PUSidebarDataSectionEnablementController : NSObject <PXPreferencesObserver, PXSidebarDataSectionEnablement>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL excludesHiddenAlbum; // ivar: _excludesHiddenAlbum
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isLimitedLibraryMode; // ivar: _isLimitedLibraryMode
@property (readonly, nonatomic) BOOL isPhotosPicker; // ivar: _isPhotosPicker
@property (readonly, weak, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (nonatomic) BOOL registeredAsPrefObserver; // ivar: _registeredAsPrefObserver
@property (nonatomic) BOOL registeredSharedLibraryEnablementObserver; // ivar: _registeredSharedLibraryEnablementObserver
@property (readonly, nonatomic) NSMapTable *sectionManagerByItemTypeForAccountStoreChange; // ivar: _sectionManagerByItemTypeForAccountStoreChange
@property (readonly, nonatomic) NSMapTable *sectionManagersByItemTypeForDefaultsChange; // ivar: _sectionManagersByItemTypeForDefaultsChange
@property (weak, nonatomic) NSObject<PXDataSectionManagerEnabling> *sharedLibraryDataSectionManager; // ivar: _sharedLibraryDataSectionManager
@property (readonly, nonatomic) PXSharedLibrarySidebarEnablementObserver *sharedLibrarySidebarEnablementObserver; // ivar: _sharedLibrarySidebarEnablementObserver
@property (readonly) Class superclass;


-(id)initWithPhotoLibrary:(id)arg0 isPhotosPicker:(BOOL)arg1 isLimitedLibraryMode:(BOOL)arg2 excludesHiddenAlbum:(BOOL)arg3 ;
-(void)_accountStoreDidChange:(id)arg0 ;
-(void)_configureEnablementOfSectionManager:(id)arg0 enablementItem:(NSInteger)arg1 setupObservation:(BOOL)arg2 ;
-(void)_observeAccountsStoreForManager:(id)arg0 enablementItem:(NSInteger)arg1 ;
-(void)_observeDefaultsForManager:(id)arg0 enablementItem:(NSInteger)arg1 ;
-(void)_updateSharedLibraryDataSectionManagerEnabledState;
-(void)configureEnablementOfSectionManager:(id)arg0 enablementItem:(NSInteger)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)preferencesDidChange;


@end


#endif