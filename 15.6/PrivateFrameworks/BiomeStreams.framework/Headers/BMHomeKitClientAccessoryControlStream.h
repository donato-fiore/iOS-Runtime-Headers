// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BMHOMEKITCLIENTACCESSORYCONTROLSTREAM_H
#define BMHOMEKITCLIENTACCESSORYCONTROLSTREAM_H

@class NSString;
@protocol BMSourceStream, BMStream;

#import <Foundation/Foundation.h>

#import "BMStoreStream.h"

@interface BMHomeKitClientAccessoryControlStream : NSObject <BMSourceStream, BMStream>

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