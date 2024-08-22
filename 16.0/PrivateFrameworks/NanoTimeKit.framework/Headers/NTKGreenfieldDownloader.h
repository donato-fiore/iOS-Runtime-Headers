// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKGREENFIELDDOWNLOADER_H
#define NTKGREENFIELDDOWNLOADER_H

@class NSURL, NSURLSessionDownloadTask;

#import <Foundation/Foundation.h>


@interface NTKGreenfieldDownloader : NSObject {
    NSURL *_remoteWatchFaceURL;
    NSURLSessionDownloadTask *_downloadTask;
    NSURL *_downloadedFileURL;
}




-(BOOL)_copyFileFromURL:(id)arg0 ;
-(NSInteger)_greenfieldErrorFromURLSessionError:(NSInteger)arg0 ;
-(id)_downloadURL;
-(id)_downloadedFolderURL;
-(id)initWithWatchFaceURL:(id)arg0 ;
-(void)cancelDownload;
-(void)downloadCleanUp;
-(void)downloadWithCompletionBlock:(id)arg0 ;


@end


#endif