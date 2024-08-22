// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASACCOUNTSNAPSHOTDATA_H
#define ICASACCOUNTSNAPSHOTDATA_H

@class NSArray, NSString, NSNumber;
@protocol AADataEventType;

#import <Foundation/Foundation.h>


@interface ICASAccountSnapshotData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSArray *accountNotesTwoFactorSummary; // ivar: _accountNotesTwoFactorSummary
@property (readonly, nonatomic) NSArray *accountSnapshotSummary; // ivar: _accountSnapshotSummary
@property (readonly, nonatomic) NSArray *attachmentCountPerNoteHistogram; // ivar: _attachmentCountPerNoteHistogram
@property (readonly, nonatomic) NSArray *attachmentUTISummary; // ivar: _attachmentUTISummary
@property (readonly, nonatomic) NSArray *collabFoldersSummary; // ivar: _collabFoldersSummary
@property (readonly, nonatomic) NSArray *collabNotesSummary; // ivar: _collabNotesSummary
@property (readonly, nonatomic) NSArray *collabOwnedRootFolderAcceptanceCountHistogram; // ivar: _collabOwnedRootFolderAcceptanceCountHistogram
@property (readonly, nonatomic) NSArray *collabOwnedRootFolderAcceptanceRatioHistogram; // ivar: _collabOwnedRootFolderAcceptanceRatioHistogram
@property (readonly, nonatomic) NSArray *collabOwnedRootFolderInviteeCountHistogram; // ivar: _collabOwnedRootFolderInviteeCountHistogram
@property (readonly, nonatomic) NSArray *collabOwnedRootFolderNoReplyCountHistogram; // ivar: _collabOwnedRootFolderNoReplyCountHistogram
@property (readonly, nonatomic) NSArray *collabOwnedSingleNoteAcceptanceCountHistogram; // ivar: _collabOwnedSingleNoteAcceptanceCountHistogram
@property (readonly, nonatomic) NSArray *collabOwnedSingleNoteAcceptanceRatioHistogram; // ivar: _collabOwnedSingleNoteAcceptanceRatioHistogram
@property (readonly, nonatomic) NSArray *collabOwnedSingleNoteInviteeCountHistogram; // ivar: _collabOwnedSingleNoteInviteeCountHistogram
@property (readonly, nonatomic) NSArray *collabOwnedSingleNoteNoReplyCountHistogram; // ivar: _collabOwnedSingleNoteNoReplyCountHistogram
@property (readonly, nonatomic) NSArray *collabRootFolderTotalNoteCountHistogram; // ivar: _collabRootFolderTotalNoteCountHistogram
@property (readonly, nonatomic) NSArray *deviceSnapshotSummary; // ivar: _deviceSnapshotSummary
@property (readonly, nonatomic) NSArray *distinctMentionCountPerNoteHistogram; // ivar: _distinctMentionCountPerNoteHistogram
@property (readonly, nonatomic) NSArray *distinctTagCountPerNoteHistogram; // ivar: _distinctTagCountPerNoteHistogram
@property (readonly, nonatomic) NSArray *docScanPageCountHistogram; // ivar: _docScanPageCountHistogram
@property (readonly, nonatomic) NSArray *drawingCountPerNoteHistogram; // ivar: _drawingCountPerNoteHistogram
@property (readonly, nonatomic) NSArray *folderDirectNoteCountHistogram; // ivar: _folderDirectNoteCountHistogram
@property (readonly, nonatomic) NSArray *fullScreenDrawingStrokesCountPerNoteHistogram; // ivar: _fullScreenDrawingStrokesCountPerNoteHistogram
@property (readonly, nonatomic) NSArray *fullscreenDrawingStrokeCountHistogram; // ivar: _fullscreenDrawingStrokeCountHistogram
@property (readonly, nonatomic) NSArray *inlineDrawingFingerStrokesCountPerNoteHistogram; // ivar: _inlineDrawingFingerStrokesCountPerNoteHistogram
@property (readonly, nonatomic) NSArray *inlineDrawingPencilStrokesCountPerNoteHistogram; // ivar: _inlineDrawingPencilStrokesCountPerNoteHistogram
@property (readonly, nonatomic) NSArray *inlineDrawingV1FingerStrokeCountHistogram; // ivar: _inlineDrawingV1FingerStrokeCountHistogram
@property (readonly, nonatomic) NSArray *inlineDrawingV1FingerStrokeRatioHistogram; // ivar: _inlineDrawingV1FingerStrokeRatioHistogram
@property (readonly, nonatomic) NSArray *inlineDrawingV1PencilStrokeCountHistogram; // ivar: _inlineDrawingV1PencilStrokeCountHistogram
@property (readonly, nonatomic) NSArray *inlineDrawingV1TotalStrokeCountHistogram; // ivar: _inlineDrawingV1TotalStrokeCountHistogram
@property (readonly, nonatomic) NSArray *inlineDrawingV2FingerStrokeCountHistogram; // ivar: _inlineDrawingV2FingerStrokeCountHistogram
@property (readonly, nonatomic) NSArray *inlineDrawingV2FingerStrokeRatioHistogram; // ivar: _inlineDrawingV2FingerStrokeRatioHistogram
@property (readonly, nonatomic) NSArray *inlineDrawingV2PencilStrokeCountHistogram; // ivar: _inlineDrawingV2PencilStrokeCountHistogram
@property (readonly, nonatomic) NSArray *inlineDrawingV2TotalStrokeCountHistogram; // ivar: _inlineDrawingV2TotalStrokeCountHistogram
@property (readonly, nonatomic) NSArray *lockedNotesSummary; // ivar: _lockedNotesSummary
@property (readonly, nonatomic) NSArray *mentionCountPerNoteHistogram; // ivar: _mentionCountPerNoteHistogram
@property (readonly, nonatomic) NSArray *noteAttachmentSummary; // ivar: _noteAttachmentSummary
@property (readonly, nonatomic) NSArray *noteCharCountHistogram; // ivar: _noteCharCountHistogram
@property (readonly, nonatomic) NSArray *passwordProtectedNoteWeeklyAgeHistogram; // ivar: _passwordProtectedNoteWeeklyAgeHistogram
@property (readonly, nonatomic) NSString *saltVersion; // ivar: _saltVersion
@property (readonly, nonatomic) NSArray *scrapPaperAttachmentSummary; // ivar: _scrapPaperAttachmentSummary
@property (readonly, nonatomic) NSArray *smartFoldersSummary; // ivar: _smartFoldersSummary
@property (readonly, nonatomic) NSArray *tableCellCountHistogram; // ivar: _tableCellCountHistogram
@property (readonly, nonatomic) NSArray *tableColumnCountHistogram; // ivar: _tableColumnCountHistogram
@property (readonly, nonatomic) NSArray *tableRowCountHistogram; // ivar: _tableRowCountHistogram
@property (readonly, nonatomic) NSArray *tagCountPerNoteHistogram; // ivar: _tagCountPerNoteHistogram
@property (readonly, nonatomic) NSArray *topLevelFolderTotalNoteCountHistogram; // ivar: _topLevelFolderTotalNoteCountHistogram
@property (readonly, nonatomic) NSNumber *totalChecklistCount; // ivar: _totalChecklistCount
@property (readonly, nonatomic) NSNumber *totalCountOfCollaboratedScrapPapers; // ivar: _totalCountOfCollaboratedScrapPapers
@property (readonly, nonatomic) NSNumber *totalCountOfLockedNotes; // ivar: _totalCountOfLockedNotes
@property (readonly, nonatomic) NSNumber *totalCountOfLockedScrapPapers; // ivar: _totalCountOfLockedScrapPapers
@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithMentions; // ivar: _totalCountOfNotesWithMentions
@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithTags; // ivar: _totalCountOfNotesWithTags
@property (readonly, nonatomic) NSNumber *totalCountOfPinnedNotes; // ivar: _totalCountOfPinnedNotes
@property (readonly, nonatomic) NSNumber *totalCountOfPinnedScrapPapers; // ivar: _totalCountOfPinnedScrapPapers
@property (readonly, nonatomic) NSNumber *totalCountOfScrapPapersWithMentions; // ivar: _totalCountOfScrapPapersWithMentions
@property (readonly, nonatomic) NSNumber *totalCountOfScrapPapersWithTags; // ivar: _totalCountOfScrapPapersWithTags
@property (readonly, nonatomic) NSNumber *totalFolderCount; // ivar: _totalFolderCount
@property (readonly, nonatomic) NSNumber *totalNoteCount; // ivar: _totalNoteCount
@property (readonly, nonatomic) NSNumber *totalNotesWithChecklistCount; // ivar: _totalNotesWithChecklistCount
@property (readonly, nonatomic) NSNumber *totalScrapPaperCount; // ivar: _totalScrapPaperCount
@property (readonly, nonatomic) NSNumber *totalSmartFolderCount; // ivar: _totalSmartFolderCount
@property (readonly, nonatomic) NSArray *totalStrokesCountPerNoteHistogram; // ivar: _totalStrokesCountPerNoteHistogram
@property (readonly, nonatomic) NSArray *userSnapshotSummary; // ivar: _userSnapshotSummary
@property (readonly, nonatomic) NSNumber *userStartMonth; // ivar: _userStartMonth
@property (readonly, nonatomic) NSNumber *userStartYear; // ivar: _userStartYear


