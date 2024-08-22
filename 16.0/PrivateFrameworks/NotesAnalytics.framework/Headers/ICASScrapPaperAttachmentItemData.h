// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICASSCRAPPAPERATTACHMENTITEMDATA_H
#define ICASSCRAPPAPERATTACHMENTITEMDATA_H

@class NSNumber;
@protocol AADataEventType;

#import <Foundation/Foundation.h>


@interface ICASScrapPaperAttachmentItemData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSNumber *totalCountOfScrapPapersWithAttachmentDeepLink; // ivar: _totalCountOfScrapPapersWithAttachmentDeepLink
@property (readonly, nonatomic) NSNumber *totalCountOfScrapPapersWithAttachmentDocScan; // ivar: _totalCountOfScrapPapersWithAttachmentDocScan
@property (readonly, nonatomic) NSNumber *totalCountOfScrapPapersWithAttachmentFullscreenDrawing; // ivar: _totalCountOfScrapPapersWithAttachmentFullscreenDrawing
@property (readonly, nonatomic) NSNumber *totalCountOfScrapPapersWithAttachmentInlineDrawingV1; // ivar: _totalCountOfScrapPapersWithAttachmentInlineDrawingV1
@property (readonly, nonatomic) NSNumber *totalCountOfScrapPapersWithAttachmentInlineDrawingV2; // ivar: _totalCountOfScrapPapersWithAttachmentInlineDrawingV2
@property (readonly, nonatomic) NSNumber *totalCountOfScrapPapersWithAttachmentMapLink; // ivar: _totalCountOfScrapPapersWithAttachmentMapLink
@property (readonly, nonatomic) NSNumber *totalCountOfScrapPapersWithAttachmentOther; // ivar: _totalCountOfScrapPapersWithAttachmentOther
@property (readonly, nonatomic) NSNumber *totalCountOfScrapPapersWithAttachmentPaperKit; // ivar: _totalCountOfScrapPapersWithAttachmentPaperKit
@property (readonly, nonatomic) NSNumber *totalCountOfScrapPapersWithAttachmentRichUrl; // ivar: _totalCountOfScrapPapersWithAttachmentRichUrl
@property (readonly, nonatomic) NSNumber *totalCountOfScrapPapersWithAttachmentTables; // ivar: _totalCountOfScrapPapersWithAttachmentTables


+(id)dataName;
-(id)initWithTotalCountOfScrapPapersWithAttachmentDocScan:(id)arg0 totalCountOfScrapPapersWithAttachmentInlineDrawingV1:(id)arg1 totalCountOfScrapPapersWithAttachmentInlineDrawingV2:(id)arg2 totalCountOfScrapPapersWithAttachmentPaperKit:(id)arg3 totalCountOfScrapPapersWithAttachmentFullscreenDrawing:(id)arg4 totalCountOfScrapPapersWithAttachmentTables:(id)arg5 totalCountOfScrapPapersWithAttachmentOther:(id)arg6 totalCountOfScrapPapersWithAttachmentRichUrl:(id)arg7 totalCountOfScrapPapersWithAttachmentMapLink:(id)arg8 totalCountOfScrapPapersWithAttachmentDeepLink:(id)arg9 ;
-(id)toDict;


@end


#endif