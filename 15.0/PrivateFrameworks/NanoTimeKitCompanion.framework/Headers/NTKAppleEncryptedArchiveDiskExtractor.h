// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKAPPLEENCRYPTEDARCHIVEDISKEXTRACTOR_H
#define NTKAPPLEENCRYPTEDARCHIVEDISKEXTRACTOR_H

@class NSURL, NSString, NSData;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NTKAppleEncryptedArchiveDiskExtractor : NSObject

@property (readonly, nonatomic) NSURL *archiveURL; // ivar: _archiveURL
@property (copy, nonatomic) id *completion; // ivar: _completion
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // ivar: _completionQueue
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *extractionQueue; // ivar: _extractionQueue
@property (readonly, nonatomic) NSString *fileProtection; // ivar: _fileProtection
@property (readonly, nonatomic) NSURL *outputDirectoryURL; // ivar: _outputDirectoryURL
@property (nonatomic) *AAArchiveStream_impl outputStream; // ivar: _outputStream
@property (nonatomic) NSInteger state; // ivar: _state
@property (readonly, nonatomic) NSData *symmetricKey; // ivar: _symmetricKey


-(id)initWithArchiveURL:(id)arg0 symmetricKey:(id)arg1 outputDirectoryURL:(id)arg2 fileProtection:(id)arg3 completion:(id)arg4 ;
-(id)requiredDiskSpaceWithError:(*id)arg0 ;
-(void)cancel;
-(void)resume;


@end


#endif