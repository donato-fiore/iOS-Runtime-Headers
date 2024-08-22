// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DCDOCCAMPDFGENERATOR_H
#define DCDOCCAMPDFGENERATOR_H


#import <Foundation/Foundation.h>


@interface DCDocCamPDFGenerator : NSObject



+(id)blockingGeneratepdfURLForDocumentInfoCollection:(id)arg0 imageCache:(id)arg1 withProgress:(id)arg2 error:(*id)arg3 ;
+(id)fileManager;
+(id)fileQueue;
+(id)folderPathForDocumentInfoCollection:(id)arg0 ;
+(id)folderPathForDocumentInfoCollectionIdentifier:(id)arg0 ;
+(id)pdfURLForDocumentInfoCollection:(id)arg0 ;
+(id)rootPDFFolderPath;
+(id)syncGeneratorQueue;
+(id)versionPDFPathForDocumentInfoCollection:(id)arg0 ;
+(id)versionfolderPathForDocumentInfoCollection:(id)arg0 ;
+(void)applicationWillTerminate:(id)arg0 ;
+(void)createEmptyPDFFileAtURLIFNecessaryForDocumentInfoCollection:(id)arg0 ;
+(void)createTmpDirectory:(id)arg0 ;
+(void)deleteAllDocCamPDFs;
+(void)deletePDFFolderIfExistsForDocumentInfoCollection:(id)arg0 ;
+(void)deletePDFForDocumentInfoCollectionIfExists:(id)arg0 ;
+(void)generatePDFsIfNecessaryForDocumentInfoCollection:(id)arg0 imageCache:(id)arg1 displayWindow:(id)arg2 presentingViewController:(id)arg3 completionHandler:(id)arg4 ;
+(void)initialize;
+(void)performPDFGenerationWithGenerator:(id)arg0 docInfoCollection:(id)arg1 imageCache:(id)arg2 progress:(id)arg3 ;


@end


#endif