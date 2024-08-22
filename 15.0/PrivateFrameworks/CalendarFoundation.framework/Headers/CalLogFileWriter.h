// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALLOGFILEWRITER_H
#define CALLOGFILEWRITER_H

@class NSString;


#import "CalLogWriter.h"

@interface CalLogFileWriter : CalLogWriter

@property (nonatomic) int fileDescriptor; // ivar: _fileDescriptor
@property (nonatomic) BOOL fileDescriptorIsValid; // ivar: _fileDescriptorIsValid
@property (retain, nonatomic) NSString *path; // ivar: _path


-(id)description;
-(id)initWithParameters:(id)arg0 ;
-(void)dealloc;
-(void)write:(id)arg0 ;


@end


#endif