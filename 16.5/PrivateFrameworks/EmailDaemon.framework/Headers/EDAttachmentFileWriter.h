// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDATTACHMENTFILEWRITER_H
#define EDATTACHMENTFILEWRITER_H

@class NSURL;
@protocol OS_dispatch_io, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface EDAttachmentFileWriter : NSObject {
    atomic_flag _didClose;
    atomic_flag _didFail;
    CC_SHA256state_st _digestContext;
    int _fileDescriptor;
    NSURL *_tempURL;
    NSURL *_finalURL;
    NSUInteger _byteCount;
    NSObject<OS_dispatch_io> *_io;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_compressionQueue;
    id *_completion;
}




-(id)initWithFinalURL:(id)arg0 queue:(id)arg1 compressionQueue:(id)arg2 completion:(id)arg3 ;
-(id)initWithTemporaryURL:(id)arg0 finalURL:(id)arg1 protection:(int)arg2 queue:(id)arg3 compressionQueue:(id)arg4 completion:(id)arg5 ;
-(void)close;
-(void)dealloc;
-(void)failAndClose;
-(void)writeData:(id)arg0 ;


@end


#endif