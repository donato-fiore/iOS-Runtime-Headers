// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKAPPLEENCRYPTEDARCHIVEDISKEXTRACTIONHANDLE_H
#define NTKAPPLEENCRYPTEDARCHIVEDISKEXTRACTIONHANDLE_H

@class NSURL, NSString;


#import "NTKAppleEncryptedArchiveHandle.h"

@interface NTKAppleEncryptedArchiveDiskExtractionHandle : NTKAppleEncryptedArchiveHandle {
    *AAArchiveStream_impl _outputStream;
    NSURL *_outputDirectoryURL;
    NSString *_fileProtection;
}


@property (readonly) *AAArchiveStream_impl archiveStream;
@property (readonly) *AAArchiveStream_impl outputStream;


-(BOOL)closeReturningError:(*id)arg0 ;
-(id)initWithArchiveURL:(id)arg0 symmetricKey:(id)arg1 outputDirectoryURL:(id)arg2 fileProtection:(id)arg3 ;
-(struct AAArchiveStream_impl *)openReturningError:(*id)arg0 ;
-(void)dealloc;


@end


#endif