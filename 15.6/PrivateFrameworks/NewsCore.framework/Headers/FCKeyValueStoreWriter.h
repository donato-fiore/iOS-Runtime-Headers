// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCKEYVALUESTOREWRITER_H
#define FCKEYVALUESTOREWRITER_H

@class PBDataWriter, NSOutputStream, NSString;

#import <Foundation/Foundation.h>


@interface FCKeyValueStoreWriter : NSObject

@property (readonly, nonatomic) PBDataWriter *dataWriter; // ivar: _dataWriter
@property (readonly, nonatomic) NSOutputStream *tempFileOutputStream; // ivar: _tempFileOutputStream
@property (readonly, nonatomic) NSString *tempFilePath; // ivar: _tempFilePath


-(BOOL)_moveTempFileToPath:(id)arg0 ;
-(BOOL)writeKVS:(id)arg0 toFile:(id)arg1 size:(*NSUInteger)arg2 ;
-(NSUInteger)_flushToDisk;
-(NSUInteger)_flushToDiskIfNeeded;
-(id)init;


@end


#endif