// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFMAILDROPATTACHMENTDATAPROVIDER_H
#define MFMAILDROPATTACHMENTDATAPROVIDER_H

@class NSMutableDictionary, NSString;
@protocol EFLoggable, NSURLSessionDownloadDelegate;


#import "MFAttachmentLibraryDataProvider.h"

@interface MFMailDropAttachmentDataProvider : MFAttachmentLibraryDataProvider <EFLoggable, NSURLSessionDownloadDelegate>

 {
    NSMutableDictionary *_requests;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)log;
-(id)_defaultDownloadSessionForAttachment:(id)arg0 ;
-(id)initWithLibrary:(id)arg0 ;
-(void)URLSession:(id)arg0 downloadTask:(id)arg1 didFinishDownloadingToURL:(id)arg2 ;
-(void)URLSession:(id)arg0 downloadTask:(id)arg1 didResumeAtOffset:(NSInteger)arg2 expectedTotalBytes:(NSInteger)arg3 ;
-(void)URLSession:(id)arg0 downloadTask:(id)arg1 didWriteData:(NSInteger)arg2 totalBytesWritten:(NSInteger)arg3 totalBytesExpectedToWrite:(NSInteger)arg4 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)fetchDataForAttachment:(id)arg0 consumer:(id)arg1 progress:(id)arg2 completion:(id)arg3 ;


@end


#endif