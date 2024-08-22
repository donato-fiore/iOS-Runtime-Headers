// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FFDEFAULTFILEWRITER_H
#define FFDEFAULTFILEWRITER_H

@class NSDictionary;
@protocol FFFileWriter;

#import <Foundation/Foundation.h>


@interface FFDefaultFileWriter : NSObject <FFFileWriter>



@property (readonly, nonatomic) NSDictionary *dirAttributes; // ivar: _dirAttributes
@property (readonly, nonatomic) NSDictionary *fileAttributes; // ivar: _fileAttributes


-(BOOL)createDirectoryAtURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)writeData:(id)arg0 toFile:(id)arg1 error:(*id)arg2 ;
-(id)init;


@end


#endif