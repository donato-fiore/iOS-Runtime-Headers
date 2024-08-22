// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATCODABLESTREAM_H
#define ATCODABLESTREAM_H

@class MSVStreamReader, MSVStreamWriter, NSFileHandle, NSInputStream;
@protocol NSSecureCoding, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ATCodableStream : NSObject <NSSecureCoding>

 {
    MSVStreamReader *_reader;
    MSVStreamWriter *_writer;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, nonatomic) NSFileHandle *fileHandleForReading; // ivar: _fileHandleForReading
@property (readonly, nonatomic) NSInputStream *inputStream; // ivar: _inputStream


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInputStream:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif