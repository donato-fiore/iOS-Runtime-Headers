// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKAPPLEENCRYPTEDARCHIVEVERIFICATIONHANDLE_H
#define NTKAPPLEENCRYPTEDARCHIVEVERIFICATIONHANDLE_H

@class NSURL;


#import "NTKAppleEncryptedArchiveHandle.h"

@interface NTKAppleEncryptedArchiveVerificationHandle : NTKAppleEncryptedArchiveHandle {
    *AAArchiveStream_impl _archiveStream;
    *AAArchiveStream_impl _verificationStream;
    NSURL *_outputDirectoryURL;
    *AAFieldKeySet_impl _excludeFields;
}


@property (readonly) *AAArchiveStream_impl archiveStream;
@property (readonly) *AAArchiveStream_impl verificationStream;


-(BOOL)closeReturningError:(*id)arg0 ;
-(id)initWithArchiveURL:(id)arg0 symmetricKey:(id)arg1 outputDirectoryURL:(id)arg2 excludeFields:(id)arg3 ;
-(struct AAArchiveStream_impl *)openReturningError:(*id)arg0 ;
-(void)dealloc;


@end


#endif