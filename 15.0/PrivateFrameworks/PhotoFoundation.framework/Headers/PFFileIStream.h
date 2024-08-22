// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFFILEISTREAM_H
#define PFFILEISTREAM_H

@class NSError, NSString;
@protocol PFIStream, PFStream;


#import "PFFile.h"

@interface PFFileIStream : PFFile <PFIStream, PFStream>

 {
    *__sFILE _file;
    char * _buffer;
    NSUInteger _bufferLength;
    NSError *_error;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)advanceStream;
-(BOOL)advanceStream:(NSInteger)arg0 distanceMoved:(*NSInteger)arg1 ;
-(BOOL)createDirectoryIfNecessary;
-(BOOL)openStream;
-(BOOL)readStream:(char *)arg0 length:(NSUInteger)arg1 read:(*NSUInteger)arg2 ;
-(BOOL)rewindStream;
-(BOOL)rewindStream:(NSInteger)arg0 ;
-(NSInteger)streamLength;
-(NSInteger)streamPosition;
-(NSUInteger)preferredStreamBlockSize;
-(char *)streamData:(*NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)getStreamError;
-(id)initWithFile:(id)arg0 ;
-(void)closeStream;
-(void)dealloc;
-(void)lock;
-(void)setError:(id)arg0 ;
-(void)unlock;
-(void)updateError;


@end


#endif