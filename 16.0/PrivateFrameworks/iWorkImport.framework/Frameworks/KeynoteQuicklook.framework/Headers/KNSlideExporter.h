// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KNSLIDEEXPORTER_H
#define KNSLIDEEXPORTER_H

@class NSString;
@protocol KNSlideLayoutPrintHelperDataSource;


#import "KNRenderingExporter.h"
#import "KNSlideLayoutPrintHelper.h"

@interface KNSlideExporter : KNRenderingExporter <KNSlideLayoutPrintHelperDataSource>

 {
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
-(id)printHelper:(id)arg0 noteSegmentsForSlideNode:(id)arg1 ;
-(id)slideNodesForPrintHelper:(id)arg0 ;
-(struct CGRect )boundsRect;
-(void)p_preparePrintHelperIfNeeded;
-(void)setCurrentSlideNode:(id)arg0 ;
-(void)setup;


@end


#endif