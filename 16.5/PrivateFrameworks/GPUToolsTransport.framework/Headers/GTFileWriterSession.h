// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GTFILEWRITERSESSION_H
#define GTFILEWRITERSESSION_H

@class NSURL, NSArray;

#import <Foundation/Foundation.h>


@interface GTFileWriterSession : NSObject {
    NSURL *_baseURL;
    NSArray *_fileEntries;
    unsigned int _totalWriteSize;
    *void _scratchBytes;
    unsigned int _scratchLength;
    int _algorithm;
    unsigned int _fileChunkSize;
    int _fileIndex;
    int _fd;
}




-(id)init;
-(void)dealloc;
-(void)finish;
-(void)startWithFileEntries:(id)arg0 relativeToURL:(id)arg1 config:(struct ? )arg2 ;
-(void)writeFileChunks:(id)arg0 withData:(id)arg1 ;


@end


#endif