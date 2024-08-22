// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KNPDFNOTEEXPORTER_H
#define KNPDFNOTEEXPORTER_H

@class NSString;
@protocol KNSlideLayoutPrintHelperDataSource;


#import "KNPdfExporter.h"
#import "KNSlideLayoutPrintHelper.h"

@interface KNPdfNoteExporter : KNPdfExporter <KNSlideLayoutPrintHelperDataSource>

 {
    BOOL _isDrawingNote;
    KNSlideLayoutPrintHelper *_helper;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)drawCurrentPageInContext:(struct CGContext *)arg0 viewScale:(CGFloat)arg1 unscaledClipRect:(struct CGRect )arg2 createPage:(BOOL)arg3 ;
-(BOOL)incrementPage;
-(BOOL)supportsPrintingComments;
-(NSUInteger)pageCount;
-(NSUInteger)printHelper:(id)arg0 commentsPageCountForSlideNode:(id)arg1 ;
-(id)currentInfos;
-(id)printHelper:(id)arg0 noteSegmentsForSlideNode:(id)arg1 ;
-(id)slideNodesForPrintHelper:(id)arg0 ;
-(struct CGRect )p_slideRectFromUnscaledClipRect:(struct CGRect )arg0 viewScale:(CGFloat)arg1 outScaledClipRect:(struct CGRect *)arg2 ;
-(void)p_preparePrintHelperIfNeeded;


@end


#endif