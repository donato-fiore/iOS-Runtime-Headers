// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASNOTECONTENTDATA_H
#define ICASNOTECONTENTDATA_H

@class NSNumber;
@protocol AADataEventType;

#import <Foundation/Foundation.h>


@interface ICASNoteContentData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSNumber *characterCount; // ivar: _characterCount
@property (readonly, nonatomic) NSNumber *countOfDistinctMentions; // ivar: _countOfDistinctMentions
@property (readonly, nonatomic) NSNumber *countOfDistinctTags; // ivar: _countOfDistinctTags
@property (readonly, nonatomic) NSNumber *countOfMentions; // ivar: _countOfMentions
@property (readonly, nonatomic) NSNumber *countOfTags; // ivar: _countOfTags
@property (readonly, nonatomic) NSNumber *hasAttachedPhoto; // ivar: _hasAttachedPhoto
@property (readonly, nonatomic) NSNumber *hasAttachmentFullscreenDrawing; // ivar: _hasAttachmentFullscreenDrawing
@property (readonly, nonatomic) NSNumber *hasAttachmentInlineDrawingV1; // ivar: _hasAttachmentInlineDrawingV1
@property (readonly, nonatomic) NSNumber *hasAttachmentInlineDrawingV2; // ivar: _hasAttachmentInlineDrawingV2
@property (readonly, nonatomic) NSNumber *hasAttachmentMapLink; // ivar: _hasAttachmentMapLink
@property (readonly, nonatomic) NSNumber *hasAttachmentOther; // ivar: _hasAttachmentOther
@property (readonly, nonatomic) NSNumber *hasAttachmentRichUrl; // ivar: _hasAttachmentRichUrl
@property (readonly, nonatomic) NSNumber *hasChecklist; // ivar: _hasChecklist
@property (readonly, nonatomic) NSNumber *hasMentions; // ivar: _hasMentions
@property (readonly, nonatomic) NSNumber *hasPaperKitDrawing; // ivar: _hasPaperKitDrawing
@property (readonly, nonatomic) NSNumber *hasScannedDoc; // ivar: _hasScannedDoc
@property (readonly, nonatomic) NSNumber *hasStyleFormatting; // ivar: _hasStyleFormatting
@property (readonly, nonatomic) NSNumber *hasTable; // ivar: _hasTable
@property (readonly, nonatomic) NSNumber *hasTags; // ivar: _hasTags
@property (readonly, nonatomic) NSNumber *weeksSinceCreation; // ivar: _weeksSinceCreation


+(id)dataName;
-(id)initWithCharacterCount:(id)arg0 hasChecklist:(id)arg1 hasStyleFormatting:(id)arg2 hasTable:(id)arg3 hasAttachmentInlineDrawingV1:(id)arg4 hasAttachmentInlineDrawingV2:(id)arg5 hasAttachmentFullscreenDrawing:(id)arg6 hasAttachmentOther:(id)arg7 hasAttachedPhoto:(id)arg8 weeksSinceCreation:(id)arg9 hasAttachmentRichUrl:(id)arg10 hasAttachmentMapLink:(id)arg11 hasTags:(id)arg12 hasScannedDoc:(id)arg13 countOfTags:(id)arg14 countOfDistinctTags:(id)arg15 hasMentions:(id)arg16 countOfMentions:(id)arg17 countOfDistinctMentions:(id)arg18 hasPaperKitDrawing:(id)arg19 ;
-(id)toDict;


@end


#endif