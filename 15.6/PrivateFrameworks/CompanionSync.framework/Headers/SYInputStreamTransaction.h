// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SYINPUTSTREAMTRANSACTION_H
#define SYINPUTSTREAMTRANSACTION_H

@class NSURL, NSString, NSInputStream, NSDictionary, NSProgress;
@protocol SYStreamTransaction;

#import <Foundation/Foundation.h>


@interface SYInputStreamTransaction : NSObject <SYStreamTransaction>

 {
    NSURL *_fileURL;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInputStream *inputStream; // ivar: _stream
@property (readonly, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (readonly, nonatomic) NSProgress *progress; // ivar: _progress
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger type;


-(id)initWithURL:(id)arg0 metadata:(id)arg1 decompressedSize:(NSUInteger)arg2 ;


@end


#endif