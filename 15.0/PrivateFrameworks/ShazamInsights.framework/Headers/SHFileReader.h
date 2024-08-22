// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SHFILEREADER_H
#define SHFILEREADER_H

@class NSFileHandle, NSString;

#import <Foundation/Foundation.h>


@interface SHFileReader : NSObject {
    NSFileHandle *fileHandle;
    NSUInteger currentOffset;
    NSUInteger totalFileLength;
}


@property (nonatomic) NSUInteger chunkSize; // ivar: chunkSize
@property (copy, nonatomic) NSString *filePath; // ivar: _filePath
@property (copy, nonatomic) NSString *lineDelimiter; // ivar: lineDelimiter


-(id)initWithFilePath:(id)arg0 ;
-(id)readDataLine;
-(id)readLine;
-(void)dealloc;
-(void)enumerateDataLinesUsingBlock:(id)arg0 ;
-(void)enumerateJSONObjectsUsingBlock:(id)arg0 ;


@end


#endif