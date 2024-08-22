// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APCONFIGURATIONDECOMPRESSOR_H
#define APCONFIGURATIONDECOMPRESSOR_H

@class NSFileManager;

#import <Foundation/Foundation.h>


@interface APConfigurationDecompressor : NSObject

@property (retain, nonatomic) NSFileManager *filemanager; // ivar: _filemanager


-(BOOL)untarFileAtPath:(id)arg0 ;
-(BOOL)unzipContentsOfFileAtPath:(id)arg0 toPath:(id)arg1 ;
-(NSInteger)decompressTarAtPath:(id)arg0 toPath:(id)arg1 ;
-(NSUInteger)sizeForFileAtPath:(id)arg0 ;
-(NSUInteger)sizeForObject:(id)arg0 atOffset:(NSUInteger)arg1 ;
-(char)typeForObject:(id)arg0 atOffset:(NSUInteger)arg1 ;
-(id)dataForObject:(id)arg0 inRange:(struct _NSRange )arg1 orLocation:(NSUInteger)arg2 andLength:(NSUInteger)arg3 ;
-(id)init;
-(id)nameForObject:(id)arg0 atOffset:(NSUInteger)arg1 ;
-(id)unzipData:(id)arg0 ;
-(void)removeFileAtPath:(id)arg0 ;
-(void)writeFileDataForFile:(id)arg0 atLocation:(NSUInteger)arg1 withLength:(NSUInteger)arg2 atPath:(id)arg3 ;


@end


#endif