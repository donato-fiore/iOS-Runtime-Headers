// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef KNPDFHANDOUTEXPORTER_H
#define KNPDFHANDOUTEXPORTER_H

@class NSArray;


#import "KNPdfExporter.h"

@interface KNPdfHandoutExporter : KNPdfExporter {
    NSArray *_segments;
    NSArray *_segmentsForCurrentPage;
    NSUInteger _pageIndex;
    BOOL _isDrawingNote;
}


@property (nonatomic, getter=isPrintingDivider) BOOL printingDivider; // ivar: _printingDivider
@property (nonatomic, getter=isPrintingNotes) BOOL printingNotes; // ivar: _printingNotes
@property (nonatomic, getter=isPrintingRuledLines) BOOL printingRuledLines; // ivar: _printingRuledLines


-(BOOL)drawCurrentPageInContext:(struct CGContext *)arg0 viewScale:(CGFloat)arg1 unscaledClipRect:(struct CGRect )arg2 createPage:(BOOL)arg3 ;
-(BOOL)incrementPage;
-(NSUInteger)pageCount;
-(id)currentInfos;
-(id)initWithDocumentRoot:(id)arg0 ;
-(id)p_noteSegmentsForSlideNode:(id)arg0 withScaledClipRect:(struct CGRect )arg1 firstSegmentIndex:(NSUInteger)arg2 ;
-(id)p_segmentsForPage:(NSUInteger)arg0 ;
-(id)p_segmentsForSlideNode:(id)arg0 withScaledClipRect:(struct CGRect )arg1 firstSegmentIndex:(NSUInteger)arg2 ;
-(void)p_drawDividerLineForRect:(struct CGRect )arg0 pageRect:(struct CGRect )arg1 context:(struct CGContext *)arg2 ;
-(void)p_drawNotesForNode:(id)arg0 index:(NSUInteger)arg1 forRect:(struct CGRect )arg2 notesIndex:(NSUInteger)arg3 scaledClipRect:(struct CGRect )arg4 context:(struct CGContext *)arg5 ;
-(void)p_drawRuledLinesForRect:(struct CGRect )arg0 pageRect:(struct CGRect )arg1 numberOfLines:(NSUInteger)arg2 context:(struct CGContext *)arg3 ;
-(void)p_segmentSlideNodesWithUnscaledClipRect:(struct CGRect )arg0 viewScale:(CGFloat)arg1 ;
-(void)p_segmentSlidesIfNecessary;


@end


#endif