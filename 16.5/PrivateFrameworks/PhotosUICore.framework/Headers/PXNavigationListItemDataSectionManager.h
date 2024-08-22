// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXNAVIGATIONLISTITEMDATASECTIONMANAGER_H
#define PXNAVIGATIONLISTITEMDATASECTIONMANAGER_H

@class NSDate, NSPredicate, PHCollection, NSString, PHFetchResult, NSOperationQueue;
@protocol PXCollectionFetchOperationDelegate, PXPhotoLibraryUIChangeObserver, PXChangeObserver, PXDataSectionManagerEnabling, PXNavigationListItem;


#import "PXDataSectionManager.h"
#import "PXDataSectionEnablementForwarder.h"
#import "PXLibraryFilterState.h"
#import "PXContentPrivacyController.h"

@interface PXNavigationListItemDataSectionManager : PXDataSectionManager <PXCollectionFetchOperationDelegate, PXPhotoLibraryUIChangeObserver, PXChangeObserver, PXDataSectionManagerEnabling>

 {
    NSDate *_lastDuplicatesProcessingCheckDate;
}


@property (readonly, nonatomic) NSPredicate *assetsFilterPredicate; // ivar: _assetsFilterPredicate
@property (readonly, nonatomic) PHCollection *collection; // ivar: _collection
@property (readonly, nonatomic, getter=isCollectionEmpty) BOOL collectionEmpty;
@property (readonly, nonatomic, getter=isCollectionVisible) BOOL collectionVisible;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (retain, nonatomic) PXDataSectionEnablementForwarder *enablementForwarder; // ivar: _enablementForwarder
@property (retain, nonatomic) PHFetchResult *fetchResult; // ivar: _fetchResult
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHiddenWhenEmpty) BOOL hiddenWhenEmpty; // ivar: _hiddenWhenEmpty
@property (nonatomic) BOOL isInitialDuplicateDetectorProcessingCompleted; // ivar: _isInitialDuplicateDetectorProcessingCompleted
@property (readonly, nonatomic) PXLibraryFilterState *libraryFilterState; // ivar: _libraryFilterState
@property (readonly, nonatomic) NSObject<PXNavigationListItem> *listItem; // ivar: _listItem
@property (nonatomic) NSUInteger lockState; // ivar: _lockState
@property (readonly, nonatomic) PXContentPrivacyController *privacyController; // ivar: _privacyController
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSOperationQueue *workQueue; // ivar: _workQueue


+(NSUInteger)lockStateFromPrivacyController:(id)arg0 ;
-(BOOL)allowsEmptyDataSection;
-(BOOL)shouldInvalidateDataSectionForChildDataSectionManager:(id)arg0 changeDescriptor:(NSUInteger)arg1 ;
-(id)createDataSection;
-(id)initWithChildDataSectionManagers:(id)arg0 ;
-(id)initWithCollection:(id)arg0 workQueue:(id)arg1 additionalAssetsFilterPredicate:(id)arg2 ;
-(id)initWithItem:(id)arg0 ;
-(void)collectionFetchOperationDidComplete:(id)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg0 ;
-(void)updateDataSectionIfNecessary;


@end


#endif