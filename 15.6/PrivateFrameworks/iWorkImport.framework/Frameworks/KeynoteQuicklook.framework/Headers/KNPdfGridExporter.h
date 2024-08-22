// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef KNPDFGRIDEXPORTER_H
#define KNPDFGRIDEXPORTER_H



#import "KNPdfExporter.h"

@interface KNPdfGridExporter : KNPdfExporter



-(BOOL)drawCurrentPageInContext:(struct CGContext *)arg0 viewScale:(CGFloat)arg1 unscaledClipRect:(struct CGRect )arg2 createPage:(BOOL)arg3 ;
-(BOOL)incrementPage;
-(id)initWithDocumentRoot:(id)arg0 ;


@end


#endif