// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXNAVIGATIONLISTITEMDATASECTIONMANAGER_H
#define PXNAVIGATIONLISTITEMDATASECTIONMANAGER_H

@class PHCollection, NSString, PHFetchResult, NSOperationQueue;
@protocol PXCollectionFetchOperationDelegate, PXPhotoLibraryUIChangeObserver, PXDataSectionManagerEnabling, PXNavigationListItem;


#import "PXDataSectionManager.h"
#import "PXDataSectionEnablementForwarder.h"

@interface PXNavigationListItemDataSectionManager : PXDataSectionManager <PXCollectionFetchOperationDelegate, PXPhotoLibraryUIChangeObserver, PXDataSectionManagerEnabling>



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
@property (readonly, nonatomic) NSObject<PXNavigationListItem> *listItem; // ivar: _listItem
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSOperationQueue *workQueue; // ivar: _workQueue


-(BOOL)allowsEmptyDataSection;
-(id)createDataSection;
-(id)initWithChildDataSectionManagers:(id)arg0 ;
-(id)initWithCollection:(id)arg0 workQueue:(id)arg1 ;
-(id)initWithItem:(id)arg0 ;
-(void)collectionFetchOperationDidComplete:(id)arg0 ;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg0 ;
-(void)updateDataSectionIfNecessary;


@end


#endif