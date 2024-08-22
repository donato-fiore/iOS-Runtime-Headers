// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKAPPLEENCRYPTEDARCHIVEDISKEXTRACTOR_H
#define NTKAPPLEENCRYPTEDARCHIVEDISKEXTRACTOR_H

@class NSURL, NSString, NSData;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NTKAppleEncryptedArchiveDiskExtractor : NSObject {
    id *_completion;
    *AAArchiveStream_impl _outputStream;
    NSObject<OS_dispatch_queue> *_completionQueue;
    NSObject<OS_dispatch_queue> *_extractionQueue;
    NSInteger _state;
}


@property (readonly, nonatomic) NSURL *archiveURL; // ivar: _archiveURL
@property (readonly, nonatomic) NSString *fileProtection; // ivar: _fileProtection
@property (readonly, nonatomic) NSURL *outputDirectoryURL; // ivar: _outputDirectoryURL
@property (readonly, nonatomic) NSData *symmetricKey; // ivar: _symmetricKey


-(BOOL)verifyExtractedContentsWithError:(*id)arg0 ;
-(id)initWithArchiveURL:(id)arg0 symmetricKey:(id)arg1 outputDirectoryURL:(id)arg2 fileProtection:(id)arg3 completion:(id)arg4 ;
-(id)requiredDiskSpaceWithError:(*id)arg0 ;
-(void)cancel;
-(void)resume;


@end


#endif