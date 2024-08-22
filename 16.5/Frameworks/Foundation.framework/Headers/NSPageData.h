// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSPAGEDATA_H
#define NSPAGEDATA_H

@class NSData, NSDate;


#import "NSString.h"

@interface NSPageData : NSData {
    NSData *data;
    NSDate *_originalFileModDate;
    NSString *_originalFilePath;
}




+(NSInteger)_umask;
+(void)initialize;
-(*void)bytes;
-(NSUInteger)length;
-(NSUInteger)writeFd:(NSInteger)arg0 ;
-(NSUInteger)writeFile:(id)arg0 ;
-(NSUInteger)writePath:(id)arg0 docInfo:(id)arg1 errorHandler:(id)arg2 remapContents:(BOOL)arg3 hardLinkPath:(id)arg4 ;
-(id)_mappedFile;
-(id)data;
-(id)deserializer;
-(id)init;
-(id)initFromSerializerStream:(id)arg0 length:(NSUInteger)arg1 ;
-(id)initWithBytes:(*void)arg0 length:(NSUInteger)arg1 ;
-(id)initWithBytesNoCopy:(*void)arg0 length:(NSUInteger)arg1 ;
-(id)initWithContentsOfFile:(id)arg0 ;
-(id)initWithContentsOfMappedFile:(id)arg0 ;
-(id)initWithContentsOfMappedFile:(id)arg0 withFileAttributes:(id)arg1 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithDataNoCopy:(id)arg0 ;
-(void)_setOriginalFileInfoFromFileAttributes:(id)arg0 ;
-(void)dealloc;


@end


#endif