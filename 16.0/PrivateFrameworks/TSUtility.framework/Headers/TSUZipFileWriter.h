// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSUZIPFILEWRITER_H
#define TSUZIPFILEWRITER_H

@protocol TSURandomWriteChannel;


#import "TSUZipWriter.h"

@interface TSUZipFileWriter : TSUZipWriter {
    id<TSURandomWriteChannel> *_writeChannel;
}




+(void)zipDirectoryAtURL:(id)arg0 toURL:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
-(id)initWithURL:(id)arg0 ;
-(id)writeChannel;


@end


#endif