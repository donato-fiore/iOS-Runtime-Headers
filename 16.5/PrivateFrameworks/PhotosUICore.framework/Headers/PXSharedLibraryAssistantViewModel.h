// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSHAREDLIBRARYASSISTANTVIEWMODEL_H
#define PXSHAREDLIBRARYASSISTANTVIEWMODEL_H

@class NSArray, NSString, UIImage, NSDate;
@protocol PXSectionedDataSourceManagerObserver, PXSharedLibrary, PXSharedLibrarySourceLibraryInfo;


#import "PXObservable.h"
#import "PXSharedLibraryParticipantDataSource.h"
#import "PXSharedLibraryParticipantDataSourceManager.h"
#import "PXSharedLibraryRule.h"

@interface PXSharedLibraryAssistantViewModel : PXObservable <PXSectionedDataSourceManagerObserver>

 {
    BOOL _performingInitialChanges;
    ? _cachedShareCounts;
    id *_shareCountsCompletionHandler;
}


@property (readonly, nonatomic) NSArray *assetLocalIdentifiers; // ivar: _assetLocalIdentifiers
@property (readonly, nonatomic) BOOL autoShareEnabled; // ivar: _autoShareEnabled
@property (readonly, nonatomic) NSInteger autoSharePolicy; // ivar: _autoSharePolicy
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSArray *emailAddresses;
@property (readonly, nonatomic) BOOL hasChangedUserInputValues; // ivar: _hasChangedUserInputValues
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *infosWithBothPeopleAndParticipants; // ivar: _infosWithBothPeopleAndParticipants
@property (readonly, nonatomic) BOOL isCancelingAssistant; // ivar: _isCancelingAssistant
@property (readonly, nonatomic) NSString *localizedParticipantList;
@property (readonly, nonatomic) NSInteger mode; // ivar: _mode
@property (readonly, nonatomic) PXSharedLibraryParticipantDataSource *participantDataSource;
@property (readonly, nonatomic) PXSharedLibraryParticipantDataSourceManager *participantDataSourceManager; // ivar: _participantDataSourceManager
@property (readonly, copy, nonatomic) UIImage *participantsImage; // ivar: _participantsImage
@property (readonly, copy, nonatomic) NSArray *personUUIDs; // ivar: _personUUIDs
@property (readonly, copy, nonatomic) NSArray *phoneNumbers;
@property (readonly, nonatomic) BOOL previewIsOutdated; // ivar: _previewIsOutdated
@property (readonly, nonatomic) NSInteger selectedRuleType; // ivar: _selectedRuleType
@property (readonly, nonatomic) ? shareCounts;
@property (readonly, nonatomic) NSObject<PXSharedLibrary> *sharedLibrary; // ivar: _sharedLibrary
@property (readonly, nonatomic) PXSharedLibraryRule *sharedLibraryRule;
@property (nonatomic) NSInteger shouldShowPeopleState; // ivar: _shouldShowPeopleState
@property (readonly, nonatomic) NSObject<PXSharedLibrarySourceLibraryInfo> *sourceLibraryInfo; // ivar: _sourceLibraryInfo
@property (readonly, copy, nonatomic) NSDate *startDate; // ivar: _startDate
@property (retain, nonatomic) NSDate *suggestedStartDate; // ivar: _suggestedStartDate
@property (readonly) Class superclass;


+(NSUInteger)shareCountChangeDescriptors;
-(id)init;
-(id)localizedSelectedPeopleWithAdditionalPeopleCount:(*NSInteger)arg0 ;
-(void)_didChangePreviewRelatedProperty;
-(void)_didChangeShareCountRelatedProperty;
-(void)_didChangeSuggestedStartDateRelatedProperty;
-(void)_recalculateCustomShareCountsWithCompletion:(id)arg0 ;
-(void)_recalculateEverythingShareCountsWithCompletion:(id)arg0 ;
-(void)_recalculateManualSelectionShareCountsWithCompletion:(id)arg0 ;
-(void)_recalculateShareCountsIfNeeded;
-(void)_recalculateSuggestedStartDateIfNeeded;
-(void)_setCachedShareCounts:(struct ? )arg0 ;
-(void)didPerformChanges;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)performChanges:(id)arg0 ;
// -(void)performChanges:(id)arg0 shareCountsCompletionHandler:(unk)arg1  ;
-(void)performInitialChanges:(id)arg0 ;


@end


#endif