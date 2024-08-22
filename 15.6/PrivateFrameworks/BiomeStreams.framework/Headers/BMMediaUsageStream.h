// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BMMEDIAUSAGESTREAM_H
#define BMMEDIAUSAGESTREAM_H

@class NSString;
@protocol BMSourceStream;

#import <Foundation/Foundation.h>


@interface BMMediaUsageStream : NSObject <BMSourceStream>



@property (readonly, nonatomic) NSString *identifier;


-(id)source;


@end


#endif