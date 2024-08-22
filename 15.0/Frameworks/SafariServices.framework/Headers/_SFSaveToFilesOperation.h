// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFSAVETOFILESOPERATION_H
#define _SFSAVETOFILESOPERATION_H

@class NSString, UIDocumentPickerViewController;
@protocol UIDocumentPickerDelegate, _SFDownloadPlaceholderImporter, _SFSaveToFilesOperationDelegate;

#import <Foundation/Foundation.h>

#import "_SFActivityItemProviderCollection.h"
#import "_SFDownload.h"

@interface _SFSaveToFilesOperation : NSObject <UIDocumentPickerDelegate, _SFDownloadPlaceholderImporter>

 {
    _SFActivityItemProviderCollection *_collection;
    NSString *_containerDirectoryPath;
    UIDocumentPickerViewController *_documentPickerViewController;
    id *_downloadPlaceholderCompletionHandler;
    id *_prepareDownloadPlaceholderHandler;
    _SFDownload *_download;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_SFSaveToFilesOperationDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_temporaryFileWithName:(id)arg0 ;
-(id)initWithActivityItemProviderCollection:(id)arg0 ;
-(void)_copyFileData:(id)arg0 ;
-(void)_finishWithURL:(id)arg0 ;
-(void)_showDocumentPickerForFileURL:(id)arg0 sourceURL:(id)arg1 willStartDownload:(BOOL)arg2 ;
-(void)dealloc;
-(void)documentPicker:(id)arg0 didPickDocumentsAtURLs:(id)arg1 ;
-(void)documentPickerWasCancelled:(id)arg0 ;
-(void)importPlaceholderForDownload:(id)arg0 fromURL:(id)arg1 completionHandler:(id)arg2 ;
-(void)start;


@end


#endif