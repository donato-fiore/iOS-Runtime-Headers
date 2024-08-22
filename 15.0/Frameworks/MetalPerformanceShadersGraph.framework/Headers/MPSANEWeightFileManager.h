// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSANEWEIGHTFILEMANAGER_H
#define MPSANEWEIGHTFILEMANAGER_H

@class NSFileHandle, NSString;

#import <Foundation/Foundation.h>


@interface MPSANEWeightFileManager : NSObject

@property (nonatomic) NSUInteger currentDataSizeInBytes; // ivar: _currentDataSizeInBytes
@property (nonatomic) NSUInteger currentFileSizeInBytes; // ivar: _currentFileSizeInBytes
@property (nonatomic) NSUInteger currentPaddingSizeInBytes; // ivar: _currentPaddingSizeInBytes
@property (readonly, retain, nonatomic) NSFileHandle *fileHandle; // ivar: _fileHandle
@property (readonly, retain, nonatomic) NSString *filePath; // ivar: _filePath


+(id)weightFileOpsAtPath:(id)arg0 ;
-(NSInteger)writeData:(id)arg0 ;
-(id)initWithFilePath:(id)arg0 ;


@end


#endif