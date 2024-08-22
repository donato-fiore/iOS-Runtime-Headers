// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TNPREVIEWEXPORTER_H
#define TNPREVIEWEXPORTER_H

@class NSString, TSUProgress;
@protocol TSKImageExporter;


#import "TNRenderingExporter.h"

@interface TNPreviewExporter : TNRenderingExporter <TSKImageExporter>



@property (readonly, nonatomic) CGRect boundsRect;
@property (readonly, nonatomic) BOOL canExportInBackground;
@property (nonatomic) CGRect clipRect; // ivar: mClipRect
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *documentSpecificTypeUTI;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger height;
@property (readonly, nonatomic) BOOL isCancelled;
@property (readonly, nonatomic) BOOL isExportSupported;
@property (readonly, nonatomic) BOOL needsSupplementalFiles;
@property (readonly, nonatomic) NSUInteger pageCount;
@property (nonatomic) BOOL paginate;
@property (readonly, nonatomic) TSUProgress *progress;
@property (readonly, nonatomic) CGFloat progressForCurrentPage;
@property (readonly, nonatomic) NSString *savePanelMessage;
@property (nonatomic) BOOL scaleToFit;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *typeUTI;
@property (readonly, nonatomic) CGRect unscaledClipRect;
@property (nonatomic) NSUInteger width;


-(id)initWithDocumentRoot:(id)arg0 ;
-(id)p_renderingExporterDelegate;


@end


#endif