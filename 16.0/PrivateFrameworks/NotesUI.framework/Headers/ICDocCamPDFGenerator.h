// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICDOCCAMPDFGENERATOR_H
#define ICDOCCAMPDFGENERATOR_H


#import <Foundation/Foundation.h>


@interface ICDocCamPDFGenerator : NSObject



+(id)blockingGeneratePDFDataForAttachment:(id)arg0 withProgress:(id)arg1 queue:(id)arg2 error:(*id)arg3 ;
+(id)blockingGeneratePDFURLForAttachment:(id)arg0 withProgress:(id)arg1 error:(*id)arg2 ;
+(id)fileManager;
+(id)fileQueue;
+(id)folderPathForAttachment:(id)arg0 ;
+(id)folderPathForAttachmentIdentifier:(id)arg0 passwordProtected:(BOOL)arg1 ;
+(id)pdfURLForAttachment:(id)arg0 ;
+(id)rootPDFFolderPath;
+(id)rootPDFFolderPathForPWAttachments;
+(id)syncGeneratorQueue;
+(id)versionFolderPathForAttachment:(id)arg0 ;
+(id)versionPDFPathForAttachment:(id)arg0 ;
+(void)createEmptyPDFFileAtURLIFNecessaryForAttachment:(id)arg0 ;
+(void)deleteAllDocCamPDFs;
+(void)deleteAllDocCamPasswordProtectedPDFs;
+(void)deletePDFFolderIfExistsForAttachment:(id)arg0 ;
+(void)deletePDFForAttachmentIfExists:(id)arg0 ;
+(void)generatePDFsIfNecessaryForGalleryAttachments:(id)arg0 displayWindow:(id)arg1 presentingViewController:(id)arg2 completionHandler:(id)arg3 ;
+(void)performPDFGenerationWithGenerator:(id)arg0 galleryModel:(id)arg1 progress:(id)arg2 ;


@end


#endif