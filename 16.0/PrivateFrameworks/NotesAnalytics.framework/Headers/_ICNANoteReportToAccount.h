// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _ICNANOTEREPORTTOACCOUNT_H
#define _ICNANOTEREPORTTOACCOUNT_H


#import <Foundation/Foundation.h>


@interface _ICNANoteReportToAccount : NSObject {
    float _noteTwoFactorMatrix;
    int _noteCollaborationMatrix;
}


@property (nonatomic) NSUInteger countOfChecklists; // ivar: _countOfChecklists
@property (nonatomic) NSUInteger countOfCollaboratedScrapPapers; // ivar: _countOfCollaboratedScrapPapers
@property (nonatomic) NSUInteger countOfLockedNotes; // ivar: _countOfLockedNotes
@property (nonatomic) NSUInteger countOfLockedNotesWithDivergedMode; // ivar: _countOfLockedNotesWithDivergedMode
@property (nonatomic) NSUInteger countOfLockedNotesWithDivergedPassword; // ivar: _countOfLockedNotesWithDivergedPassword
@property (nonatomic) NSUInteger countOfLockedScrapPapers; // ivar: _countOfLockedScrapPapers
@property (nonatomic) NSUInteger countOfNotes; // ivar: _countOfNotes
@property (nonatomic) NSUInteger countOfNotesWithChecklists; // ivar: _countOfNotesWithChecklists
@property (nonatomic) NSUInteger countOfNotesWithDeepLink; // ivar: _countOfNotesWithDeepLink
@property (nonatomic) NSUInteger countOfNotesWithDocScan; // ivar: _countOfNotesWithDocScan
@property (nonatomic) NSUInteger countOfNotesWithFullscreenDrawing; // ivar: _countOfNotesWithFullscreenDrawing
@property (nonatomic) NSUInteger countOfNotesWithInlineDrawingV1; // ivar: _countOfNotesWithInlineDrawingV1
@property (nonatomic) NSUInteger countOfNotesWithInlineDrawingV2; // ivar: _countOfNotesWithInlineDrawingV2
@property (nonatomic) NSUInteger countOfNotesWithMapLink; // ivar: _countOfNotesWithMapLink
@property (nonatomic) NSUInteger countOfNotesWithMentions; // ivar: _countOfNotesWithMentions
@property (nonatomic) NSUInteger countOfNotesWithOtherAttachments; // ivar: _countOfNotesWithOtherAttachments
@property (nonatomic) NSUInteger countOfNotesWithPaperKit; // ivar: _countOfNotesWithPaperKit
@property (nonatomic) NSUInteger countOfNotesWithRichURL; // ivar: _countOfNotesWithRichURL
@property (nonatomic) NSUInteger countOfNotesWithTable; // ivar: _countOfNotesWithTable
@property (nonatomic) NSUInteger countOfNotesWithTags; // ivar: _countOfNotesWithTags
@property (nonatomic) NSUInteger countOfPinnedNotes; // ivar: _countOfPinnedNotes
@property (nonatomic) NSUInteger countOfPinnedScrapPapers; // ivar: _countOfPinnedScrapPapers
@property (nonatomic) NSUInteger countOfScrapPapersWithDeepLink; // ivar: _countOfScrapPapersWithDeepLink
@property (nonatomic) NSUInteger countOfScrapPapersWithDocScan; // ivar: _countOfScrapPapersWithDocScan
@property (nonatomic) NSUInteger countOfScrapPapersWithFullscreenDrawing; // ivar: _countOfScrapPapersWithFullscreenDrawing
@property (nonatomic) NSUInteger countOfScrapPapersWithInlineDrawingV1; // ivar: _countOfScrapPapersWithInlineDrawingV1
@property (nonatomic) NSUInteger countOfScrapPapersWithInlineDrawingV2; // ivar: _countOfScrapPapersWithInlineDrawingV2
@property (nonatomic) NSUInteger countOfScrapPapersWithMapLink; // ivar: _countOfScrapPapersWithMapLink
@property (nonatomic) NSUInteger countOfScrapPapersWithMentions; // ivar: _countOfScrapPapersWithMentions
@property (nonatomic) NSUInteger countOfScrapPapersWithOtherAttachments; // ivar: _countOfScrapPapersWithOtherAttachments
@property (nonatomic) NSUInteger countOfScrapPapersWithPaperKit; // ivar: _countOfScrapPapersWithPaperKit
@property (nonatomic) NSUInteger countOfScrapPapersWithRichUrl; // ivar: _countOfScrapPapersWithRichUrl
@property (nonatomic) NSUInteger countOfScrapPapersWithTables; // ivar: _countOfScrapPapersWithTables
@property (nonatomic) NSUInteger countOfScrapPapersWithTags; // ivar: _countOfScrapPapersWithTags
@property (nonatomic) NSUInteger countOfV1LockedNotes; // ivar: _countOfV1LockedNotes
@property (nonatomic) NSUInteger countOfV2LockedNotes; // ivar: _countOfV2LockedNotes
@property (nonatomic) NSUInteger scrapPaperCount; // ivar: _scrapPaperCount


-(NSUInteger)countOfNotesWithCollaborationStatus:(NSInteger)arg0 collaborationType:(NSInteger)arg1 ;
-(NSUInteger)countOfNotesWithFactor:(NSInteger)arg0 andFactor:(NSInteger)arg1 ;
-(id)init;
-(void)completeTwoFactorMatrixReportingForCurrentNote;
-(void)updateNoteCollaborationMatrixWithCollaborationStatus:(id)arg0 collaborationType:(id)arg1 ;
-(void)updateNoteTwoFactorMatrixWithIndex:(NSInteger)arg0 ;


@end


#endif