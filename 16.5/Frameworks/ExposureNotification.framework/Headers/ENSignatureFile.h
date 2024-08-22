// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ENSIGNATUREFILE_H
#define ENSIGNATUREFILE_H

@class NSMutableData, NSArray;

#import <Foundation/Foundation.h>


@interface ENSignatureFile : NSObject {
    *__sFILE _fileHandle;
    NSMutableData *_outputData;
}


@property (copy, nonatomic) NSArray *signatures; // ivar: _signatures


+(id)_signatureFileWithProtobufCoder:(id)arg0 error:(*id)arg1 ;
+(id)signatureFileWithArchive:(id)arg0 error:(*id)arg1 ;
+(id)signatureFileWithBytes:(char *)arg0 length:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)closeAndReturnError:(*id)arg0 ;
-(BOOL)openForWritingToData:(id)arg0 error:(*id)arg1 ;
-(BOOL)openWithFileSystemRepresentation:(char *)arg0 reading:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)writeAndReturnError:(*id)arg0 ;


@end


#endif