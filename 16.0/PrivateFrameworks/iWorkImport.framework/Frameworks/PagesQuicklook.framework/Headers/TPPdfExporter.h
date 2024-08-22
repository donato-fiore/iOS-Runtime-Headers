// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPPDFEXPORTER_H
#define TPPDFEXPORTER_H

@class NSString, TSUProgress;
@protocol TSKEncryptedDocumentExporter;


#import "TPRenderingExporter.h"

@interface TPPdfExporter : TPRenderingExporter <TSKEncryptedDocumentExporter>



@property (readonly, nonatomic) BOOL canExportInBackground;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *documentSpecificTypeUTI;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isCancelled;
@property (readonly, nonatomic) BOOL isExportSupported;
@property (readonly, nonatomic) BOOL needsSupplementalFiles;
@property (readonly, nonatomic) TSUProgress *progress;
@property (readonly, nonatomic) NSString *savePanelMessage;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *typeUTI;


-(BOOL)validatePassphrases:(*id)arg0 ;
-(id)p_renderingExporterDelegate;
-(void)setCopyPassphrase:(id)arg0 hint:(id)arg1 ;
-(void)setOptions:(id)arg0 ;
-(void)setPassphrase:(id)arg0 hint:(id)arg1 ;
-(void)setPrintPassphrase:(id)arg0 hint:(id)arg1 ;


@end


#endif