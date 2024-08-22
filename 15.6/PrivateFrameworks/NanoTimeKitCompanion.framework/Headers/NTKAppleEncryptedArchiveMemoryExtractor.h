// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKAPPLEENCRYPTEDARCHIVEMEMORYEXTRACTOR_H
#define NTKAPPLEENCRYPTEDARCHIVEMEMORYEXTRACTOR_H

@class NSMutableData, NSError, NSURL, NSData, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NTKAppleEncryptedArchiveMemoryExtractor : NSObject {
    id *_completion;
    *AAArchiveStream_impl _outputStream;
    NSObject<OS_dispatch_queue> *_completionQueue;
    NSObject<OS_dispatch_queue> *_extractionQueue;
    NSInteger _state;
    NSMutableData *_outputData;
    NSError *_outputError;
}


@property (readonly, nonatomic) NSURL *archiveURL; // ivar: _archiveURL
@property (readonly, nonatomic) NSData *symmetricKey; // ivar: _symmetricKey
@property (readonly, nonatomic) NSString *targetArchivedPath; // ivar: _targetArchivedPath


-(id)initWithArchiveURL:(id)arg0 symmetricKey:(id)arg1 extractingFileAtArchivedPath:(id)arg2 completion:(id)arg3 ;
-(void)cancel;
-(void)resume;


@end


#endif