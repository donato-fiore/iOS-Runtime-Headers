// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSMEMORYMAP_H
#define VSMEMORYMAP_H

@class NSString;

#import <Foundation/Foundation.h>


@interface VSMemoryMap : NSObject

@property (readonly, nonatomic) int fd; // ivar: _fd
@property (readonly, nonatomic) NSString *filePath; // ivar: _filePath
@property (readonly, nonatomic) NSUInteger fileSize; // ivar: _fileSize
@property (readonly, nonatomic) *void mappedData; // ivar: _mappedData


-(BOOL)mmap;
-(id)initWithFilePath:(id)arg0 ;
-(void)dealloc;
-(void)madvise;


@end


#endif