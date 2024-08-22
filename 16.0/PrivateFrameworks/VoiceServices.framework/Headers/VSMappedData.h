// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSMAPPEDDATA_H
#define VSMAPPEDDATA_H

@class NSMutableData, NSString;

#import <Foundation/Foundation.h>


@interface VSMappedData : NSObject

@property (retain, nonatomic) NSMutableData *fallbackInMemoryData; // ivar: _fallbackInMemoryData
@property (retain, nonatomic) NSString *filePath; // ivar: _filePath
@property (nonatomic) NSUInteger mappedLength; // ivar: _mappedLength
@property (nonatomic) *void mmappedData; // ivar: _mmappedData
@property (nonatomic) BOOL shouldCleanFile; // ivar: _shouldCleanFile
@property (nonatomic) NSUInteger totalLength; // ivar: _totalLength


-(*void)bytesAtOffset:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithFilePath:(id)arg0 initialSize:(NSUInteger)arg1 ;
-(struct _NSRange )appendData:(id)arg0 ;
-(void)_appendToFallbackMemory:(id)arg0 ;
-(void)_appendToMappedMemory:(id)arg0 ;
-(void)_convertToFallbackMemory;
-(void)dealloc;


@end


#endif