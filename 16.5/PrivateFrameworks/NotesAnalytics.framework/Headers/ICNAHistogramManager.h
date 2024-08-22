// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICNAHISTOGRAMMANAGER_H
#define ICNAHISTOGRAMMANAGER_H


#import <Foundation/Foundation.h>

#import "ICNAAttachmentCountPerNoteHistogram.h"
#import "ICNACollabOwnedRootFolderAcceptanceCountHistogram.h"
#import "ICNACollabOwnedRootFolderAcceptanceRatioHistogram.h"
#import "ICNACollabOwnedRootFolderInviteeCountHistogram.h"
#import "ICNACollabOwnedRootFolderNoReplyCountHistogram.h"
#import "ICNACollabOwnedSingleNoteAcceptanceCountHistogram.h"
#import "ICNACollabOwnedSingleNoteAcceptanceRatioHistogram.h"
#import "ICNACollabOwnedSingleNoteInviteeCountHistogram.h"
#import "ICNACollabOwnedSingleNoteNoReplyCountHistogram.h"
#import "ICNACollabRootFolderTotalNoteCountHistogram.h"
#import "ICNAInlineAttachmentCountPerNoteHistogram.h"
#import "ICNADocScanPageCountHistogram.h"
#import "ICNADrawingCountPerNoteHistogram.h"
#import "ICNAFolderDirectNoteCountHistogram.h"
#import "ICNAFullScreenDrawingStrokesCountPerNoteHistogram.h"
#import "ICNAFullscreenDrawingStrokeCountHistogram.h"
#import "ICNAInlineDrawingFingerStrokesCountPerNoteHistogram.h"
#import "ICNAInlineDrawingPencilStrokesCountPerNoteHistogram.h"
#import "ICNAInlineDrawingV1FingerStrokeCountHistogram.h"
#import "ICNAInlineDrawingV1FingerStrokeRatioHistogram.h"
#import "ICNAInlineDrawingV1PencilStrokeCountHistogram.h"
#import "ICNAInlineDrawingV1TotalStrokeCountHistogram.h"
#import "ICNAInlineDrawingV2FingerStrokeCountHistogram.h"
#import "ICNAInlineDrawingV2FingerStrokeRatioHistogram.h"
#import "ICNAInlineDrawingV2PencilStrokeCountHistogram.h"
#import "ICNAInlineDrawingV2TotalStrokeCountHistogram.h"
#import "ICNANoteCharCountHistogram.h"
#import "ICNAPasswordProtectedNoteWeeklyAgeHistogram.h"
#import "ICNATableCellCountHistogram.h"
#import "ICNATableColumnCountHistogram.h"
#import "ICNATableRowCountHistogram.h"
#import "ICNATopLevelFolderTotalNoteCountHistogram.h"
#import "ICNATotalStrokesCountPerNoteHistogram.h"

@interface ICNAHistogramManager : NSObject

