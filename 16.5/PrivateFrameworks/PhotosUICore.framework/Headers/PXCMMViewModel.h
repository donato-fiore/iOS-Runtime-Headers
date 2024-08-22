// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXCMMVIEWMODEL_H
#define PXCMMVIEWMODEL_H

@class NSString, NSSet, NSDate, NSArray, NSURL;
@protocol PXMediaTypeAggregating, PXChangeObserver, PXCMMMutableViewModel, PXDisplayAsset, PXUIImageProvider;


#import "PXObservable.h"
#import "PXRecipient.h"
#import "PXSectionedSelectionManager.h"

@interface PXCMMViewModel : PXObservable <PXMediaTypeAggregating, PXChangeObserver, PXCMMMutableViewModel>



@property (readonly, nonatomic) NSInteger aggregateMediaType;
@property (readonly, nonatomic) NSInteger aggregateMediaTypeForSelection;
@property (readonly, nonatomic) BOOL containsUnverifiedPersons; // ivar: _containsUnverifiedPersons
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSSet *disabledActionTypes; // ivar: _disabledActionTypes
@property (readonly, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isLoadingPeopleSuggestions) BOOL loadingPeopleSuggestions; // ivar: _loadingPeopleSuggestions
@property (readonly, nonatomic) NSUInteger numberOfReceivedAssets; // ivar: _numberOfReceivedAssets
@property (readonly, copy, nonatomic) NSString *originalTitle; // ivar: _originalTitle
@property (readonly, copy, nonatomic) PXRecipient *originatorRecipient; // ivar: _originatorRecipient
@property (readonly, nonatomic) NSInteger photosCount; // ivar: _photosCount
@property (readonly, nonatomic) NSObject<PXDisplayAsset> *posterAsset; // ivar: _posterAsset
@property (readonly, nonatomic) NSObject<PXUIImageProvider> *posterMediaProvider; // ivar: _posterMediaProvider
@property (readonly, copy, nonatomic) NSArray *recipients; // ivar: _recipients
@property (readonly, nonatomic) NSInteger selectedCount; // ivar: _selectedCount
@property (readonly, nonatomic) NSInteger selectedPhotosCount; // ivar: _selectedPhotosCount
@property (readonly, nonatomic) NSInteger selectedVideosCount; // ivar: _selectedVideosCount
@property (readonly, nonatomic, getter=isSelecting) BOOL selecting; // ivar: _selecting
@property (readonly, nonatomic) BOOL selectionEnabled; // ivar: _selectionEnabled
@property (readonly, nonatomic) PXSectionedSelectionManager *selectionManager; // ivar: _selectionManager
@property (readonly, copy, nonatomic) NSURL *shareURL; // ivar: _shareURL
@property (readonly, copy, nonatomic) NSString *shareUUID; // ivar: _shareUUID
@property (readonly, nonatomic) BOOL shouldShowPlaceholder; // ivar: _shouldShowPlaceholder
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly, copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSInteger totalCount; // ivar: _totalCount
@property (readonly, nonatomic) NSInteger videosCount; // ivar: _videosCount


-(id)mutableChangeObject;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)performChanges:(id)arg0 ;


@end


#endif