// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSANEWEIGHTFILEMANAGER_H
#define MPSANEWEIGHTFILEMANAGER_H

@class NSString, NSFileHandle, NSMutableArray, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface MPSANEWeightFileManager : NSObject {
    unordered_map<void *, unsigned long, std::hash<void *>, std::equal_to<void *>, std::allocator<std::pair<void *const, unsigned long>>> _weightsDataIndex;
}


@property (nonatomic) NSUInteger currentDataSizeInBytes; // ivar: _currentDataSizeInBytes
@property (nonatomic) NSUInteger currentFileSizeInBytes; // ivar: _currentFileSizeInBytes
@property (nonatomic) NSUInteger currentPaddingSizeInBytes; // ivar: _currentPaddingSizeInBytes
@property (readonly, retain, nonatomic) NSString *fileDirectoryPath; // ivar: _fileDirectoryPath
@property (readonly, retain, nonatomic) NSFileHandle *fileHandle; // ivar: _fileHandle
@property (readonly, retain, nonatomic) NSString *filePath; // ivar: _filePath
@property (nonatomic) BOOL useInMemory; // ivar: _useInMemory
@property (readonly, retain, nonatomic) NSMutableArray *weights; // ivar: _weights
@property (readonly, retain, nonatomic) NSMutableDictionary *weightsInMemoryDictionary; // ivar: _weightsInMemoryDictionary


+(id)weightFileOpsAtPath:(id)arg0 ;
-(NSInteger)writeData:(id)arg0 value:(struct Value )arg1 index:(*NSUInteger)arg2 ;
-(id)initWithFilePath:(id)arg0 ;
-(void)releaseWeightsData;


@end


#endif