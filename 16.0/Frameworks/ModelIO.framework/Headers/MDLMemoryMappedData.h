// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MDLMEMORYMAPPEDDATA_H
#define MDLMEMORYMAPPEDDATA_H


#import <Foundation/Foundation.h>


@interface MDLMemoryMappedData : NSObject {
    *__sFILE _file;
    char * _mappedAddr;
    char * _fileStart;
    NSInteger _mappedFileSize;
    NSInteger _length;
}




-(id)dataNoCopy;
-(id)initWithURL:(id)arg0 offset:(NSUInteger)arg1 length:(NSUInteger)arg2 ;
-(void)dealloc;


@end


#endif