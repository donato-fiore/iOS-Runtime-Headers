// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BMHOMEKITCLIENTACTIONSETSTREAM_H
#define BMHOMEKITCLIENTACTIONSETSTREAM_H

@class NSString;
@protocol BMSourceStream, BMStream;

#import <Foundation/Foundation.h>

#import "BMStoreStream.h"

@interface BMHomeKitClientActionSetStream : NSObject <BMSourceStream, BMStream>

 {
    BMStoreStream *_storeStream;
}


@property (readonly, nonatomic) NSString *identifier;


-(id)init;
-(id)publisher;
-(id)publisherFromStartTime:(CGFloat)arg0 ;
-(id)source;


@end


#endif