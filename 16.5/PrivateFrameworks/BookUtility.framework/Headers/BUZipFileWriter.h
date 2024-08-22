// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BUZIPFILEWRITER_H
#define BUZIPFILEWRITER_H

@protocol BURandomWriteChannel;


#import "BUZipWriter.h"

@interface BUZipFileWriter : BUZipWriter {
    id<BURandomWriteChannel> *_writeChannel;
    id *_writeChannelCompletionHandler;
}




+(void)zipDirectoryAtURL:(id)arg0 customDirectoryFilename:(id)arg1 toURL:(id)arg2 queue:(id)arg3 progressHandler:(id)arg4 ;
+(void)zipDirectoryAtURL:(id)arg0 toURL:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
-(id)initWithURL:(id)arg0 error:(*id)arg1 ;
-(id)initWithURL:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)initWithZipFileArchive:(id)arg0 error:(*id)arg1 ;
-(id)initWithZipFileArchive:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)prepareWriteChannelWithCloseCompletionHandler:(id)arg0 ;
-(void)copyEntriesFromZipFileWriter:(id)arg0 readingFromURL:(id)arg1 options:(NSUInteger)arg2 completionHandler:(id)arg3 ;
-(void)copyRemainingEntries:(id)arg0 fromArchive:(id)arg1 progress:(id)arg2 completionHandler:(id)arg3 ;
-(void)truncateToOffsetImpl:(NSInteger)arg0 completion:(id)arg1 ;


@end


#endif