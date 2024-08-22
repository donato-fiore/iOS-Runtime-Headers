// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKAPPLEENCRYPTEDARCHIVEMEMORYEXTRACTOR_H
#define NTKAPPLEENCRYPTEDARCHIVEMEMORYEXTRACTOR_H

@class NSURL, NSMutableData, NSError, NSData, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NTKAppleEncryptedArchiveMemoryExtractor : NSObject

@property (readonly, nonatomic) NSURL *archiveURL; // ivar: _archiveURL
@property (copy, nonatomic) id *completion; // ivar: _completion
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // ivar: _completionQueue
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *extractionQueue; // ivar: _extractionQueue
@property (retain, nonatomic) NSMutableData *outputData; // ivar: _outputData
@property (retain, nonatomic) NSError *outputError; // ivar: _outputError
@property (nonatomic) *AAArchiveStream_impl outputStream; // ivar: _outputStream
@property (nonatomic) NSInteger state; // ivar: _state
@property (readonly, nonatomic) NSData *symmetricKey; // ivar: _symmetricKey
@property (readonly, nonatomic) NSString *targetArchivedPath; // ivar: _targetArchivedPath


-(id)initWithArchiveURL:(id)arg0 symmetricKey:(id)arg1 extractingFileAtArchivedPath:(id)arg2 completion:(id)arg3 ;
-(void)cancel;
-(void)resume;


@end


#endif