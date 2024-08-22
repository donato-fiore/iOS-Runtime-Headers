// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUSIDEBARDATASECTIONENABLEMENTCONTROLLER_H
#define PUSIDEBARDATASECTIONENABLEMENTCONTROLLER_H

@class NSString, PHPhotoLibrary, NSMapTable;
@protocol PXPreferencesObserver, PXSidebarDataSectionEnablement;

#import <Foundation/Foundation.h>


@interface PUSidebarDataSectionEnablementController : NSObject <PXPreferencesObserver, PXSidebarDataSectionEnablement>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (nonatomic) BOOL registeredAsPrefObserver; // ivar: _registeredAsPrefObserver
@property (readonly, nonatomic) NSMapTable *sectionManagerByItemTypeForAccountStoreChange; // ivar: _sectionManagerByItemTypeForAccountStoreChange
@property (readonly, nonatomic) NSMapTable *sectionManagersByItemTypeForDefaultsChange; // ivar: _sectionManagersByItemTypeForDefaultsChange
@property (readonly) Class superclass;


-(id)initWithPhotoLibrary:(id)arg0 ;
-(void)_accountStoreDidChange:(id)arg0 ;
-(void)_configureEnablementOfSectionManager:(id)arg0 enablementItem:(NSInteger)arg1 setupObservation:(BOOL)arg2 ;
-(void)_observeAccountsStoreForManager:(id)arg0 enablementItem:(NSInteger)arg1 ;
-(void)_observeDefaultsForManager:(id)arg0 enablementItem:(NSInteger)arg1 ;
-(void)configureEnablementOfSectionManager:(id)arg0 enablementItem:(NSInteger)arg1 ;
-(void)dealloc;
-(void)preferencesDidChange;


@end


#endif