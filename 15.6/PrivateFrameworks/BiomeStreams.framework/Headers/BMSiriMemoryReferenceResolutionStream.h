// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BMSIRIMEMORYREFERENCERESOLUTIONSTREAM_H
#define BMSIRIMEMORYREFERENCERESOLUTIONSTREAM_H

@class NSString;
@protocol BMSourceStream, BMTimeBasedPublisherStream;

#import <Foundation/Foundation.h>

#import "BMRestrictedStream.h"

@interface BMSiriMemoryReferenceResolutionStream : NSObject <BMSourceStream, BMTimeBasedPublisherStream>

 {
    BMRestrictedStream *_stream;
}


@property (readonly, nonatomic) NSString *identifier;


-(id)init;
-(id)publisher;
-(id)publisherFromStartTime:(CGFloat)arg0 ;
-(id)source;


@end


#endif