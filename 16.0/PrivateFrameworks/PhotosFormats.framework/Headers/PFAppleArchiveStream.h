// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFAPPLEARCHIVESTREAM_H
#define PFAPPLEARCHIVESTREAM_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface PFAppleArchiveStream : NSObject {
    *AAByteStream_impl _inputStream;
    *AAByteStream_impl _outputStream;
    *AAByteStream_impl _compressionStream;
}


@property BOOL appendToExistingArchive; // ivar: _appendToExistingArchive
@property (readonly) NSURL *archiveURL; // ivar: _archiveURL
@property NSUInteger blockSize; // ivar: _blockSize
@property NSInteger compression; // ivar: _compression


-(BOOL)close:(*id)arg0 ;
-(BOOL)openForReading:(*id)arg0 ;
-(BOOL)openForWriting:(*id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithArchiveURL:(id)arg0 ;
-(void)dealloc;


@end


#endif