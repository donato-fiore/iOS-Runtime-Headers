// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICNAEVENTREPORTER_H
#define ICNAEVENTREPORTER_H

@class NSMutableDictionary, NSMutableSet;


#import "ICNAOptedInObject.h"
#import "ICNASubTracker.h"

@interface ICNAEventReporter : ICNAOptedInObject

@property (retain, nonatomic) NSMutableDictionary *pendingInlineDrawingInformation; // ivar: _pendingInlineDrawingInformation
@property (retain) ICNASubTracker *subTracker; // ivar: _subTracker
@property (retain) NSMutableSet *timedDataTrackingSet; // ivar: _timedDataTrackingSet


+(BOOL)attachmentHasDeepLinkSafariHighlight:(id)arg0 ;
+(id)analyticsTypeUTIAttachment:(id)arg0 ;
+(id)filteredActivityType:(id)arg0 ;
+(id)inlineAttachmentReportForModernNote:(id)arg0 faultOutInlineAttachmentsAfterDone:(BOOL)arg1 ;
+(id)maskString:(id)arg0 withoutPrefix:(id)arg1 withMask:(id)arg2 ;
+(void)faultOutObject:(id)arg0 ;
+(void)resetNoteCreateApproachEnumInAppSuiteDefaults;
+(void)setNoteCreateApproachEnumToAppSuiteDefaults:(NSInteger)arg0 ;
-(NSInteger)weeksSinceDate:(id)arg0 ;
-(NSUInteger)pencilStrokeCountForDrawing:(id)arg0 ;
-(id)accountDataForHTMLAccount:(id)arg0 ;
-(id)accountDataForModernAccount:(id)arg0 ;
-(id)accountTypeForHTMLAccount:(id)arg0 ;
-(id)accountTypeForModernAccount:(id)arg0 ;
-(id)bioAuthDataForModernNote:(id)arg0 ;
-(id)collaborationActionDataIsInviting:(BOOL)arg0 inviteStep:(NSInteger)arg1 ;
-(id)collaborationStatusForModernObject:(id)arg0 ;
-(id)collaborationTypeForModernObject:(id)arg0 ;
-(id)folderContentDataForNoteCollection:(id)arg0 ;
-(id)folderContentDataForNoteContainer:(id)arg0 ;
-(id)folderContentDataForVirtualFolder:(id)arg0 context:(id)arg1 ;
-(id)folderDataForHTMLCollection:(id)arg0 ;
-(id)folderDataForHTMLFolder:(id)arg0 ;
-(id)folderDataForModernAccountProxy:(id)arg0 ;
-(id)folderDataForModernFolder:(id)arg0 ;
-(id)folderDataForVirtualFolder:(id)arg0 ;
-(id)folderViewEventDataObjectsForNoteCollection:(id)arg0 isInGridMode:(BOOL)arg1 ;
-(id)folderViewEventDataObjectsForNoteContainer:(id)arg0 isInGridMode:(BOOL)arg1 ;
-(id)folderViewEventDataObjectsForVirtualFolder:(id)arg0 isInGridMode:(BOOL)arg1 context:(id)arg2 ;
-(id)initWithSubTrackerName:(id)arg0 ;
-(id)initWithSubTrackerName:(id)arg0 windowScene:(id)arg1 ;
-(id)layoutDataForIsInGridMode:(BOOL)arg0 isTimelineView:(BOOL)arg1 ;
-(id)noteAccessDataForHTMLNote;
-(id)noteAccessDataForModernNote:(id)arg0 ;
-(id)noteContentDataForHTMLNote:(id)arg0 ;
-(id)noteContentDataForModernNote:(id)arg0 ;
-(id)noteCreateDataFromAppSuiteDefaults;
-(id)noteDataForHTMLNote:(id)arg0 ;
-(id)noteDataForModernNote:(id)arg0 ;
-(id)noteEditDataForContextType:(NSInteger)arg0 ;
-(id)noteEditorCallOutBarDataForButtonTypeValue:(NSInteger)arg0 ;
-(id)noteViewEventDataObjectsForHTMLNote:(id)arg0 ;
-(id)noteViewEventDataObjectsForModernNote:(id)arg0 ;
-(id)objectDataForCloudSyncingObject:(id)arg0 ;
-(id)passwordDataForModernNote:(id)arg0 ;
-(id)passwordModeDataForContextPath:(NSInteger)arg0 fromMode:(short)arg1 toMode:(short)arg2 ;
-(id)searchRankingExperimentItemDataWithStrategyTypeEnum:(NSInteger)arg0 rank:(NSUInteger)arg1 ;
-(id)searchSuggestionDataWithSearchSuggestionType:(NSUInteger)arg0 ;
-(id)selectedResultAccountTypeForSearchResult:(id)arg0 ;
-(id)styleDataForStyleTypeValue:(NSInteger)arg0 ;
-(id)tipDataForFeature:(id)arg0 ;
-(id)tipImpressionEventDataObjectsForFeature:(id)arg0 andModernNote:(id)arg1 ;
-(id)tipLearnMoreClickEventDataObjectsForFeature:(id)arg0 learnMoreTipName:(id)arg1 ;
-(void)dealloc;
-(void)flushAllTimedData:(id)arg0 ;
-(void)popContextPathData;
-(void)popNoteCreateData;
-(void)popSearchData;
-(void)pushContextPathDataWithContextPathEnum:(NSInteger)arg0 ;
-(void)pushDocScanDataWithID:(id)arg0 actionType:(NSInteger)arg1 stage:(NSInteger)arg2 ;
-(void)pushInlineDrawingDataForDrawing:(id)arg0 drawingID:(id)arg1 tool:(NSInteger)arg2 ;
-(void)pushNoteCreateDataWithCreateApproach:(NSInteger)arg0 ;
-(void)pushSearchDataWithSearchSessionID:(id)arg0 ;
-(void)pushStartDocScanPageCountData:(NSUInteger)arg0 ;
-(void)pushStartTableDataWithStartColumns:(NSUInteger)arg0 startRows:(NSUInteger)arg1 ;
-(void)reallySubmitSearchResultSelectEventWithSearchResult:(id)arg0 searchSessionID:(id)arg1 gmRank:(NSUInteger)arg2 queryLength:(NSUInteger)arg3 searchResultCountData:(id)arg4 searchSuggestionData:(id)arg5 ;
-(void)startActivityStreamSummaryEventForObject:(id)arg0 ;
-(void)startAttributionSideBarViewEventForNote:(id)arg0 ;
-(void)startFolderListViewEventDurationTracking;
-(void)startFolderViewEventDurationTrackingForNoteCollection:(id)arg0 isInGridMode:(BOOL)arg1 ;
-(void)startFolderViewEventDurationTrackingForNoteContainer:(id)arg0 isInGridMode:(BOOL)arg1 ;
-(void)startFolderViewEventDurationTrackingForVirtualFolder:(id)arg0 isInGridMode:(BOOL)arg1 context:(id)arg2 ;
-(void)startNoteViewEventDurationTrackingForHTMLNote:(id)arg0 ;
-(void)startNoteViewEventDurationTrackingForModernNote:(id)arg0 reportCoreAnalytics:(BOOL)arg1 ;
-(void)startTimedEventOfType:(Class)arg0 ;
-(void)startTipImpressionEventDurationTrackingForFeature:(id)arg0 andModernNote:(id)arg1 ;
-(void)submitActivityStreamSummaryEventForObject:(id)arg0 halfHeightViewDuration:(CGFloat)arg1 fullHeightViewDuration:(CGFloat)arg2 sideBarViewDuration:(CGFloat)arg3 minimizedViewDuration:(CGFloat)arg4 ;
-(void)submitAppSessionResignEvent;
-(void)submitAppSessionResumeEvent;
-(void)submitAttachmentAddEventForAttachment:(id)arg0 ;
-(void)submitAttachmentBrowserActionEventForType:(NSInteger)arg0 ;
-(void)submitAttachmentBrowserTapEvent;
-(void)submitAttributionSideBarViewEventForNote:(id)arg0 contextPath:(NSInteger)arg1 startState:(NSInteger)arg2 endState:(NSInteger)arg3 ;
-(void)submitBiometricsFailEventForModernNote:(id)arg0 ;
-(void)submitChangePasswordEventForModernAccount:(id)arg0 isReset:(BOOL)arg1 ;
-(void)submitChangePasswordModeEventForAccount:(id)arg0 contextPath:(NSInteger)arg1 fromMode:(short)arg2 toMode:(short)arg3 ;
-(void)submitChecklistUsageEventForModernNote:(id)arg0 countOfCheckedItems:(NSInteger)arg1 countOfTotalItems:(NSInteger)arg2 checklistActionType:(NSInteger)arg3 ;
-(void)submitCollabActivityBrowseEventForObject:(id)arg0 contextPath:(NSInteger)arg1 clickContext:(NSInteger)arg2 mode:(NSInteger)arg3 isCurrentUserMentioned:(BOOL)arg4 hasRecentUpdates:(BOOL)arg5 ;
-(void)submitCollabNotificationEventWithAction:(NSInteger)arg0 ;
-(void)submitCollabSummaryEventForObject:(id)arg0 withUpdates:(BOOL)arg1 ;
-(void)submitCollaborationActionEventForCloudSyncingObject:(id)arg0 share:(id)arg1 isInviting:(BOOL)arg2 inviteStep:(NSInteger)arg3 ;
-(void)submitDocScanEventForNote:(id)arg0 pageCount:(NSUInteger)arg1 ;
-(void)submitEverNoteImportEventWithCount:(NSUInteger)arg0 isSuccessful:(BOOL)arg1 intoAccount:(id)arg2 ;
-(void)submitFolderCreateEventForModernFolder:(id)arg0 ;
-(void)submitFolderCreateEventForModernFolder:(id)arg0 creationApproach:(NSInteger)arg1 filterSelection:(id)arg2 ;
-(void)submitFolderDeleteEventForModernFolder:(id)arg0 ;
-(void)submitFolderListViewEvent;
-(void)submitFolderViewEventForNoteCollection:(id)arg0 isInGridMode:(BOOL)arg1 ;
-(void)submitFolderViewEventForNoteContainer:(id)arg0 isInGridMode:(BOOL)arg1 ;
-(void)submitFolderViewEventForVirtualFolder:(id)arg0 isInGridMode:(BOOL)arg1 context:(id)arg2 ;
-(void)submitFullscreenDrawingToInlineDrawingEventForNote:(id)arg0 drawing:(id)arg1 drawingID:(id)arg2 method:(NSInteger)arg3 ;
-(void)submitHashtagAddEventForNote:(id)arg0 tokenContentIdentifier:(id)arg1 viaAutoComplete:(BOOL)arg2 ;
-(void)submitHashtagDeleteEvent:(id)arg0 approachEnum:(NSInteger)arg1 ;
-(void)submitHashtagRenameEvent:(id)arg0 approachEnum:(NSInteger)arg1 ;
-(void)submitInlineDrawingDataForDrawingDeletion:(id)arg0 drawingID:(id)arg1 forNote:(id)arg2 ;
-(void)submitMentionAddEventForNote:(id)arg0 mentionID:(id)arg1 participantID:(id)arg2 viaAutoComplete:(BOOL)arg3 ;
-(void)submitMentionDeleteEvent:(id)arg0 ;
-(void)submitMoveCheckedItemsToBottomSwitchEventWithNewState:(BOOL)arg0 isInApp:(BOOL)arg1 ;
-(void)submitNoteActionMenuEventForNoteBrowserWithUsageType:(NSInteger)arg0 layout:(NSInteger)arg1 activityType:(id)arg2 isTimelineView:(BOOL)arg3 ;
-(void)submitNoteActionMenuEventForNoteEditorWithUsageType:(NSInteger)arg0 activityType:(id)arg1 ;
-(void)submitNoteCreateEventForHTMLNote:(id)arg0 ;
-(void)submitNoteCreateEventForHTMLNote:(id)arg0 createApproach:(NSInteger)arg1 ;
-(void)submitNoteCreateEventForModernNote:(id)arg0 ;
-(void)submitNoteCreateEventForModernNote:(id)arg0 createApproach:(NSInteger)arg1 ;
-(void)submitNoteCreateEventForSearchIndexableNote:(id)arg0 createApproach:(NSInteger)arg1 ;
-(void)submitNoteDeleteEventForHTMLNote:(id)arg0 ;
-(void)submitNoteDeleteEventForModernNote:(id)arg0 ;
-(void)submitNoteEditEventForHTMLNote:(id)arg0 ;
-(void)submitNoteEditEventForModernNote:(id)arg0 fromQuickNote:(BOOL)arg1 ;
-(void)submitNoteEditorCallOutBarButtonSelectionEventForHTMLNote:(id)arg0 buttonTypeValue:(NSInteger)arg1 ;
-(void)submitNoteEditorCallOutBarButtonSelectionEventForModernNote:(id)arg0 buttonTypeValue:(NSInteger)arg1 ;
-(void)submitNotePinEventForModernNote:(id)arg0 contextPath:(NSInteger)arg1 ;
-(void)submitNoteSharrowEventForHTMLNote:(id)arg0 activityType:(id)arg1 contextPath:(NSInteger)arg2 ;
-(void)submitNoteSharrowEventForModernNote:(id)arg0 activityType:(id)arg1 contextPath:(NSInteger)arg2 oldShare:(id)arg3 newShare:(id)arg4 ;
-(void)submitNoteViewEventForHTMLNote:(id)arg0 ;
-(void)submitNoteViewEventForModernNote:(id)arg0 ;
-(void)submitPaletteEngagementEventForNote:(id)arg0 startPosition:(NSInteger)arg1 endPosition:(NSInteger)arg2 ;
-(void)submitPasswordFailEventForModernNote:(id)arg0 ;
-(void)submitPasswordProtectEventForModernNote:(id)arg0 ;
-(void)submitPasswordSuccessEventForModernNote:(id)arg0 ;
-(void)submitPendingInlineDrawingDataForNote:(id)arg0 ;
-(void)submitSearchAttemptEvent;
-(void)submitSearchInitiateEventWithSearchSessionID:(id)arg0 searchSuggestionType:(NSUInteger)arg1 ;
-(void)submitSearchResultExposureSummaryEventWithSearchResultExposureData:(id)arg0 searchSessionID:(id)arg1 ;
-(void)submitSearchResultSelectEventWithSearchResult:(id)arg0 searchSessionID:(id)arg1 gmRank:(NSUInteger)arg2 ;
-(void)submitSearchResultSelectEventWithSearchResult:(id)arg0 searchSessionID:(id)arg1 queryLength:(NSUInteger)arg2 topHitResultCount:(NSUInteger)arg3 noteResultCount:(NSUInteger)arg4 attachmentResultCount:(NSUInteger)arg5 gmRank:(NSUInteger)arg6 ;
-(void)submitSnapshotCompletionEventIsSuccessful:(BOOL)arg0 ;
-(void)submitSnapshotRegisterEventIsSuccessful:(BOOL)arg0 ;
-(void)submitSnapshotTriggeredEvent;
-(void)submitStyleFormatEventForHTMLNote:(id)arg0 styleTypeValue:(NSInteger)arg1 ;
-(void)submitStyleFormatEventForModernNote:(id)arg0 styleTypeValue:(NSInteger)arg1 ;
-(void)submitTableCreateEventForAttachment:(id)arg0 inNote:(id)arg1 ;
-(void)submitTableEditEventForNote:(id)arg0 endColumns:(NSUInteger)arg1 endRows:(NSUInteger)arg2 ;
-(void)submitTableRemoveEventForAttachment:(id)arg0 inNote:(id)arg1 ;
-(void)submitTagBrowserSelectionEventWithSelectedTagCount:(NSUInteger)arg0 isAllTagsSelected:(BOOL)arg1 ;
-(void)submitTimedEventOfTypeIfPossible:(Class)arg0 ;
-(void)submitTipImpressionEventForFeature:(id)arg0 andModernNote:(id)arg1 ;
-(void)submitTipLearnMoreClickEventForFeature:(id)arg0 learnMoreTipName:(id)arg1 ;


@end


#endif