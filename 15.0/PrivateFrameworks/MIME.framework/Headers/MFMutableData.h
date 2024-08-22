// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFMUTABLEDATA_H
#define MFMUTABLEDATA_H

@class NSMutableData;
@protocol NSCopying, NSMutableCopying;



@interface MFMutableData : NSMutableData <NSCopying, NSMutableCopying>

 {
    *void _bytes;
    NSUInteger _length;
    NSUInteger _mappedLength;
    NSUInteger _capacity;
    NSUInteger _threshold;
    char * _path;
    int _fd;
    NSUInteger _flushFrom;
    BOOL _flush;
    BOOL _immutable;
    BOOL _vm;
}




-(*void)bytes;
-(*void)mutableBytes;
-(BOOL)mf_immutable;
-(BOOL)writeToFile:(id)arg0 atomically:(BOOL)arg1 ;
-(BOOL)writeToFile:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)writeToURL:(id)arg0 atomically:(BOOL)arg1 ;
-(BOOL)writeToURL:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(NSUInteger)length;
-(id)_initWithFd:(int)arg0 path:(id)arg1 mutable:(BOOL)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithBytes:(*void)arg0 length:(NSUInteger)arg1 ;
-(id)initWithBytesNoCopy:(*void)arg0 length:(NSUInteger)arg1 ;
-(id)initWithBytesNoCopy:(*void)arg0 length:(NSUInteger)arg1 freeWhenDone:(BOOL)arg2 ;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(id)initWithContentsOfFile:(id)arg0 ;
-(id)initWithContentsOfFile:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)initWithContentsOfURL:(id)arg0 ;
-(id)initWithContentsOfURL:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithLength:(NSUInteger)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)subdataWithRange:(struct _NSRange )arg0 ;
-(void)_flushToDisk:(NSUInteger)arg0 capacity:(NSUInteger)arg1 ;
-(void)_mapMutableData:(BOOL)arg0 ;
-(void)appendBytes:(*void)arg0 length:(NSUInteger)arg1 ;
-(void)appendData:(id)arg0 ;
-(void)dealloc;
-(void)mf_makeImmutable;
-(void)setLength:(NSUInteger)arg0 ;
-(void)setMappingThreshold:(unsigned int)arg0 ;


@end


#endif