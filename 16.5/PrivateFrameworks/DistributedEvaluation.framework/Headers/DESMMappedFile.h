// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DESMMAPPEDFILE_H
#define DESMMAPPEDFILE_H

@class NSData, NSURL;

#import <Foundation/Foundation.h>


@interface DESMMappedFile : NSObject

@property (readonly, nonatomic) NSData *data; // ivar: _data
@property (readonly, nonatomic) NSURL *fileURL; // ivar: _fileURL


-(*void)_mmap:(*void)arg0 len:(NSUInteger)arg1 protectionFlags:(int)arg2 sharenFlags:(int)arg3 filedHandle:(int)arg4 offset:(NSInteger)arg5 ;
-(id)initWithURL:(id)arg0 ;
-(int)_munmap:(*void)arg0 len:(NSUInteger)arg1 ;
-(void)dealloc;


@end


#endif