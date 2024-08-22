// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KNPDFGRIDEXPORTER_H
#define KNPDFGRIDEXPORTER_H



#import "KNPdfExporter.h"

@interface KNPdfGridExporter : KNPdfExporter



-(BOOL)drawCurrentPageInContext:(struct CGContext *)arg0 viewScale:(CGFloat)arg1 unscaledClipRect:(struct CGRect )arg2 createPage:(BOOL)arg3 ;
-(BOOL)incrementPage;
-(id)initWithDocumentRoot:(id)arg0 ;
-(struct CGRect )rectBySubtractingPageMarginsFromRect:(struct CGRect )arg0 ;
-(void)createPage:(BOOL)arg0 inContext:(struct CGContext *)arg1 withRect:(struct CGRect )arg2 ;


@end


#endif