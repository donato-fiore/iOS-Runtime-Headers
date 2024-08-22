// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICDOCCAMARCHIVEEXPORTER_H
#define ICDOCCAMARCHIVEEXPORTER_H


#import <Foundation/Foundation.h>


@interface ICDocCamArchiveExporter : NSObject



+(BOOL)archiveExportingEnabled;
+(id)archivableImageForSubAttachent:(id)arg0 ;
+(id)archiveGalleryImagesFromGallery:(id)arg0 toURL:(id)arg1 ;
+(id)createZipArchiveOfImagesFromGalleryAttachment:(id)arg0 ;
+(id)createZipArchiveOfImagesFromNote:(id)arg0 ;
+(id)exportAsArchiveActivityWithBarButtonItem:(id)arg0 presentingVC:(id)arg1 fromGalleryAttachment:(id)arg2 ;
+(id)exportAsArchiveActivityWithBarButtonItem:(id)arg0 presentingVC:(id)arg1 fromNote:(id)arg2 ;
+(void)showActivityVCWithBarButtonItem:(id)arg0 presentingVC:(id)arg1 url:(id)arg2 ;
+(void)showExportArchiveFromNote:(id)arg0 presentingViewController:(id)arg1 presentingBarButtonItem:(id)arg2 ;


@end


#endif