// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBKDEVICEDIAGNOSTICSCONTROLLER_H
#define FBKDEVICEDIAGNOSTICSCONTROLLER_H

@class NSArray, NSMutableSet, NSMutableDictionary, DEDBugSession, NSSet, NSNumber, NSString;
@protocol FBKAttachmentManagerDelegate, FBKFilerArchiving, FBKDeviceDiagnosticsDelegate, FBKFilerForm;

#import <Foundation/Foundation.h>

#import "_TtC12FeedbackCore37FBKDeviceDiagnosticsControllerCombine.h"
#import "FBKAttachmentManager.h"
#import "FBKDeviceManager.h"

@interface FBKDeviceDiagnosticsController : NSObject <FBKAttachmentManagerDelegate, FBKFilerArchiving>



@property (retain, nonatomic) id *_filesBeingAttachedCount; // ivar: __filesBeingAttachedCount
@property (nonatomic) BOOL addedCurrentDeviceNeedsMatcherPredicateEvaluation; // ivar: _addedCurrentDeviceNeedsMatcherPredicateEvaluation
@property (retain, nonatomic) NSArray *attachmentCollections; // ivar: _attachmentCollections
@property (retain, nonatomic) NSMutableSet *attachmentsBeingAttached; // ivar: _attachmentsBeingAttached
@property (retain, nonatomic) NSMutableDictionary *cachedDiffableIdentifiersTable; // ivar: _cachedDiffableIdentifiersTable
@property (nonatomic, readonly) _TtC12FeedbackCore37FBKDeviceDiagnosticsControllerCombine *combine;
@property (nonatomic, readonly) FBKAttachmentManager *currentDeviceAttachmentManager;
@property (nonatomic, readonly) DEDBugSession *currentDeviceBugSession;
@property (nonatomic, readonly) NSSet *currentMatcherPredicates;
@property (readonly, nonatomic) NSSet *currentMatcherPredicates; // ivar: _currentMatcherPredicates
@property (retain, nonatomic) NSSet *deferredAttachmentCollections; // ivar: _deferredAttachmentCollections
@property (weak, nonatomic) NSObject<FBKDeviceDiagnosticsDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) id *deviceDiagnosticsCombineObject; // ivar: _deviceDiagnosticsCombineObject
@property (retain, nonatomic) FBKDeviceManager *deviceManager; // ivar: _deviceManager
@property (nonatomic, readonly) NSArray *devicesInPlay;
@property (retain, nonatomic) NSObject<FBKFilerForm> *filerForm; // ivar: _filerForm
@property (retain, nonatomic) NSNumber *filerFormID; // ivar: _filerFormID
@property (nonatomic) NSInteger filesBeingAttachedCount; // ivar: _filesBeingAttachedCount
@property (retain, nonatomic) id *filesBeingCopiedCount; // ivar: _filesBeingCopiedCount
@property (readonly, nonatomic) NSString *formPlatform; // ivar: _formPlatform
@property (nonatomic, readonly) BOOL hasAttachmentsForUpload;
@property (retain, nonatomic) NSSet *ignoredMatchers; // ivar: _ignoredMatchers
@property (retain, nonatomic) NSSet *previousMatcherPredicates; // ivar: _previousMatcherPredicates
@property (nonatomic) NSInteger removeDeviceMaxRetry; // ivar: _removeDeviceMaxRetry
@property (retain, nonatomic) NSSet *removedDevices; // ivar: _removedDevices
@property (nonatomic) NSInteger state; // ivar: _state


