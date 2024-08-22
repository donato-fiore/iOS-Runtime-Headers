// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCKEYVALUESTOREWRITER_H
#define FCKEYVALUESTOREWRITER_H

@class PBDataWriter, NSOutputStream, NSString;

#import <Foundation/Foundation.h>


@interface FCKeyValueStoreWriter : NSObject

@property (readonly, nonatomic) PBDataWriter *dataWriter; // ivar: _dataWriter
@property (readonly, nonatomic) NSOutputStream *tempFileOutputStream; // ivar: _tempFileOutputStream
@property (readonly, nonatomic) NSString *tempFilePath; // ivar: _tempFilePath


-(BOOL)_moveTempFileToPath:(id)arg0 ;
-(BOOL)writeKVS:(id)arg0 codables:(id)arg1 toFile:(id)arg2 size:(*NSUInteger)arg3 ;
-(NSUInteger)_flushToDisk;
-(NSUInteger)_flushToDiskIfNeeded;
-(id)init;


@end


#endif