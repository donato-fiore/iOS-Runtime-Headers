// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASNOTEATTACHMENTITEMDATA_H
#define ICASNOTEATTACHMENTITEMDATA_H

@class NSNumber;
@protocol AADataEventType;

#import <Foundation/Foundation.h>


@interface ICASNoteAttachmentItemData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithAttachmentDeepLink; // ivar: _totalCountOfNotesWithAttachmentDeepLink
@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithAttachmentDocScan; // ivar: _totalCountOfNotesWithAttachmentDocScan
@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithAttachmentFullscreenDrawing; // ivar: _totalCountOfNotesWithAttachmentFullscreenDrawing
@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithAttachmentInlineDrawingV1; // ivar: _totalCountOfNotesWithAttachmentInlineDrawingV1
@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithAttachmentInlineDrawingV2; // ivar: _totalCountOfNotesWithAttachmentInlineDrawingV2
@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithAttachmentMapLink; // ivar: _totalCountOfNotesWithAttachmentMapLink
@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithAttachmentOther; // ivar: _totalCountOfNotesWithAttachmentOther
@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithAttachmentPaperKit; // ivar: _totalCountOfNotesWithAttachmentPaperKit
@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithAttachmentRichUrl; // ivar: _totalCountOfNotesWithAttachmentRichUrl
@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithAttachmentTables; // ivar: _totalCountOfNotesWithAttachmentTables


+(id)dataName;
-(id)initWithTotalCountOfNotesWithAttachmentDocScan:(id)arg0 totalCountOfNotesWithAttachmentInlineDrawingV1:(id)arg1 totalCountOfNotesWithAttachmentInlineDrawingV2:(id)arg2 totalCountOfNotesWithAttachmentPaperKit:(id)arg3 totalCountOfNotesWithAttachmentFullscreenDrawing:(id)arg4 totalCountOfNotesWithAttachmentTables:(id)arg5 totalCountOfNotesWithAttachmentOther:(id)arg6 totalCountOfNotesWithAttachmentRichUrl:(id)arg7 totalCountOfNotesWithAttachmentMapLink:(id)arg8 totalCountOfNotesWithAttachmentDeepLink:(id)arg9 ;
-(id)toDict;


@end


#endif