@property (retain, nonatomic) ICNAAttachmentCountPerNoteHistogram *attachmentCountPerNoteHistogram; // ivar: _attachmentCountPerNoteHistogram
@property (retain, nonatomic) ICNACollabOwnedRootFolderAcceptanceCountHistogram *collabOwnedRootFolderAcceptanceCountHistogram; // ivar: _collabOwnedRootFolderAcceptanceCountHistogram
@property (retain, nonatomic) ICNACollabOwnedRootFolderAcceptanceRatioHistogram *collabOwnedRootFolderAcceptanceRatioHistogram; // ivar: _collabOwnedRootFolderAcceptanceRatioHistogram
@property (retain, nonatomic) ICNACollabOwnedRootFolderInviteeCountHistogram *collabOwnedRootFolderInviteeCountHistogram; // ivar: _collabOwnedRootFolderInviteeCountHistogram
@property (retain, nonatomic) ICNACollabOwnedRootFolderNoReplyCountHistogram *collabOwnedRootFolderNoReplyCountHistogram; // ivar: _collabOwnedRootFolderNoReplyCountHistogram
@property (retain, nonatomic) ICNACollabOwnedSingleNoteAcceptanceCountHistogram *collabOwnedSingleNoteAcceptanceCountHistogram; // ivar: _collabOwnedSingleNoteAcceptanceCountHistogram
@property (retain, nonatomic) ICNACollabOwnedSingleNoteAcceptanceRatioHistogram *collabOwnedSingleNoteAcceptanceRatioHistogram; // ivar: _collabOwnedSingleNoteAcceptanceRatioHistogram
@property (retain, nonatomic) ICNACollabOwnedSingleNoteInviteeCountHistogram *collabOwnedSingleNoteInviteeCountHistogram; // ivar: _collabOwnedSingleNoteInviteeCountHistogram
@property (retain, nonatomic) ICNACollabOwnedSingleNoteNoReplyCountHistogram *collabOwnedSingleNoteNoReplyCountHistogram; // ivar: _collabOwnedSingleNoteNoReplyCountHistogram
@property (retain, nonatomic) ICNACollabRootFolderTotalNoteCountHistogram *collabRootFolderTotalNoteCountHistogram; // ivar: _collabRootFolderTotalNoteCountHistogram
@property (retain, nonatomic) ICNAInlineAttachmentCountPerNoteHistogram *distinctMentionCountPerNoteHistogram; // ivar: _distinctMentionCountPerNoteHistogram
@property (retain, nonatomic) ICNAInlineAttachmentCountPerNoteHistogram *distinctTagCountPerNoteHistogram; // ivar: _distinctTagCountPerNoteHistogram
@property (retain, nonatomic) ICNADocScanPageCountHistogram *docScanPageCountHistogram; // ivar: _docScanPageCountHistogram
@property (retain, nonatomic) ICNADrawingCountPerNoteHistogram *drawingCountPerNoteHistogram; // ivar: _drawingCountPerNoteHistogram
@property (retain, nonatomic) ICNAFolderDirectNoteCountHistogram *folderDirectNoteCountHistogram; // ivar: _folderDirectNoteCountHistogram
@property (retain, nonatomic) ICNAFullScreenDrawingStrokesCountPerNoteHistogram *fullScreenDrawingStrokesCountPerNoteHistogram; // ivar: _fullScreenDrawingStrokesCountPerNoteHistogram
@property (retain, nonatomic) ICNAFullscreenDrawingStrokeCountHistogram *fullscreenDrawingStrokeCountHistogram; // ivar: _fullscreenDrawingStrokeCountHistogram
@property (retain, nonatomic) ICNAInlineDrawingFingerStrokesCountPerNoteHistogram *inlineDrawingFingerStrokesCountPerNoteHistogram; // ivar: _inlineDrawingFingerStrokesCountPerNoteHistogram
@property (retain, nonatomic) ICNAInlineDrawingPencilStrokesCountPerNoteHistogram *inlineDrawingPencilStrokesCountPerNoteHistogram; // ivar: _inlineDrawingPencilStrokesCountPerNoteHistogram
@property (retain, nonatomic) ICNAInlineDrawingV1FingerStrokeCountHistogram *inlineDrawingV1FingerStrokeCountHistogram; // ivar: _inlineDrawingV1FingerStrokeCountHistogram
@property (retain, nonatomic) ICNAInlineDrawingV1FingerStrokeRatioHistogram *inlineDrawingV1FingerStrokeRatioHistogram; // ivar: _inlineDrawingV1FingerStrokeRatioHistogram
@property (retain, nonatomic) ICNAInlineDrawingV1PencilStrokeCountHistogram *inlineDrawingV1PencilStrokeCountHistogram; // ivar: _inlineDrawingV1PencilStrokeCountHistogram
@property (retain, nonatomic) ICNAInlineDrawingV1TotalStrokeCountHistogram *inlineDrawingV1TotalStrokeCountHistogram; // ivar: _inlineDrawingV1TotalStrokeCountHistogram
@property (retain, nonatomic) ICNAInlineDrawingV2FingerStrokeCountHistogram *inlineDrawingV2FingerStrokeCountHistogram; // ivar: _inlineDrawingV2FingerStrokeCountHistogram
@property (retain, nonatomic) ICNAInlineDrawingV2FingerStrokeRatioHistogram *inlineDrawingV2FingerStrokeRatioHistogram; // ivar: _inlineDrawingV2FingerStrokeRatioHistogram
@property (retain, nonatomic) ICNAInlineDrawingV2PencilStrokeCountHistogram *inlineDrawingV2PencilStrokeCountHistogram; // ivar: _inlineDrawingV2PencilStrokeCountHistogram
@property (retain, nonatomic) ICNAInlineDrawingV2TotalStrokeCountHistogram *inlineDrawingV2TotalStrokeCountHistogram; // ivar: _inlineDrawingV2TotalStrokeCountHistogram
@property (retain, nonatomic) ICNAInlineAttachmentCountPerNoteHistogram *mentionCountPerNoteHistogram; // ivar: _mentionCountPerNoteHistogram
@property (retain, nonatomic) ICNANoteCharCountHistogram *noteCharCountHistogram; // ivar: _noteCharCountHistogram
@property (retain, nonatomic) ICNAPasswordProtectedNoteWeeklyAgeHistogram *passwordProtectedNoteWeeklyAgeHistogram; // ivar: _passwordProtectedNoteWeeklyAgeHistogram
@property (retain, nonatomic) ICNATableCellCountHistogram *tableCellCountHistogram; // ivar: _tableCellCountHistogram
@property (retain, nonatomic) ICNATableColumnCountHistogram *tableColumnCountHistogram; // ivar: _tableColumnCountHistogram
@property (retain, nonatomic) ICNATableRowCountHistogram *tableRowCountHistogram; // ivar: _tableRowCountHistogram
@property (retain, nonatomic) ICNAInlineAttachmentCountPerNoteHistogram *tagCountPerNoteHistogram; // ivar: _tagCountPerNoteHistogram
@property (retain, nonatomic) ICNATopLevelFolderTotalNoteCountHistogram *topLevelFolderTotalNoteCountHistogram; // ivar: _topLevelFolderTotalNoteCountHistogram
@property (retain, nonatomic) ICNATotalStrokesCountPerNoteHistogram *totalStrokesCountPerNoteHistogram; // ivar: _totalStrokesCountPerNoteHistogram


-(id)init;


@end


#endif