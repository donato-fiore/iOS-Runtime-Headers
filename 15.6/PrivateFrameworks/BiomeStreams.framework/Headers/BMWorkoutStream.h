// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BMWORKOUTSTREAM_H
#define BMWORKOUTSTREAM_H

@class NSString;
@protocol BMSourceStream, BMStream;

#import <Foundation/Foundation.h>

#import "BMStoreStream.h"

@interface BMWorkoutStream : NSObject <BMSourceStream, BMStream>

 {
    BMStoreStream *_storeStream;
}


@property (readonly, nonatomic) NSString *identifier;


-(id)init;
-(id)publisherFromStartTime:(CGFloat)arg0 ;
-(id)source;


@end


#endif