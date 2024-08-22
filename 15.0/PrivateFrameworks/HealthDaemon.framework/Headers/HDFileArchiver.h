// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDFILEARCHIVER_H
#define HDFILEARCHIVER_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface HDFileArchiver : NSObject {
    NSURL *_sourceURL;
    NSURL *_prefixURL;
    NSURL *_destinationDirectoryURL;
    *archive _reader;
    *archive _writer;
    vector<unsigned char, std::allocator<unsigned char>> _nullBuffer;
}




-(BOOL)compressFileAtURL:(id)arg0 to:(id)arg1 strippingPathPrefix:(id)arg2 error:(*id)arg3 ;
-(BOOL)decompressArchiveAt:(id)arg0 to:(id)arg1 error:(*id)arg2 ;
-(id)init;
-(void)dealloc;


@end


#endif