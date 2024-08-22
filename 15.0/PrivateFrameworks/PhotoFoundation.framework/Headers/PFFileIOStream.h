// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFFILEIOSTREAM_H
#define PFFILEIOSTREAM_H

@class NSString;
@protocol PFOStream;


#import "PFFileIStream.h"

@interface PFFileIOStream : PFFileIStream <PFOStream>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)openStream;
-(BOOL)reserveLength:(NSInteger)arg0 ;
-(BOOL)truncateLength:(NSInteger)arg0 ;
-(BOOL)writeStream:(char *)arg0 length:(NSUInteger)arg1 written:(*NSUInteger)arg2 ;
-(BOOL)writeStream:(id)arg0 ;
-(BOOL)writeStream:(id)arg0 blockSize:(NSUInteger)arg1 ;


@end


#endif