+(id)dataName;
-(id)initWithUserStartMonth:(id)arg0 userStartYear:(id)arg1 saltVersion:(id)arg2 accountSnapshotSummary:(id)arg3 accountNotesTwoFactorSummary:(id)arg4 collabNotesSummary:(id)arg5 collabFoldersSummary:(id)arg6 noteAttachmentSummary:(id)arg7 scrapPaperAttachmentSummary:(id)arg8 lockedNotesSummary:(id)arg9 smartFoldersSummary:(id)arg10 totalNoteCount:(id)arg11 totalFolderCount:(id)arg12 totalSmartFolderCount:(id)arg13 totalChecklistCount:(id)arg14 totalNotesWithChecklistCount:(id)arg15 totalCountOfPinnedNotes:(id)arg16 totalCountOfLockedNotes:(id)arg17 deviceSnapshotSummary:(id)arg18 userSnapshotSummary:(id)arg19 attachmentUTISummary:(id)arg20 folderDirectNoteCountHistogram:(id)arg21 collabRootFolderTotalNoteCountHistogram:(id)arg22 docScanPageCountHistogram:(id)arg23 collabOwnedRootFolderInviteeCountHistogram:(id)arg24 collabOwnedRootFolderAcceptanceCountHistogram:(id)arg25 collabOwnedRootFolderNoReplyCountHistogram:(id)arg26 collabOwnedRootFolderAcceptanceRatioHistogram:(id)arg27 collabOwnedSingleNoteInviteeCountHistogram:(id)arg28 collabOwnedSingleNoteAcceptanceCountHistogram:(id)arg29 collabOwnedSingleNoteNoReplyCountHistogram:(id)arg30 collabOwnedSingleNoteAcceptanceRatioHistogram:(id)arg31 noteCharCountHistogram:(id)arg32 inlineDrawingV1TotalStrokeCountHistogram:(id)arg33 inlineDrawingV1PencilStrokeCountHistogram:(id)arg34 inlineDrawingV1FingerStrokeCountHistogram:(id)arg35 inlineDrawingV1FingerStrokeRatioHistogram:(id)arg36 inlineDrawingV2TotalStrokeCountHistogram:(id)arg37 inlineDrawingV2PencilStrokeCountHistogram:(id)arg38 inlineDrawingV2FingerStrokeCountHistogram:(id)arg39 inlineDrawingV2FingerStrokeRatioHistogram:(id)arg40 fullscreenDrawingStrokeCountHistogram:(id)arg41 tableRowCountHistogram:(id)arg42 tableColumnCountHistogram:(id)arg43 tableCellCountHistogram:(id)arg44 passwordProtectedNoteWeeklyAgeHistogram:(id)arg45 topLevelFolderTotalNoteCountHistogram:(id)arg46 attachmentCountPerNoteHistogram:(id)arg47 drawingCountPerNoteHistogram:(id)arg48 inlineDrawingFingerStrokesCountPerNoteHistogram:(id)arg49 inlineDrawingPencilStrokesCountPerNoteHistogram:(id)arg50 fullScreenDrawingStrokesCountPerNoteHistogram:(id)arg51 totalStrokesCountPerNoteHistogram:(id)arg52 tagCountPerNoteHistogram:(id)arg53 distinctTagCountPerNoteHistogram:(id)arg54 totalCountOfNotesWithTags:(id)arg55 totalCountOfNotesWithMentions:(id)arg56 totalScrapPaperCount:(id)arg57 totalCountOfScrapPapersWithTags:(id)arg58 totalCountOfScrapPapersWithMentions:(id)arg59 totalCountOfPinnedScrapPapers:(id)arg60 totalCountOfLockedScrapPapers:(id)arg61 totalCountOfCollaboratedScrapPapers:(id)arg62 mentionCountPerNoteHistogram:(id)arg63 distinctMentionCountPerNoteHistogram:(id)arg64 ;
-(id)toDict;


@end


#endif