+(BOOL)device:(id)arg0 matchesAnyPredicate:(id)arg1 fromCollection:(id)arg2 formPlatform:(id)arg3 ;
+(id)currentDeviceAttachmentManagerWithDeviceAttachments:(id)arg0 ;
+(id)currentDeviceBiased_MatcherPredicatesForDevice:(id)arg0 withGivenMatchers:(id)arg1 ;
+(id)filteredMatcherPredicatesForMatchers:(id)arg0 ignoredMatcherPredicates:(id)arg1 ;
+(id)matchersForDevice:(id)arg0 withGivenMatchers:(id)arg1 canMatchVisibleDevices:(BOOL)arg2 fromCollection:(id)arg3 formPlatform:(id)arg4 ;
+(id)removeDuplicateMatcherPredicatesWithDevice:(id)arg0 matchers:(id)arg1 ;
-(BOOL)canCancelAttachmentCollection:(id)arg0 ;
-(BOOL)canDeleteAttachment:(id)arg0 ;
-(BOOL)canRemoveDevice:(id)arg0 ;
-(BOOL)deviceHasAnyAttachmentsWithDevice:(id)arg0 ;
-(BOOL)hasAnyAttachments;
-(BOOL)hasAttachmentsCollecting;
-(BOOL)hasFilePromises;
-(BOOL)hasUnmetRequirementAttachments;
-(BOOL)removeAttachment:(id)arg0 ;
-(id)additionalDeviceCandidates;
-(id)attachmentsForDevice:(id)arg0 ;
-(id)deviceDataForSubmission;
-(id)devicesMatching:(id)arg0 withConfiguredDevices:(id)arg1 ;
-(id)generateSectionIdentifierGroupsWithDeviceSectionPrefix:(id)arg0 deferredDeviceSectionPrefix:(id)arg1 ;
-(id)generateSnapshotIdentifiersTrackingLastDevice:(BOOL)arg0 ;
-(id)initWithDeviceManager:(id)arg0 delegate:(id)arg1 filerForm:(id)arg2 pendingFileUrls:(id)arg3 pendingURLExtensions:(id)arg4 draftDeviceIds:(id)arg5 ;
-(id)maybeAttachmentWithIdentifier:(id)arg0 ;
-(id)maybeDeviceWithIdentifier:(id)arg0 ;
-(id)trailingSwipeActionConfigurationWithAttachment:(id)arg0 fromViewController:(id)arg1 ;
-(id)trailingSwipeActionConfigurationWithAttachment:(id)arg0 orDevice:(id)arg1 fromViewController:(id)arg2 ;
-(id)trailingSwipeActionConfigurationWithDevice:(id)arg0 fromViewController:(id)arg1 ;
-(id)unreachableDevicesInPlay;
-(void)abortAllSessions;
-(void)addAttachmentWithItemProvider:(id)arg0 ;
-(void)addDevice:(id)arg0 ;
-(void)attachmentManager:(id)arg0 didAddAttachment:(id)arg1 atIndex:(NSInteger)arg2 ;
-(void)attachmentManager:(id)arg0 didFinishAttaching:(id)arg1 error:(id)arg2 ;
-(void)attachmentManager:(id)arg0 didRemoveAttachment:(id)arg1 atIndex:(NSInteger)arg2 ;
-(void)attachmentManager:(id)arg0 didStartAttaching:(id)arg1 ;
-(void)attachmentManager:(id)arg0 didStartBugSessionsForDevice:(id)arg1 success:(BOOL)arg2 ;
-(void)attachmentManager:(id)arg0 didUpdateAttachment:(id)arg1 atIndex:(NSInteger)arg2 ;
-(void)commitAllFilesForForm:(id)arg0 withCompletion:(id)arg1 ;
-(void)copyFileFrom:(id)arg0 ;
-(void)createCombineObjectIfNeeded;
-(void)dealloc;
-(void)finishInitializationWithChosenDevices:(id)arg0 matcherPredicates:(id)arg1 pendingFileUrls:(id)arg2 pendingURLExtensions:(id)arg3 ;
-(void)finishInitializationWithChosenDevices:(id)arg0 matcherPredicates:(id)arg1 pendingFileUrls:(id)arg2 pendingURLExtensions:(id)arg3 shouldGetSessionStatus:(BOOL)arg4 shouldCheckForDeferredDiagnostics:(BOOL)arg5 ;
-(void)gatherAllMissingRequirementsWithAnswers:(id)arg0 ;
-(void)gatherAttachment:(id)arg0 answers:(id)arg1 ;
-(void)moveFileFrom:(id)arg0 ;
-(void)postLaunchAttachLocalFiles:(id)arg0 ;
-(void)reevaluateMatcherPredicates;
-(void)removeAllAttachments;
-(void)removeDevice:(id)arg0 ;
-(void)requestDeviceChoiceButDontBeAnnoyingWithGivenDeviceChoices:(id)arg0 matcherPredicates:(id)arg1 needsChoices:(id)arg2 ;
-(void)updateAttachmentCollectionObserver:(id)arg0 formResponse:(id)arg1 ;
-(void)updateFilesBeingCopiedCountCancellable;
-(void)updateStatePublisher;


@end


#endif